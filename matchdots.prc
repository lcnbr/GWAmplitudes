#procedure matchdots(max)
#write "Call matchdots with %s ",`max';
.sort
id dot(p?,q?)=dt(p,q);
id dots(p?,q?)=dt(p,q);
.sort
#do loopdotcount=1,`max'
  #do i=1,1
  #$argMatch=0;
  .sort
  if (match(dt(p?loopMom$p,q?$q)
      *prop(?a$a,dot(p?,q?),Coef?$Coef,?b$b,summand?$sum,'loopdotcount')));
    $argMatch=1;*found a term
    redefine i "0";
  endif;
*  Print "dots      %t";
  .sort
  #if `$argMatch'
    #write "Found a match! with %s arguments, with momentum  %$ and %$\n",`loopdotcount',$p,$q,
  #endif

  .sort
  if ($argMatch);
  id prop(?a,dot($p,$q),?b)=
            prop(?a,dots($p,$q),?b);*mark the dot product
  id prop($a,dots($p,$q),$Coef,$b,$sum,'loopdotcount')=
        prop($a,$b,dots($p,$q),$Coef,$sum,'loopdotcount');*mark the propagator
  argument;
  id prop(?a,dot($p,$q),?b)=
            prop(?a,dots($p,$q),?b);*mark the dot product
  id prop($a,dots($p,$q),$Coef,$b,$sum,'loopdotcount')=
        prop($a,$b,dots($p,$q),$Coef,$sum,'loopdotcount');*mark the propagator
  endargument;
  endif;
  .sort
  #enddo
#enddo
#endprocedure