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


L diag3=5*p3.k5*prop(-1,1,2*p3.k5+k1.q1)+prop(-1,1,p2.k5+k1.q1)+2*q2.p5*prop(-1,1,p3.k5+k1.q1); 
*L diag2 = prop(-1,2,p3.k5+k1.q1)+prop(-1,2,p2.k5+k1.q1)+2*q2.p5*prop(-1,2,p3.k5+k1.q1);
*L diag4=5*p3.q1*prop7(1,1,6*p3.q1 +7*k1.q1)+prop(-1,1,p2.k5+k1.q1)+2*q2.p5*prop(-1,1,p3.k5+k1.q1); 
L out=c;



#$count = 1;
#$coef = 1;
L test=f(-p.q-8*q.q)*p.q;
splitarg f;
argument f;
  id p?.q?=coef(coeff_)* p.q ;  
endargument;
factarg f;
argument f;
  id coef(x?)=x;
endargument;
id f(p?.q?,b?,p1?.q1?,c?)=f(p.q*b+p1.q1*c);
.sort
polyfun coef;

Id x?*f(?a,x?)=x*f(?a,x);
splitarg prop7;
Id d?*p?.q?*prop7(?a,c?*p?.q?) = prop7(?a,d*p.q);

while (match(prop(a?$a,b?$b,c?$c)));
  Id prop($a,$b,$c)=prop5($a,$b,$c);*single out matched prop
  splitarg prop5;*split out all args 
  argument prop5;
    id p?.q?=coef(coeff_)* p.q ; 
  endargument;
  factarg prop5;
  argument prop5;
    id coef(x?)=x;
  endargument;
  Id prop5(?a)=prop5(?a,0);*add dummy argument to store sum
  while (match(prop5($a,$b,?a,b?,c?)));*  as long as there are still unsummed args:
    Id p?loopMom.q?*prop5($a,$b,?a,p?.q?,co?,d?)=1/co*prop5($a+1,$b,?a,co*p.q+d)-1/co*prop5($a,$b,?a,co*p.q+d)*(prop5(1,$b,?a,d));
    Id prop5($a,$b,?a,c?,co?,d?)=co*prop6($a,$b,?a,d+c);
    Id prop6(?a)=prop5(?a);
  $count=$count+1;
  endwhile;
  Id prop5(?a)=prop4(?a);
endwhile;
id prop4(0,?a)=1;
id prop4(?a)=prop(?a);
id c=$count;
.sort
polyfun;
id coef(x?)=x;
Print;
.end