CF comF,dot,coef;
AutoDeclare V p,q;
S x,z,y;

L test = (2*dot(p1,p2)-dot(p,q)+dot(p1,q1)) *comF(1,2,2*dot(p1,p2)-dot(p,q)+dot(p1,q1),3); 

.sort
polyfun coef; *turns coefs into coef(coefs)

splitarg comF;*split out all args into terms
argument comF;
    id dot(p?,q?)=coef(coeff_)* dot(p,q) ; 
endargument;
factarg comF;* Further split out arguments into coefs and terms



Print;

.end