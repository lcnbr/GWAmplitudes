#procedure propproc
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
  if(match(prop(?a$a,dot(p?loopMom$p,q?$q),?b$b,count?$count)));
  redefine i "0";
  Id prop($a,dot($p,$q),$b,$count)=prop($a,dots($p,$q),$b,$count+1);
  endif;
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
#write "Added loopdot count to propagators: %E\n",copypropagators;
.sort
#endprocedure