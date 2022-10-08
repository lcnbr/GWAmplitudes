*** Form program to manipulate QGRAF output files
** Depends on a specific style file

#define FILE "/QGRAFout/inoutp1pp2p1L.h"
#define kinematics "inout"
#define masses "0"
*Possibilities: bars inin ininasinout inout outout
***Supress output to screen
#- 


** Total number of diagrams to parse:
#define NDIAGRAMS "13";
*******INPUT: The first diagram to calculate is:
#define FIRST "1";
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
CF photon, metric;

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
S a b c d;
*=========================================================================*
** Diag'i' will be identified with the i'th diagram



AutoDeclare Symbol diag;


Off Statistics;
** All diagrams that are looked at
#do j='FIRST','LAST';
.global
L dia'j'= diag'j';


#include 'FILE';

*==========================================================================*
* Applying feynman rules


* Identification for each type of scalar field
#do i=1, 'Nscalars'


* -- Propagators'j'
* Are just scalar massive propagators'j'


Id prop(phi'i',indx(a?),indx(b?),momen?)=i_* prop(-1,'i',momen.momen,a,b);
* And scalar masseless propagators'j'
Id prop(photon,indx(a?),indx(b?),momen?)=i_* prop(-1,0,momen.momen,a,b)*metric(indx(a),indx(b));
#enddo

.sort

*=========================================================================*
*Convert field indices to form indices

* Form labels in indices as odd negative numbers
** We do the replacement as deep as needed (that is why we use argument endargument)
#do j=1,'Nin'
  argument;
    argument;
      Id indx({-2*'j'+1})=in'j';
    endargument;
    Id indx({-2*'j'+1})=in'j';
  endargument;
#enddo
* Form labels out indices as even negative numbers
#do j=1,'Nout'
  argument;
    argument;
        Id indx({-2*'j'})=out'j';
    endargument;
    Id indx({-2*'j'})=out'j';
  endargument;
#enddo

* Form labels inner indices as positive numbers
#do j=1,{2*'Ninner'}
  argument;
    argument;
      Id indx('j')=inner'j';
    endargument;
    Id indx('j')=inner'j';
  endargument;
#enddo

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



#enddo
Id metric(mu?,nu?)=d_(mu,nu);
*=========================================================================*
*==========================================================================*

* Now that the feynman rules have been applied, we can further subsitute variables and manipulate the integrands.

* We want to write the numerator of the integrand as a products of the inverse propagators'j'.






#switch 'kinematics'
#case inin
  #if 'masses'
  argument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  endargument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  #endif
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;


  argument;
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;
  endargument;
#break
#case bars
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
  #if 'masses'
  argument;
  Id pb1.pb1=mb1^2;
  Id pb2.pb2=mb2^2;
  endargument;

  Id pb1.pb1=mb1^2;
  Id pb2.pb2=mb2^2;
  #endif

#break
#case ininasinout
  #if 'masses'
  argument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  endargument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  #endif
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;
  Id p3=-p2-q;

  argument;
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;
  Id p3=-p2-q;
  endargument;

#break
#case inout
  #if 'masses'
  argument;
  Id p1.p1=m1^2;
  Id q1.q1=m1^2;
  Id p2.p2=m2^2;
  Id q2.q2=m2^2;
  endargument;
  Id p1.p1=m1^2;
  Id q1.q1=m1^2;
  Id p2.p2=m2^2;
  Id q2.q2=m2^2;
  #endif

* p1+p2=q1+q2
  Id q2=p1+p2-q1;
  Id q1 =p1+q;

  argument;
* p1+p2=q1+q2
  Id q2=p1+p2-q1;
  Id q1 =p1+q;
  endargument;

#break
#case outout
#break
#endswitch
.sort
factorize;
.sort
#write "Diagram %s gives: %e", 'j',dia'j'
.sort
unfactorize;
.sort

CF prop,propproc,propagators'j',matches,pr,pc,dot(symmetric),dots(symmetric),num,coef;
S a,b,c,d,e,f,g,x,y,help,west,m1,m2,u,;
AutoDeclare V p,q,k,l;
L [propagators'j']=propagators'j';
* momen1
* momen2;
L [count]=u;


#do i=1,1
  if(match(prop(?a$a))) redefine i "0";
  if (match(propagators'j'(?a,prop($a),?b))=0);*term is new
        id propagators'j'(?a)=propagators'j'(?a,prop($a));*add to terms
  endif;

  Id prop($a)=propproc($a);
  .sort
#enddo
id propproc(?a)=prop(?a);

.sort
L copypropagators'j'=[propagators'j'];
#write "All propagators'j' =%E\n",[propagators'j'];
.sort
hide [propagators'j'];

*==============================================================================*
* Replace all dot products with function dot, to improve pattern matching
id p?.q?=dot(p,q);
argument;
id p?.q?=dot(p,q);
argument;
id p?.q?=dot(p,q);
endargument;
endargument;

*==============================================================================*
* Explode sum in prop arguments
.sort
polyfun coef; *turns coefs into coef(coefs)

splitarg prop;*split out all args into terms
argument prop;
    id dot(p?,q?)=coef(coeff_)* dot(p,q) ; 
endargument;
factarg prop;* Further split out arguments into coefs and terms

argument propagators'j';
splitarg prop;*split out all args into terms
argument prop;
    id dot(p?,q?)=coef(coeff_)* dot(p,q) ; 
endargument;
factarg prop;* Further split out arguments into coefs and terms
endargument;


.sort
#write "Exploded sum in propagators'j': %E\n",copypropagators'j';
.sort
PolyFun;
*==============================================================================*
S count;
* Count the number of dots with loop momenta inside propagators'j'()
Id prop(?a)=prop(?a,0);
argument propagators'j';
Id prop(?a)=prop(?a,0);
endargument;

#do i=1,1
argument propagators'j';
  if(match(prop(?a$a,dot(p?loopMom$p,q?$q),?b$b,count?$count)))redefine i "0";
endargument;
.sort
argument propagators'j';
*#write "count=%$,b=%$,c=%$",$count,$b,$a
  Id prop($a,dot($p,$q),$b,$count)=prop($a,dots($p,$q),$b,$count+1);
endargument;
  .sort
#enddo
argument;
argument;
id dots(p?,q?)=dot(p,q);
endargument;
endargument;

* add dot count to all propagators'j'
.sort
#$max=0;
#do i=1,1
argument propagators'j';
  if(match(prop(?a$a,count?$count))) redefine i "0";
endargument;
.sort
argument propagators'j';
  Id prop($a,$count)=propproc($a,$count);
endargument;
  $max=max_($count,$max);
  Id prop($a,0)=prop($a,$count);
#enddo

argument propagators'j';
id propproc(?a)=prop(?a);
endargument;


.sort
#write "Added loopdot count to propagators'j' =%E\n",copypropagators'j';
.sort
*============================================================================80*
*Now all propagators'j' are in the form:
* prop(power[\nu],massIndex,{dot,coef},fromIndex,toIndex,loopdotcount)
*We want to isolate the loopdot that we want to use to cancel.Suppose we have a
*scalar product S that is present in a propator
*                   prop(nu,...,S,coef,...) 
*then we can write S*prop(nu,...,S,coef,...) as the same propator with an addi-
*tional power minus prop(1,...,..)=sum of all other Ss, times that same propator
*    S*prop(nu,...,S,coef,...)=
*             = 1/coef*prop(nu+1,...,S,coef,...)
*               -1/coef*prop(nu,...,S,coef,...)*(prop(1,...,...);
*We first identify which propagator we use to cancel which dot product. Of
*course the only ones of interest ore those that include loop momenta. We thus
*count those in each propagator. Then replace using the above rule starting from
*those propagators'j' with the lowest count.

S power,massIndex,Coef,fromIndex,toIndex,loopdotcount,summand;
CF mass,assoc;
L max=$max;
L [matches]=matches;
L tests=0;
$count=0;
#$argMatch=0;
#$match=0;

* do loop to identify match terms


#do loopdotcount=1,$max
  #do i=1,1
    if (match(dot(p?loopMom$p,q?$q)*prop(power?$nu,massIndex?$mi,?a$a,dot(p?,q?)
          ,Coef?$Coef,?b$b,fromIndex?$fi,toIndex?$ti,'loopdotcount')));
    $argMatch='loopdotcount';*found a term
    endif;
.sort
    #if '$argMatch' 
* If we found a match, check whether it is new.
      $match=1;
      if (match(matches(?a,assoc(dot($p,$q),fromIndex?,toIndex?),?b))=0);*term is new
        id matches(?a)=matches(?a,assoc(dot($p,$q),$fi,$ti));*add to terms
      else;
        $match=0;*term is not new
      endif;
.sort
      #if '$match'
* We have now found a new, match we will now permute the argument of the corresponding prop, and denote that it has been processed
        #write "Found a match! with %s arguments, prop %$ to %$, with momentum  %$ and %$\n",'loopdotcount',$fi,$ti,$p,$q
        id prop(?a,dot($p,$q),$Coef,?b,$fi,$ti,'loopdotcount')=
        propproc(?a,?b,dot($p,$q),$Coef,$fi,$ti,'loopdotcount');
        argument;
        id prop(?a,dot($p,$q),$Coef,?b,$fi,$ti,'loopdotcount')=
        propproc(?a,?b,dot($p,$q),$Coef,$fi,$ti,'loopdotcount');
        endargument;
        
      #else
*We found an old term so must mark it to stop matching it
        id prop($nu,$mi,$a,dot($p,$q),$Coef,$b,$fi,$ti,'loopdotcount')=
            prop($nu,$mi,$a,dots($p,$q),$Coef,$b,$fi,$ti,'loopdotcount');*mark it
      #endif;
.sort



* As long as we are still finding terms we loop
    redefine i "0";
    #endif
* Reinitialise matching var
    $argMatch=0;
.sort
    $count=$count+1;
  #enddo
.sort
#enddo
L [count]=$count;



.sort
#write "Commuted dots to mark the selected dot =%E",copypropagators'j';
.sort



argument;
  id dots(p?,q?)=dot(p,q);
endargument;

.sort

CF assocProc,summation;
S markedCoef,otherPower;

* we now have the following replacement rule for the matched propagators'j'
*    S*prop(nu,...,S,coef,...)=
*             = 1/coef*prop(nu+1,...,S,coef,...)
*               -1/coef*prop(nu,...,S,coef,...)*(prop(1,...,...);

Id prop(?a,fromIndex?,toIndex?,loopdotcount?)=
    prop(?a,0,fromIndex,toIndex,loopdotcount);*now use last for summation.
Id propproc(?a,fromIndex?,toIndex?,loopdotcount?)=
    propproc(?a,0,fromIndex,toIndex,loopdotcount);*now use last for summation.


*Id propproc(?a,dot(p?,q?),markedCoef?,fromIndex?,toIndex?,loopdotcount?)=
*   propproc(?a,dot(p,q),markedCoef,0,dot(p,q),markedCoef,fromIndex,toIndex,loopdotcount);* These are the propagators'j' with dot product matches, (normally all of them)
argument propagators'j';
*Id propproc(?a,dot(p?,q?),markedCoef?,fromIndex?,toIndex?,loopdotcount?)=
*   propproc(?a,dot(p,q),markedCoef,0,dot(p,q),markedCoef,fromIndex,toIndex,loopdotcount);* These are the propagators'j' with dot product matches, (normally all of them)
endargument;









#$match=0;
#do i=1,1
  argument propagators'j';
  if (match(propproc(power?$nu,massIndex?$mi,?a$a,dot(p?$p,q?$q),Coef?$Coef,fromIndex?$fi,toIndex?$ti,loopdotcount?$loopdotcount)));
  redefine i "0";
  $match=1;
  endif;
  endargument;
  .sort
  #if '$match'
    argument propagators'j';
    id propproc($nu,$mi,$a,dot($p,$q),$Coef,$fi,$ti,$loopdotcount)=prop($nu,$mi,$a,dot($p,$q),$Coef,$fi,$ti,$loopdotcount);
    endargument;
    Id dot($p,$q)= 
1/$Coef*propproc(1,$mi,$a,dot($p,$q),$Coef,0,$fi,$ti,$loopdotcount)-1/$Coef*prop(1,$mi,$a,  0 ,$Coef,0,$fi,$ti,$loopdotcount);
    Id propproc(power?,?a)*propproc(otherPower?,?a)=propproc(power+otherPower,?a);
    repeat;
    Id prop(power?,massIndex?,?a,dot(p?,q?),Coef?,summand?,fromIndex?,toIndex?,loopdotcount?)
        =prop(power,massIndex,?a,summand+Coef*dot(p,q),fromIndex,toIndex,loopdotcount);
    endrepeat;
    Id prop(1,massIndex?,summand?,?a)=summand+mass(massIndex);
  #endif

#enddo

* Once all matches are taken care of we can eliminate all processing notation
* And simplify terms

Id propproc(?a)=prop(?a);

* Sum everything up
repeat;
Id prop(power?,massIndex?,?a,dot(p?,q?),Coef?,summand?,fromIndex?,toIndex?,loopdotcount?)
        =prop(power,massIndex,?a,summand+Coef*dot(p,q),fromIndex,toIndex,loopdotcount);
argument propagators'j';
Id prop(power?,massIndex?,?a,dot(p?,q?),Coef?,summand?,fromIndex?,toIndex?,loopdotcount?)
        =prop(power,massIndex,?a,summand+Coef*dot(p,q),fromIndex,toIndex,loopdotcount);
endargument;
endrepeat;


* if the summand = 0 we can remove the term
Id prop(power?,massIndex?,0,fromIndex?,toIndex?,loopdotcount?)
        =0;
* if the power = 0, prop  =   1
*Id prop(0,?a)=1;
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
AutoDeclare S nu,fi,ti;
CF TOP;

* symplify output

* Format O2;

Id prop(power?,massIndex?,summand?,fromIndex?,toIndex?,loopdotcount?)=prop(power,fromIndex,toIndex);

Id prop(nu1?,fi1?,ti1?)*prop(nu2?,fi2?,ti2?)*prop(nu3?,fi3?,ti3?)*prop(nu4?,fi4?,ti4?)=TOP(nu1,nu2,nu3,nu4);

.sort





.sort


ExtraSymbols,array,di'j';
#optimize dia'j'
#write <test.py> "%O"
#write <test.py> "dia'j'= (%E)", dia'j'



.sort

Format ;
factorize;
Print;
.store
#enddo
.end