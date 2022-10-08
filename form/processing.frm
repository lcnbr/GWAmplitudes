#-
Off Statistics;
CF prop,propproc,propagators,matches,propagators,pr,pc,dot(symmetric),dots(symmetric),num,coef;
S a,b,c,d,e,f,g,x,y,momen,help,west,m1,m2,u,;
AutoDeclare V p,q,k,l;
#define n "13";
Set extMom:p1,...,p'n',q1,...,q'n';
Set loopMom: k1,...,k'n',l1,...,l'n';

L test=prop(-1,2,p1.p1 - 2*p1.q2 - 2*p1.k1 + q2.q2 + 2*q2.k1 + k1.k1,7,8)
       * ( prop(-1,0,p1.p1 - 2*p1.k1 + k1.k1,3,4) )
       * ( prop(-1,0,q1.q1 - 2*q1.k1 + k1.k1,5,6) )
       * ( prop(-1,1,k1.k1,1,2) )
       * ( p1.q1 + p1.k1 - p2.q1 - p2.k1 - q1.q2 - q1.k1 - q2.k1 - k1.k1 )
       * ( p1.p1 - 2*p1.q2 - 2*q2.k1 - k1.k1 );
L [propagators]=propagators;
* momen1
* momen2;
L [count]=u;

Id q2=q1-p1-p2;
argument;
Id q2=q1-p1-p2;
endargument;
#do i=1,1
  if(match(prop(?a$a))) redefine i "0";
  if (match(propagators(?a,prop($a),?b))=0);*term is new
        id propagators(?a)=propagators(?a,prop($a));*add to terms
  endif;

  Id prop($a)=propproc($a);
  .sort
#enddo
id propproc(?a)=prop(?a);

.sort
L copypropagators=[propagators];
#write "All propagators =%E\n",[propagators];
.sort
hide [propagators];

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

argument propagators;
splitarg prop;*split out all args into terms
argument prop;
    id dot(p?,q?)=coef(coeff_)* dot(p,q) ; 
endargument;
factarg prop;* Further split out arguments into coefs and terms
endargument;


.sort
#write "Exploded sum in propagators: %E\n",copypropagators;
.sort
PolyFun;
*==============================================================================*
S count;
* Count the number of dots with loop momenta inside propagators()
Id prop(?a)=prop(?a,0);
argument propagators;
Id prop(?a)=prop(?a,0);
endargument;

#do i=1,1
argument propagators;
  if(match(prop(?a$a,dot(p?loopMom$p,q?$q),?b$b,count?$count)))redefine i "0";
endargument;
.sort
argument propagators;
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

* add dot count to all propagators
.sort
#$max=0;
#do i=1,1
argument propagators;
  if(match(prop(?a$a,count?$count))) redefine i "0";
endargument;
.sort
argument propagators;
  Id prop($a,$count)=propproc($a,$count);
endargument;
  $max=max_($count,$max);
  Id prop($a,0)=prop($a,$count);
#enddo

argument propagators;
id propproc(?a)=prop(?a);
endargument;


.sort
#write "Added loopdot count to propagators =%E\n",copypropagators;
.sort
*============================================================================80*
*Now all propagators are in the form:
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
*those propagators with the lowest count.

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
#write "Commuted dots to mark the selected dot =%E",copypropagators;
.sort



argument;
  id dots(p?,q?)=dot(p,q);
endargument;
Print test;
.sort

* we now have the following replacement rule for the matched propagators
*    S*prop(nu,...,S,coef,...)=
*             = 1/coef*prop(nu+1,...,S,coef,...)
*               -1/coef*prop(nu,...,S,coef,...)*(prop(1,...,...);

Id prop(?a,fromIndex?,toIndex?,loopdotcount?)=
    prop(?a,0,fromIndex,toIndex,loopdotcount);*now use last for summation.

Id propproc(?a,fromIndex?,toIndex?,loopdotcount?)=
    propproc(?a,0,fromIndex,toIndex,loopdotcount);* These are the propagators with dot product matches, (normally all of them)
repeat;
repeat;
    id dot(p?,q?)*propproc(power?,massIndex?,?a,dot(p?,q?),Coef?,0,fromIndex?,toIndex?,loopdotcount?)=1/Coef*propproc(power+1,massIndex,?a,dot(p,q),Coef,0,fromIndex,toIndex,loopdotcount)-1/Coef*propproc(power,massIndex,?a,dot(p,q),Coef,0,fromIndex,toIndex,loopdotcount)*(prop(1,massIndex,?a,0,Coef,0,fromIndex,toIndex,loopdotcount));
    Id propproc(0,?a)=1;
*1/Coef*propproc(power+1,massIndex,?a,dot(p,q),Coef,0,fromIndex,toIndex,loopdotcount)
*      -1/Coef*propproc(power,massIndex,?a,dot(p,q),Coef,0,fromIndex,toIndex,loopdotcount)*(prop(1,massIndex,?a,0,Coef,0,fromIndex,toIndex,loopdotcount));
    repeat;*sum up all terms that don't have a match anymore (ie propagator with removed dot prod, and all unprocessed props)
      Id prop(power?,massIndex?,?a,dot(p?,q?),Coef?,summand?,fromIndex?,toIndex?,loopdotcount?)
        =prop(power,massIndex,?a,summand+Coef*dot(p,q),fromIndex,toIndex,loopdotcount);
      
    endrepeat;
* prop with power=1 we can turn into just the argument that has been summed by the above

  Id prop(1,massIndex?,summand?,?a)=summand+mass(massIndex);
endrepeat;
* Once all matches are taken care of we can eliminate all processing notation
* And simplify terms

Id propproc(?a)=prop(?a);
endrepeat;

* Sum everything up
repeat;
Id prop(power?,massIndex?,?a,dot(p?,q?),Coef?,summand?,fromIndex?,toIndex?,loopdotcount?)
        =prop(power,massIndex,?a,summand+Coef*dot(p,q),fromIndex,toIndex,loopdotcount);
argument propagators;
Id prop(power?,massIndex?,?a,dot(p?,q?),Coef?,summand?,fromIndex?,toIndex?,loopdotcount?)
        =prop(power,massIndex,?a,summand+Coef*dot(p,q),fromIndex,toIndex,loopdotcount);
endargument;
endrepeat;

*extract summand if prop is a power of 1
Id prop(1,massIndex?,summand?,?a)=summand+mass(massIndex);
* if the summand = 0 we can remove the term
Id prop(power?,massIndex?,0,fromIndex?,toIndex?,loopdotcount?)
        =0;
* if the power = 0, prop  =   1
Id prop(0,?a)=1;
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



Print;

.sort

* symplify output

Id prop(power?,massIndex?,summand?,fromIndex?,toIndex?,loopdotcount?)=prop(power,fromIndex,toIndex);
factorize;
Print;


.end

