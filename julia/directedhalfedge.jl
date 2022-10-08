# Half-edge graphs
##################
module DirectedHalfEdgeGraphs

export add_edge!, add_edges!, add_vertex!, add_vertices!, add_vertices_with_indices!,
  rem_edge!, rem_edges!, rem_vertex!, rem_vertices!,
  neighbors, inneighbors, outneighbors, all_neighbors, degree, induced_subgraph,
  AbstractDirectedHalfEdgeGraph, DirectedHalfEdgeGraph, SchDirectedHalfEdgeGraph, vertex, half_edges,
  add_dangling_edge!, add_dangling_edges!,
  to_graphviz, to_graphviz_property_graph

using Catlab
using Base: @invoke
using Catlab.CategoricalAlgebra.CSets,Catlab.Graphics,Catlab.Graphs.BasicGraphs,Catlab.Graphics.GraphvizGraphs


@present SchDirectedHalfEdgeGraph <: SchHalfEdgeGraph begin
  dir::AttrType
  sink::Attr(H, dir)

end

""" Abstract type for half-edge graphs, possibly with data attributes.
"""


@abstract_acset_type AbstractDirectedHalfEdgeGraph <: AbstractHalfEdgeGraph


@acset_type DirectedHalfEdgeGraphGeneric(SchDirectedHalfEdgeGraph, index=[:inv, :vertex, :sink]) <: AbstractDirectedHalfEdgeGraph

DirectedHalfEdgeGraph=DirectedHalfEdgeGraphGeneric{Bool}

sink(g::AbstractDirectedHalfEdgeGraph, args...) = subpart(g, args..., :sink)
source(g::AbstractDirectedHalfEdgeGraph, args...) = .!subpart(g, args..., :sink)

""" Half-edges in a half-edge graph, or incident to a vertex.
"""
in_edges(g::AbstractDirectedHalfEdgeGraph) = parts(g, :H)[sink(g)]

function in_edges(g::AbstractDirectedHalfEdgeGraph, v)
  edges = incident(g, v, :H)
  filter = sink(g, edges)
  return edges[filter]
end
out_edges(g::AbstractDirectedHalfEdgeGraph) = parts(g, :H)[source(g)]

function out_edges(g::AbstractDirectedHalfEdgeGraph, v)
  edges = incident(g, v, :H)
  filter = source(g, edges)
  return edges[filter]
end


function half_edge_pairs(g::AbstractDirectedHalfEdgeGraph, src::Int, tgt::Int)
  out = out_edges(g, src)
  in = inv(g, out)
  has_tgt = vertex(g, in) .== tgt
  (out[has_tgt], in[has_tgt])
end


function add_half_edge_pairs!(g::AbstractDirectedHalfEdgeGraph, srcs::AbstractVector{Int},
  tgts::AbstractVector{Int}; kw...)
  @assert (n = length(srcs)) == length(tgts)
  outs = add_parts!(g, :H, n; vertex=srcs, kw...)
  ins = add_parts!(g, :H, n; vertex=tgts, kw...)
  set_subpart!(g, outs, :inv, ins)
  set_subpart!(g, outs, :sink, falses(n))
  set_subpart!(g, ins, :inv, outs)
  set_subpart!(g, ins, :sink, trues(n))
  first(outs):last(ins)
end


""" Add a dangling edge to a half-edge graph.
A "dangling edge" is a half-edge that is paired with itself under the half-edge
involution. They are usually interpreted differently than "self-loops", i.e., a
pair of distinct half-edges incident to the same vertex.
"""

function add_dangling_edge!(g::AbstractDirectedHalfEdgeGraph, v::Int; dir=true, kw...)
  H=@invoke add_dangling_edge!(g::AbstractHalfEdgeGraph,v;kw...)
  set_subpart!(g, H, :sink,dir)
end

function add_dangling_edges!(g::AbstractDirectedHalfEdgeGraph, vs::AbstractVector{Int}; dirs=AbstractVector{Bool},kw...)
  H= @invoke add_dangling_edges!(g::AbstractHalfEdgeGraph,vs;kw...)
  set_subpart!(g, H, :sink,dirs)
end
function default_node_attrs(labels::Union{Symbol,Bool})
  shape = labels isa Symbol ? "ellipse" : (labels ? "circle" : "point")
  Dict(:shape => shape, :width => "0.05", :height => "0.05", :margin => "0")
end
node_label(g, name::Symbol, v::Int) = Dict(:label => string(g[v, name]))
node_label(g, labels::Bool, v::Int) = Dict(:label => labels ? string(v) : "")

edge_label(g, name::Symbol, e::Int) = Dict(:label => string(g[e, name]))
edge_label(g, labels::Bool, e::Int) =
  labels ? Dict(:label => string(e)) : Dict{Symbol,String}()

to_graphviz(g::AbstractDirectedHalfEdgeGraph; kw...) =
  to_graphviz(to_graphviz_property_graph(g; kw...))

function to_graphviz_property_graph(g::AbstractDirectedHalfEdgeGraph;
    prog::AbstractString="neato", graph_attrs::AbstractDict=Dict(),
    node_attrs::AbstractDict=Dict(), edge_attrs::AbstractDict=Dict(),
    node_labels::Union{Symbol,Bool}=false, edge_labels::Union{Symbol,Bool}=false)
  pg = PropertyGraph{Any}(; prog = prog,
    graph = graph_attrs,
    node = merge!(default_node_attrs(node_labels), node_attrs),
    edge = merge!(Dict(:arrowsize => "0.5"), edge_attrs),
  )
  for v in vertices(g)
    add_vertex!(pg, label=node_labels ? string(v) : "")
  end
  vis=Set()
  for e in half_edges(g)

    if e == inv(g,e)
      # Dangling half-edge: add an invisible vertex.
      v = add_vertex!(pg, style="invis", shape="none", label="")
      if sink(g,e)
        e′ = add_edge!(pg,v, vertex(g,e))
      else
        e′ = add_edge!(pg, vertex(g,e), v)
      end
      
      set_eprops!(pg, e′, edge_label(g, edge_labels, e))
      push!(vis, e)
    elseif e < inv(g,e)
      # Pair of distict half-edges: add a standard edge.
      if e ∉ vis
        if sink(g,e)
          e′ = add_edge!(pg, vertex(g,e), vertex(g,inv(g,e)))
        else
          e′ = add_edge!(pg, vertex(g,inv(g,e)), vertex(g,e))
        end
        set_eprops!(pg, e′, edge_label(g, edge_labels, e))
        push!(vis, e)
        push!(vis, inv(g,e))
      end
    end
  end
  pg
end
end