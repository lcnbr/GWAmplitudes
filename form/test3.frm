S a,b,c,d,x,y,co;
#define n "13";
AutoDeclare CF prop,f,coef;
AutoDeclare V p,k,q;
Indices i,j,k,l,m,n;
Set extMom:p1,...,p'n',q1,...,q'n';
Set loopMom: k1,...,k'n';
polyfun coef;
L mom=p1(i)+k1(i)-q1(i);
L diag=k1.q1*prop(-1,1,mom*mom);


*L diag3=5*p3.k5*prop(-1,1,2*p3.k5+k1.q1)+prop(-1,1,p2.k5+k1.q1)+2*q2.p5*prop(-1,1,p3.k5+k1.q1); 
*L diag2 = prop(-1,2,p3.k5+k1.q1)+prop(-1,2,p2.k5+k1.q1)+2*q2.p5*prop(-1,2,p3.k5+k1.q1);
*L diag4=5*p3.q1*prop7(1,1,6*p3.q1 +7*k1.q1)+prop(-1,1,p2.k5+k1.q1)+2*q2.p5*prop(-1,1,p3.k5+k1.q1); 
L out=c;



#$count = 1;
#$coef = 1;

Print;
.sort
splitarg prop;*split out all args 
argument prop;
id p?.q?=coef(coeff_)* p.q ; 
endargument;
factarg prop;

Id prop(?a)=prop(?a,0);*add dummy argument to store sum
.sort
polyfun;
argument;
Id coef(x?)=x;
endargument;
repeat;
Id p?loopMom.q?*prop(x?,y?,?a,p?.q?,co?,d?)=1/co*prop(x+1,y,?a,co*p.q+d)-1/co*prop(x,y,?a,co*p.q+d)*(prop(1,y,?a,d));
Id  prop(x?,y?,?a,p?.q?,c?,d?)=prop(x,y,?a,d+p.q*c);
endrepeat;

*while (match(prop(a?$nu,b?$massIndex,?d,b?,c?)));*  as long as there are still unsummed args:
*Id p?loopMom.q?*prop($nu,$massIndex,?a,p?.q?,coef?,d?)=1/coef*prop($nu+1,$massIndex,?a,coef*p.q+d)-1/coef*prop($nu,$massIndex,?a,coef*p.q+d)*(prop(1,$massIndex,?a,d));
*Id once prop($nu,$massIndex,?a,c?,coef?,d?)=coef*prop($nu,$massIndex,?a,d+c*coef);
*$count=$count+1;
*endwhile;

id prop(0,?a)=1;
id c=$count;
.sort
polyfun;
id coef(x?)=x;
Print;
.end