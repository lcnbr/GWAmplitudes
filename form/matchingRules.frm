AutoDeclare Vector p,q,k;
AutoDeclare Symbol a,b,c,d,e,f;
AutoDeclare Index  i,j,mu,nu;
AutoDeclare CF     comF,comG,comH,dot(symmetric);


L dotF=p1.p2*comF(p2.p1)+p1.p2^2*comF(p2.p1)+p1.p2^3*comF(p2.p1)+(p1.p2^2+p5.p6)*comF(p2.p1);

L dotFF=p1.p2*comF(p2.p1)*comF(p5.p6)+p1.p2^2*comF(p2.p1)*comF(p5.p6)+p1.p2^3*comF(p2.p1)*comF(p5.p6)+(p1.p2^2+p5.p6)*comF(p2.p1)*comF(p5.p6);


id p?.q?=dot(p,q);

repeat;
id comF(p?.q?)*dot(p?,q?)=0;
endrepeat;


Print;
.store
AutoDeclare Vector p,q,k;
AutoDeclare Symbol a,b,c,d,e,f;
AutoDeclare Index  i,j,mu,nu;
AutoDeclare CF     comF,comG,comH,dot(symmetric);
L  test = (comF(a,p,q,c,d,e)+comF(a,p))*(a-b);
#$max=0;
L max=a;
id comF(?a)=comF(?a,nargs_(?a));
while( match(comF(?a$terms,b?$count)));
  $max=max_($count,$max);
  id comF($terms,$count)=comH($terms,$count);
endwhile;
id a=$max;
Print;
.end