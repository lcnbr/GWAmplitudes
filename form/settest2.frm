#-
Off Statistics;
AutoDeclare Vector p,q,k;
AutoDeclare Symbol a,b,c,d,e,f;
AutoDeclare Index  i,j,mu,nu;
AutoDeclare CF     comF,comG,comH,matches,dot(symmetric);


L test=comF(a,d)*comF(b,c)*(dot(a)+dot(b)+comF(a,d)+dot(2));
L count=c;
#$count=0;
#$match=1;

L [matches]=matches;

#do i=1,1
$match=0;
.sort
  if (match(dot(a?$a)*comF(a?,b?$b)));
  $match=1;*found a term
  endif;
.sort
id comF($a,$b)=comF($a,$b,$a);
if (match(matches(?a,$a,?b))=0);*term is new
id matches(?a)=matches(?a,$a);*add to terms
else;
$match=0;*term is not new
endif;
.sort
#if '$match'
redefine i "0";
#endif
.sort

#enddo

.sort

id c=$count;
Print;
.end