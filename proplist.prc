#procedure proplist
* Create a list of all unique propagators, as set of arguments to propagators
.sort
L [propagators]=propagators;

#do i=1,1
  if(match(prop(?a$a))) redefine i "0";
  if (match(propagators(?a,prop($a),?b))=0);*term is new
    id propagators(?a)=propagators(?a,prop($a));*add to terms
    Id prop($a)=propproc($a);
  endif;
  .sort
#enddo
id propproc(?a)=prop(?a);

.sort
L copypropagators=[propagators];
#write "All propagators: %E\n",[propagators];
.sort
hide [propagators];
#endprocedure