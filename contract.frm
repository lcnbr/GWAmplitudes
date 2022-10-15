#-
#define n "13";

** DnDimensional regularisation in D dimensions 
Dimension D; 

Auto V p,q,k,l;
Auto I nu;
CF prop,dot(symmetric),dots(symmetric),propproc,propmark,propagators,coef;
S e,qch1,qch2,a,b,m1,m2,u;

Set extMom:p,p1,...,p'n';
Set loopMom:k, k1,...,k'n',q,q1,...,q'n',l,l1,...,l'n';

*=========================================================================*

Off Statistics;

#include diags.frm #d3l1

#call momentumRouting

argument;
#call  momentumRouting
argument;
#call  momentumRouting  
endargument;
endargument;



argument;
Id p1=(pb2-q/2);
Id p2=(pb2+q/2);
Id p3=(pb1+q/2);
Id p4=(pb1-q/2);
endargument;
Id p1=(pb2-q/2);
Id p2=(pb2+q/2);
Id p3=(pb1+q/2);
Id p4=(pb1-q/2);
id p?.q?=dot(p,q);
Id dot(p?extMom,q)=0;

.sort
factorize;

.sort
Print;
