AutoDeclare Vector p,q,k;
AutoDeclare Symbol a,b,c,d,e,f;
AutoDeclare Index  i,j,mu,nu;
AutoDeclare CF     comF,comG,comH,dot(symmetric);


L expr=comF(a,d)*comF(a,b)*comF(b,c,b) + comF(a,d)*comF(b,c,b)*dot(a) + comF(a,
      d,a)*comF(b,c)*dot(b) + comF(a,d,a)*comF(b,c,b)*dot(2);

L zero=comF(a,b, 4);


id comF(?a,0)=0;

id comF(b,c)=comF(b,c,b);
Print;
.end
