#-
Off Statistics;
AutoDeclare Vector p,q,k;
AutoDeclare Symbol a,b,c,d,e,f;
AutoDeclare Index  i,j,mu,nu;
AutoDeclare CF     comF,comG,comH,dot(symmetric);


L test=comF(a,d)*comF(b,c)*(dot(a)+dot(b)+comF(a,d)+dot(2));
L count=c;
#$count=0;
#$match=1;


id dot(a?$a)*comF(a?,b?$b)=dot(a)*comF(a,b);
.sort
*L at=$a;
*L bt=$b;
id comF($a,$b)=comF($a,$b,$a);
.sort
#do i=1,1
if (match(dot($a)*comF($a,$b))=0);
  if(match(dot(a?)*comF(a?,b?)))redefine i "0";
endif;
id dot(a?$a)*comF(a?,b?$b)=dot(a)*comF(a,b);
.sort
id comF($a,$b)=comF($a,$b,$a);
#enddo

.sort

*while(match(dot(a?$a)*comF(a?,b?$b))&& 1);
*repeat;
*Id comF($a,$b)=comF($a,$b,$a);
*endrepeat;
*  $count=$count+1;
*  .sort
*endwhile;
*repeat;
*Id dot(a?$a)*comF(a?,b?$b)=comF($a,$b,$a);
*Also comF($a,$b)=comF($a,$b,$a);
*endrepeat;
id c=$match;
Print;
.end
