*** Form program to manipulate QGRAF output files
** Depends on a specific style file

#define FILE "/QGRAFout/inoutp1pp2p1L.h"
***Supress output to screen
#- 


** Total number of diagrams to parse:
#define NDIAGRAMS "13";
*******INPUT: The first diagram to calculate is:
#define FIRST "13";
*******INPUT: The last diagram to calculate is:
#define LAST "13";
*******INPUT: The number of scalars in the diagrams are:
#define Nscalars "2";
*******INPUT: The number of in-photons in the diagrams are:
#define Ninphotons "0";
*******INPUT: The number of out-photons in the diagrams are:
#define Noutphotons "0";
*******INPUT: The number of in-particles in the diagrams are:
#define Nin "2"
*******INPUT: The number of out-particles in the diagrams are:
#define Nout "2"
*******INPUT: The max number of inner-indices in the diagrams are:
#define Ninner "20"
*******INPUT: The max number of loop-momenta in the diagrams are:
#define NLoopMom "1";


**** setting dimension, external-momenta, loop-momenta,... 

** DnDimensional regularisation in D dimensions 
Dimension D; 
** eps is the causal prescription for the feynman propagator
S eps xi;
** external-momentum p, and barred version pb, q the transfer-momenta, k loop-momenta, inEps is the photon polarisation
AutoDeclare Vector pb,p,q,k,l,inEps,outEps;
#define n "13";
Set extMom:p1,...,p'n',q1,...,q'n';
Set loopMom: k1,...,k'n',l1,...,l'n';
** QGRAF writes indices to indx(i) and we will map this to indices in(i) , out(i) and inner(i)
AutoDeclare Index in,out,inner;

CF inpol, outpol,prop,vrtx;
CF photon;

** Define the scalar fields
#do i=1, 'Nscalars'
CF phi'i',phi'i'c;
#enddo

CF indx;
** Physical constants, e: electric charge, mi: mass of field i, qchi: charge of field i in units of e
S e qch1 qch2 m1 m2;

** Barred version of constants
S mb1 mb2;
V momen;
I mu, nu,i;
V p;
* Mandelstahm variables
S s t u;
*=========================================================================*
** Diag'i' will be identified with the i'th diagram
AutoDeclare Symbol diag;


Off Statistics;
** All diagrams that are looked at
#do j='FIRST','LAST';
L dia'j'= diag'j';
#enddo

#include 'FILE';

*=========================================================================*
*Convert field indices to form indices

* Form labels in indices as odd negative numbers
** We do the replacement as deep as needed (that is why we use argument endargument)
#do i=1,'Nin'
  argument;
    argument;
      Id indx({-2*'i'+1})=in'i';
    endargument;
    Id indx({-2*'i'+1})=in'i';
  endargument;
#enddo
* Form labels out indices as even negative numbers
#do i=1,'Nout'
  argument;
    argument;
        Id indx({-2*'i'})=out'i';
    endargument;
    Id indx({-2*'i'})=out'i';
  endargument;
#enddo

* Form labels inner indices as positive numbers
#do i=1,{2*'Ninner'}
  argument;
    argument;
      Id indx('i')=inner'i';
    endargument;
    Id indx('i')=inner'i';
  endargument;
#enddo

*=========================================================================*
*Momentum conservation and tranfer

Id p4=-p1-p2-p3;
Id p3=-p2-q;

*==========================================================================*
* Applying feynman rules


* Identification for each type of scalar field
#do i=1, 'Nscalars'

* External scalar field is just a constant:
Id inpol(phi'i'c(?a))=1;
Id inpol(phi'i'(?a))=1;
Id outpol(phi'i'c(?a))=1;
Id outpol(phi'i'(?a))=1;

* External photon field is has a polarization, inEps
#do phoI=1,'Ninphotons'
Id inpol(photon(mu?,p?))=inEps'phoI'(mu);
#enddo
* and outEps
#do phoJ=1,'Noutphotons'
Id outpol(photon(mu?,p?))=outEps'phoJ'(mu);
#enddo

* --- 3pt vertex:
* comes from the derivative in the lagrangian, so we have momenta.

Id vrtx(phi'i'c(?a,p1?),photon(mu?,?b),phi'i'(?c,p2?) )=i_*e*qch'i'*(p2(mu)-p1(mu));

* --- 4pt vertex

* just contracts the indices

Id vrtx(phi'i'c(?a),photon(mu?,?b),photon(nu?,?c),phi'i'(?d))=2*i_*qch'i'^2*e^2*d_(mu,nu);

* -- Propagators
* Are just scalar massive propagators
Id prop(phi'i',mu?,nu?,momen?)=i_* prop(-1,1,momen(i)*momen(i));
* And scalar masseless propagators
Id prop(photon,mu?,nu?,momen?)=i_* prop(-1,0,momen(i)*momen(i))*d_(mu,nu);


#enddo
*==========================================================================*

* Now that the feynman rules have been applied, we can further subsitute variables and manipulate the integrands.

* We want to write the numerator of the integrand as a products of the inverse propagators.







#define bars "0"
#if 'bars'
argument;
Id p1=-(pb1-q/2);
Id p2=-(pb2+q/2);
Id p3=(pb2-q/2);
Id p4=(pb1+q/2);
endargument;
Id p1=-(pb1-q/2);
Id p2=-(pb2+q/2);
Id p3=(pb2-q/2);
Id p4=(pb1+q/2);

argument;
Id pb1.pb1=mb1^2;

Id pb2.pb2=mb2^2;
endargument;

Id pb1.pb1=mb1^2;

Id pb2.pb2=mb2^2;

#else



* p1+p2+p3+p4=0
Id p4=-p1-p2-p3;
Id p3=-p2-q;

* p1+p2=q1+q2
Id q2=p1+p2-q1;
*Id q1 =p1+q;



argument;
* p1+p2+p3+p4=0
Id p4=-p1-p2-p3;
Id p3=-p2-q;

* p1+p2=q1+q2
Id q2=p1+p2-q1;
*Id q1 =p1+q;
endargument;
factorize;
Print;
.sort
#$count=1;
S a,b,c,d,x,y,co;
AutoDeclare CF prop,f,coef;
polyfun coef;
L [Count]=a;
  splitarg prop;*split out all args 
  argument prop;
    id p?.q?=coef(coeff_)* p.q ; 
  endargument;
  factarg prop;

  Id prop(?a)=prop(?a,0);*add dummy argument to store sum
  

  argument;
    Id coef(x?)=x;
  endargument;

repeat;
repeat;
  Id b?*p?loopMom.q?*prop(?a)=1/co*prop(x+1,y,?a,$p.$q,co,?b,d)-1/co*prop(x,y,?a,$p.$q,co,?b,d)*(prop(1,y,?a,?b,d));
  Id p1?.q3?*p?loopMom.q?*prop(?a)=0;
  
  Id p1?loopMom.q3?*p?.q?*prop(?a)=0;
  Id p?loopMom.q?*p?.q?*prop(?a)=0;
endrepeat;
while (match(p?loopMom$p.q?$q*prop(x?,y?,?a,p?.q?,co?,?b,d?)));
  repeat;
    Id p?.q?*prop(x?,y?,?a,p?.q?,co?,?b,d?)=0;
*1/co*prop(x+1,y,?a,$p.$q,co,?b,d)-1/co*prop(x,y,?a,$p.$q,co,?b,d)*(prop(1,y,?a,?b,d));
    $count=$count+1;
  endrepeat;
endwhile;
.sort
polyfun;
repeat;
    Id k1.k1*prop(-1,1,k1.k1,1,0)*prop(?a)*prop(?c)*prop(?b)=0;
    $count=$count+1;
  endrepeat;
* p1+p2=q1+q2
Id q2=p1+p2-q1;
argument;
* p1+p2=q1+q2
Id q2=p1+p2-q1;
endargument;

*repeat;
* Id  prop(x?,y?,?a,p?.q?,c?,d?)=prop(x,y,?a,d+p.q*c);
*endrepeat;
*id prop(0,?a)=1;
*id prop(?a,0)=0;
*id prop(1,1,b?)=b-m1^2;
*id prop(1,2,b?)=b-m2^2;
*id prop(1,0,b?)=b;

Format ;
argument;
Id p1.p1=m1^2;
Id q1.q1=m1^2;
Id p4.p4=m1^2;
Id p2.p2=m2^2;
Id q2.q2=m2^2;
Id p3.p3=m2^2;
endargument;
Id p1.p1=m1^2;
Id q1.q1=m1^2;
Id p4.p4=m1^2;
Id p2.p2=m2^2;
Id q2.q2=m2^2;
Id p3.p3=m2^2;
.sort
polyfun;
Id coef(x?)=x;
Id a=$count;
factorize;

Print ;
#endif




.end