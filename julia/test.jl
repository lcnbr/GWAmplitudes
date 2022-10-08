module Tst
include("qin.jl")


include("directedhalfedge.jl")
using .feynmanDiags
using .Form
using .DirectedHalfEdgeGraphs

using Catlab.Present, Catlab.Graphs.BasicGraphs, Catlab.CategoricalAlgebra.CSets
using Catlab.Graphics.GraphvizGraphs
using Catlab
using Symbolics, SymbolicUtils
import Symbolics: value, variable,variables

a = fIndex(1)
b = fIndex(1)
a === b


gh = @acset DirectedHalfEdgeGraph begin
  V = 4
  H = 7
  vertex=[1,2,3,4,1,2,3]
  inv=[2,1,3,5,4,7,6]
  sink=[1,1,0,1,0,1,0].>0
end

add_edges!(gh, [1,2,3], [2,3,1])
add_dangling_edges!(gh, [1,1,3])
half_edges(gh)
subpart(gh,:inv)
incident(gh,2,:vertex)
to_graphviz(gh)

c =  fVector.(value.(variables(:q,1:4)),4)


# Construct a weighted graph, with floats as edge weights

fTest=FeynmanDiagram(8,5,4,[1,2,3,4,2],[2,3,4,2,2],[5,6,7,8],[1,2,3,4],fVector.(value.(variables(:q,1:5)),4),fVector.(value.(variables(:q,1:4)),4))

fTest2=FeynmanDiagram([1,2,3,4,2],[2,3,4,2,2],[1,2,3,4])
typeof(fTest2.diagram)<:HasGraph

to_graphviz(fTest2.diagram)
fTest2.diagram

@present SchFeynmanDiagram(FreeSchema) <: SchHalfEdgeGraph begin   
  Dir::AttrType
  dir::Hom(H,Dir)

  Mom::AttrType
  momentum::Attr(H,Mom)

  compose(inv,momentum)==momentum
end

@abstract_acset_type AbstractFeynmanDiagram <: AbstractHalfEdgeGraph

@acset_type FeynmanDiagramACSet(SchFeynmanDiagram,
  index=[:vertex,:momentum,:dir]) <: AbstractFeynmanDiagram


@acset FeynmanDiagramACSet{Int,Int} begin
  V = 10
  
  end


  using Catlab, Catlab.CategoricalAlgebra

# Write down the schema for a weighted graph
@present SchDirectedHalfGraph(FreeSchema) begin
  V::Ob
  H::Ob
  inv::Hom(H,H)
  vertex::Hom(H,V)

  dir::AttrType
  sink::Attr(H,dir)
end

# Construct the type used to store acsets on the previous schema
# We *index* src and tgt, which means that we store not only
# the forwards map, but also the backwards map.
@acset_type DirectedHalfGraphGen(SchDirectedHalfGraph, index=[:inv,:sink])

DirectedHalfGraph=DirectedHalfGraphGen{Bool}
# Construct a weighted graph, with floats as edge weights
g = @acset DirectedHalfGraph begin
V = 4
H = 7
vertex=[1,2,3,4,1,2,3]
inv=[2,1,3,5,4,7,6]
sink=[1,1,0,1,0,1,0].>0
end
end