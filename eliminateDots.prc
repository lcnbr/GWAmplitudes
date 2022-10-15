#procedure eliminateDots(max)
#do i=1,1
#$match=0;
.sort

  if (match(dt(p?,q?) * prop(power?$nu,massIndex?$mi,?a$a,dots(p?$p,q?$q),Coef?$Coef,0,loopdotcount?$loopdotcount)));
  redefine i "0";
  $match=1;
  endif;
*  if($match)
*  Print "propagators %$ on dot(%$,%$)  %t",$match,$p,$q; 

  .sort
  #if '$match'
    #write "Reduce dot(%$,%$)",$p,$q
    Id dt($p,$q)= 1/$Coef*prop(1,$mi,$a,dots($p,$q),$Coef,0,$loopdotcount)-1/$Coef*propmark(1,$mi,$a, 0,$Coef,0,$loopdotcount);
    Id prop(power?,?a)*prop(otherPower?,?a)=prop(power+otherPower,?a);

    .sort
    repeat;
    Id propmark(1,massIndex?,?a,b?,Coef?,summand?,loopdotcount?)
        =propmark(1,massIndex,?a,summand+Coef*b,loopdotcount);
    Id prop(1,massIndex?,?a,b?,Coef?,summand?,loopdotcount?)=prop(1,massIndex,?a,summand+Coef*b,loopdotcount);
    endrepeat;
   Id propmark(1,massIndex?,summand?,?a)=summand+mass(massIndex);
   Id prop(1,massIndex?,summand?,?a)=summand+mass(massIndex);
id dot(p?,q?)=dt(p,q);
id dots(p?,q?)=dt(p,q);

  #endif

  .sort
#call matchdots(`max') 
#write "loop";

#enddo
#endprocedure