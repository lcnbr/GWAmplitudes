* Find all types of propagators from QRGAF


#define kinematics "inout"
#define masses "1"
*Possibilities: bars inin ininasinout inout outout
***Supress output to screen
#- 




*******INPUT: The number of scalars in the diagrams are:
#define Nscalars "2"
*******INPUT: The number of in-photons in the diagrams are:
#define Ninphotons "0"
*******INPUT: The number of out-photons in the diagrams are:
#define Noutphotons "0"
*******INPUT: The number of in-particles in the diagrams are:
#define Nin "2"
*******INPUT: The number of out-particles in the diagrams are:
#define Nout "2"
*******INPUT: The max number of inner-indices in the diagrams are:
#define Ninner "20"
*******INPUT: The max number of loop-momenta in the diagrams are:
#define NLoopMom "1"

#define NextMom "{`Nin'+`Nout'}"


**** setting dimension, external-momenta, loop-momenta,... 

** DnDimensional regularisation in D dimensions 
Dimension D; 
** eps is the causal prescription for the feynman propagator
S eps xi;
** external-momentum p, and barred version pb, q the transfer-momenta, k loop-momenta, inEps is the photon polarisation
AutoDeclare Vector pb,p,q,k,l,inEps,outEps;
Set extMom:p1,...,p'NextMom',q1,...,q'NextMom';
Set loopMom: k1,...,k'NLoopMom',l1,...,l'NLoopMom';
** QGRAF writes indices to indx(i) and we will map this to indices in(i) , out(i) and inner(i)
AutoDeclare Index in,out,inner;

CF inpol, outpol,prop,vrtx;
CF photon, metric;
CF mom,oneMom;

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
* Generic Pattern variables
S a b c d;
*=========================================================================*
** Diag'i' will be identified with the i'th diagram



AutoDeclare Symbol diag;



** All diagrams that are looked at
L diag= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1+q1)*
 prop(phi2,indx(7),indx(8),k1-p1+q2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-2),-q1),photon(indx(5),-k1+q1),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(4),-k1+p1),phi2(indx(7),k1-p1+q2))*
 vrtx(phi2c(indx(8),-k1+p1-q2),photon(indx(6),k1-q1),phi2(indx(-3),p2));



* Identification for each type of scalar field
#do i=1, 'Nscalars'


* -- Propagators'j'
* Are just scalar massive propagators'j'


Id prop(phi'i',indx(a?),indx(b?),momen?)=i_* prop(-1,'i',mom(momen));
* And scalar masseless propagators'j'
Id prop(photon,indx(a?),indx(b?),momen?$photonMomen)=i_* prop(-1,0,mom(momen))*metric(indx(a),indx(b));

.sort
CF coef;
*Polyfun coef;
*argument, prop;
*splitarg mom;*split out all args into terms
*argument mom;
**Id a?=coef(coeff_)*oneMom(a/coeff_);
*Id p?=oneMom(p);
*** Id mom(?c,coef(a?)*oneMom(p),?b)=mom;* Further split out arguments into coefs and terms
**
*endargument;
*endargument;
*.sort
*argument, prop;
*factarg ,(-1), mom;
*
*endargument;
*

#enddo
.sort
S power,massIndex,alpha;
#include kinematic22switch.frm

id prop(power?,0,a?)=prop(power,a);
#do i=1, 'Nscalars'
id prop(power?,'i',a?)=prop(power,a-m'i'^2);
#enddo
argument, prop;
*id p?loopMom=alpha*p;
endargument;
#write "Number of extra symbols %s",'extrasymbols_'
.sort
Print;
.sort


CF propagators;
ExtraSymbols ,underscore,Prop;
topolynomial , Onlyfunctions, prop;

#define start "{`extrasymbols_'+1}"
.sort:collect;
#write "Number of extra symbols %s",'extrasymbols_'


#do i=`start','extrasymbols_'

L prop'i'=extrasymbol_(Prop'i'_);
#enddo
argument, prop;
  argument, mom;
id k1=l1+p1;
  endargument;
endargument;



Print <prop1>,...,<prop'extrasymbols_'>;  


.end