* Find all types of propagators from QRGAF

#define FILE "/QGRAFout/inoutp1pp2p1L.h"
#define kinematics "inout"
#define masses "1"
*Possibilities: bars inin ininasinout inout outout
***Supress output to screen
#- 


** Total number of diagrams to parse:
#define NDIAGRAMS "13"
*******INPUT: The first diagram to calculate is:
#define FIRST "1"
*******INPUT: The last diagram to calculate is:
#define LAST "13"
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
CF mom;

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
#do j='FIRST','LAST';

L dia'j'= diag'j';
#enddo


#include 'FILE';
* Identification for each type of scalar field
#do i=1, 'Nscalars'


* -- Propagators'j'
* Are just scalar massive propagators'j'


Id prop(phi'i',indx(a?),indx(b?),momen?)=i_* prop(-1,'i',mom(momen));
* And scalar masseless propagators'j'
Id prop(photon,indx(a?),indx(b?),momen?$photonMomen)=i_* prop(-1,0,mom(momen))*metric(indx(a),indx(b));



#enddo
.sort
S power,massIndex,alpha;
#include kinematic22switch.frm

id prop(power?,0,a?)=prop(power,a);
#do i=1, 'Nscalars'
id prop(power?,'i',a?)=prop(power,a-m'i'^2);
#enddo
argument, prop;
id p?loopMom=alpha*p;
endargument;
#write "Number of extra symbols %s",'extrasymbols_'
.sort


CF propagators;
ExtraSymbols ,underscore,Prop;
topolynomial , Onlyfunctions, prop;

#define start "{`extrasymbols_'+1}"
.sort:collect;


#do i={`start'+1},'extrasymbols_'

L prop'i'=extrasymbol_(Prop'i'_);
#enddo





Print <prop1>,...,<prop'extrasymbols_'>;  
.end