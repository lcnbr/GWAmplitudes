
module Form
using SymbolicUtils
export fIndex,fSymbol,fVector

struct fSymbol
  symbol::SymbolicUtils.Sym
end

struct fIndex 
  dimension::Union{Int,SymbolicUtils.Sym}
  ID
end

function fIndex(dimension)
  a=gensym()
  fIndex(dimension,a)
end


struct fVector 
  symbol::SymbolicUtils.Sym
  index::fIndex
end

fVector(symbol,dimension)=fVector(symbol,fIndex(dimension))
end


module feynmanDiags
using Catlab
using ..Form
using Catlab.Present, Catlab.Graphs.BasicGraphs, Catlab.CategoricalAlgebra.CSets
import Symbolics: variables,value

export FeynmanDiagram



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


mutable struct FeynmanDiagram 
  diagram::FeynmanDiagramACSet{fVector}

  function FeynmanDiagram(nv,ne,srcmap,trgtmap,mommap,extmommap)

    if nv<0 || ne<0 then
      error("FeynmanDiagram: nv,ne,next must be non-negative")
    end

    if length(srcmap)!=ne || length(trgtmap)!=ne then
      error("FeynmanDiagram: srcmap and trgtmap must have length $ne")
    end

    if length(ext_srcmap)!=next || length(ext_trgtmap)!=next then
      error("FeynmanDiagram: ext_srcmap and ext_trgtmap must have length $next")
    end

    
    diagram=@acset FeynmanDiagramACSet{fVector} begin
      V = nv
      E = ne
      extE=next
      src = srcmap
      tgt = trgtmap
      ext_src = ext_srcmap
      ext_tgt = ext_trgtmap
      momentum = mommap
      ext_momentum = extmommap
    end

    new(diagram)
  end
end

function FeynmanDiagram(srcmap,trgtmap,ext_trgtmap)

  ne = length(srcmap)
  nv=maximum([srcmap;trgtmap])
  next=length(ext_trgtmap)
  ext_srcmap=next.+(1:next)
  nv+=next
  innerMom=fVector.(value.(variables(:q,1:ne)),4)
  outerMom=fVector.(value.(variables(:p,1:next)),4)

  print("$nv,$ne,$next,$srcmap,$trgtmap,$ext_srcmap,$ext_trgtmap,$innerMom,$outerMom")
  FeynmanDiagram(nv,ne,next,srcmap,trgtmap,ext_srcmap,ext_trgtmap,innerMom,outerMom)

end

export AbstractDiagram
abstract type AbstractDiagram{Vertices,Edges} end
abstract type AbstractField end

struct ScalarField{T} <: AbstractField
  name
  value::T
end

struct Vertex 
    id
end

struct Edge
  id
  field::AbstractField
end







end