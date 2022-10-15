#-
#define n "13";

** DnDimensional regularisation in D dimensions 
Dimension D; 

Auto V p,q,k,l;
Auto I nu;
CF prop,dot(symmetric),dots(symmetric);
S e,qch1,qch2,a,b,m1,m2,u;

Set extMom:p,p1,...,p'n',pb1,...,pb'n';
Set barMom: pb1,...,pb'n';
Set loopMom:k, k1,...,k'n',l,l1,...,l'n';

*=========================================================================*

Off Statistics;

#include diags.frm #d4l1

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

Id prop(a?,b?,p?) = prop(a,b,p.p);


*--#[ convert dot products to improve pattern matching
#procedure todot
id p?.q?=dot(p,q);
argument;
id p?.q?=dot(p,q);
argument;
id p?.q?=dot(p,q);
endargument;
endargument;
#endprocedure
*--#]
#call todot

Id dot(p?barMom,q)=0;
argument;
Id dot(p?barMom,q)=0;
endargument;

.sort
CF propagators,propproc,propmark;
#call proplist
.sort
CF coef;
#call propproc  
.sort
S loopdotcount
S power,massIndex,Coef,loopdotcount,summand;
CF mass,assoc, matches,dt(symmetric);
S Coef,summand;
L [matches]=matches;

Id prop(?a,loopdotcount?)=
    prop(?a,0,loopdotcount);*now use last for summation.
argument propagators;
Id prop(?a,loopdotcount?)=
    prop(?a,0,loopdotcount);*now use last for summation.
endargument;

#call matchdots(`$max')
.sort 
.sort
factorize;
.sort
Print;
.sort
unfactorize;
.sort
.sort
#write "Commuted dots to mark the selected dot: %E",copypropagators;
.sort

CF assocProc,summation;
S markedCoef,otherPower;
#call eliminateDots(`$max') 


.sort

S otherPower;

Id propproc(?a)=prop(?a);
Id propmark(?a)=prop(?a);
argument propagators;
Id propproc(?a)=prop(?a);
Id propmark(?a)=prop(?a);
endargument;


* Sum everything up
repeat;
Id prop(?a,dot(p?,q?),Coef?,summand?,loopdotcount?)
        =prop(?a,summand+Coef*dt(p,q),loopdotcount);
Id prop(?a,dots(p?,q?),Coef?,summand?,loopdotcount?)
        =prop(?a,summand+Coef*dt(p,q),loopdotcount);
argument propagators;
Id prop(?a,dot(p?,q?),Coef?,summand?,loopdotcount?)
        =prop(?a,summand+Coef*dt(p,q),loopdotcount);
Id prop(?a,dots(p?,q?),Coef?,summand?,loopdotcount?)
        =prop(?a,summand+Coef*dt(p,q),loopdotcount);
endargument;
endrepeat;


* if the summand = 0 we can remove the term
Id prop(power?,massIndex?,0,loopdotcount?)
        =0;
* if the power = 0, prop  =   1
Repeat;
Id prop(power?,?a)*prop(otherPower?,?a)=prop(power+otherPower,?a);
endrepeat;
Id coef(a?)=a;
argument;
  Id coef(a?)=a;
  argument;
  Id coef(a?)=a;
endargument;
endargument;


Id mass(0)=0;
Id mass(1)=m1^2;
Id mass(2)=m2^2;



.sort

CF TOP;
AutoDeclare CF prop;
S c,d;
#$num=1; ; 


#do i=1,1
  .sort
  argument propagators;
  if (match(prop(power?$nu,?a$a)));
  redefine i "0";
  $match=1;
  endif;
  endargument;
  .sort
  #if '$match'
    argument propagators;
    id prop($nu,$a)=prop`$num'($nu,$a);
    endargument;
    Id prop(power?,$a)=prop`$num'(power); 
  #endif
  .sort

  #$num=$num+1;




#enddo
Id prop1(power?)=TOP(power);

#do i=2,$num
  Id prop`i'(power?)*TOP(?nu)=TOP(?nu,power);
#enddo


.sort

* symplify output

 Format O2;
Print;
.end
.end