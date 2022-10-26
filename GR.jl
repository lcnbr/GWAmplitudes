Graviton=GaugeVectorField{:Graviton}
Base.adjoint(::Type{Graviton})=Graviton
Phi1 =  ScalarField{:Phi1}
Phi1c = adjoint(Phi1)
Phi2 = ScalarField{:Phi2}
Phi2c=  adjoint(Phi2)

Fields.charge(::Type{Phi1})=:qch1
Fields.charge(::Type{Phi2})=:qch2
Fields.mass(::Type{Phi1})=:m1
Fields.mass(::Type{Phi2})=:m2
Fields.color(::Type{Graviton})="grey"
Fields.color(::Type{Phi1})="blue"
Fields.color(::Type{Phi2})="red"
Fields.color(::Type{Phi1c})="deepskyblue"
Fields.color(::Type{Phi2c})="lightcoral"