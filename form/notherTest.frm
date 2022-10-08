#-
Off Statistics;
CF prop,propproc,matches,pr,pc,dot(symmetric),dots(symmetric),num;
S a,b,c,d,e,f,g,x,y,momen,help,west,m1,m2,u;
AutoDeclare V p,q,k,l;
#define n "13";
Set extMom:p1,...,p'n',q1,...,q'n';
Set loopMom: k1,...,k'n',l1,...,l'n';

L expr=p1.q1+5*p1.l1+7*k1.k5+ 4*k5.q2;
L dia=expr*prop(-1,1,expr);
L momen2=  - p1.p1 + 2*p2.q1 + 2*p2.k1 + k1.k1 ;
L momen1= p1.p1 + 2*p1.p2 - 2*p1.q1 + 2*p1.k1 + 2*p2.k1 - 2*q1.k1 + k1.k1 ;
L test=  prop(-1,0,p1.p1,1,p1.k1,-2,k1.k1,1,0) 
       *  prop(-1,0,p1.p1,1,q1.k1,-2,k1.k1,1,0) 
       *  prop(-1,1,p2.p2,1,p2.q1,-2,p2.k1,2,p1.p1,1,q1.k1,-2,k1.k1,1,0) 
       *  prop(-1,1,k1.k1,1,0) 
       * momen2
       * momen1;
* momen1
* momen2;
L [count]=u;
L max=a;
.sort

id p?.q?=dot(p,q);
argument;
id p?.q?=dot(p,q);
endargument;

#$max=0;

Id  prop(?a)=prop(?a,nargs_(?a));
while( match(prop(?a,b?$count)));
  $max=max_($count,$max);
  id prop(?a,$count)=propproc(?a,$count);
endwhile;
id propproc(?a)=prop(?a);
id a=$max;


.sort
L [matches]=matches;
L tests=0;
$count=0;
#$argMatch=0;
#$match=0;



#do narg=1,$max
  #do i=1,1
    if (match(dot(p?loopMom$p,q?$q)*prop(x?$x,y?$y,?a$a,dot(p?,q?),c?$c,?b$b,0,'narg')));
    $argMatch='narg';*found a term
    endif;
.sort
    #if '$argMatch'
      $match=1;
      if (match(matches(?a,dot($p,$q),?b))=0);*term is new
        id matches(?a)=matches(?a,dot($p,$q));*add to terms
      else;
        $match=0;*term is not new
      endif;
.sort
      #if '$match'
        #write "Found a match! with %s arguments, with momentum  %$ and %$",'narg',$p,$q;
        id prop($x,$y,$a,dot($p,$q),$c,$b,0,'narg')=
        prop($x,$y,$a,$b,dot($p,$q),$c,'narg');
      #else
        id prop($x,$y,$a,dot($p,$q),$c,$b,0,'narg')=
        prop($x,$y,$a,dots($p,$q),$c,$b,0,'narg');*mark it
      #endif;
.sort
    redefine i "0";
    #endif

    $argMatch=0;
.sort
    $count=$count+1;
  #enddo
  $argMatch=0;
.sort
#enddo
L count=$count;
factorize;
Print;
.sort
UnFactorize;
.sort
argument;
  id dots(p?,q?)=dot(p,q);
endargument;

Id prop(?a,b?)=prop(?a,0);*now use last for summation.
repeat;
    id dot(p?,q?)*prop(x?,y?,?a,dot(p?,q?),b?,c?)=1/b*prop(x+1,y,?a,dot(p,q),b,c)-1/b*prop(x,y,?a,dot(p,q),b,c)*(prop(1,y,?a,0,b,c));
    repeat;*sum up all terms from propagotor with removed dot prod.
      Id prop(1,y?,?a,dot(p?,q?),d?,0,b?,c?)=prop(1,y,?a,0,b,c+d*dot(p,q));
      
    endrepeat;
*    Id prop(1,y?,0,b?,a?)=a;
endrepeat;
* Id prop(?a,c?,d?,b?)=prop(?a,c,d,c*d);

repeat;
  Id  prop(x?,y?,?a,dot(p?,q?),c?,d?)=prop(x,y,?a,d+dot(p,q)*c);
endrepeat;

Id prop(0,?a)=1;
.sort
factorize;
Format O2;
Print;
.end

