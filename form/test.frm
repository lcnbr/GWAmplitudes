#-
Off Statistics;
CF prop,propproc,pr,pc,dot(symmetric),num;
S a,b,c,d,e,f,g,x,y,momen,help,west,m1,m2,u;
AutoDeclare V p,q,k,l;
#define n "13";
Set extMom:p1,...,p'n',q1,...,q'n';
Set loopMom: k1,...,k'n',l1,...,l'n';

L expr=p1.q1+5*p1.l1+7*k1.k5+ 4*k5.q2;
L dia=expr*prop(-1,1,expr);
L momen2=  - p1.p1 + 2*p2.q1 + 2*p2.k1 + k1.k1 ;
L momen1= p1.p1 + 2*p1.p2 - 2*p1.q1 + 2*p1.k1 + 2*p2.k1 - 2*q1.k1 + k1.k1 ;
L test=  prop(-1,0,p1.p1,1,p1.k1,-2,k1.k1,1, 0) 
       *  prop(-1,0,p1.p1,1,q1.k1,-2,k1.k1,1,0) 
       *  prop(-1,1,p2.p2,1,p2.q1,-2,p2.k1,2,p1.p1,1,q1.k1,-2,k1.k1,1, 0) 
       *  prop(-1,1,k1.k1,1, 0) 
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

Print;
.sort
L tests=0;
$count=0;
#$matched=0;


#do narg=1,$max

  if (match(dot(p?loopMom$p,q?$q)*prop(x?$x,y?$y,?a$a,dot(p?,q?),c?$c,?b$b,0,'narg')))$matched='narg';
.sort
  #write "matched %$",$matched
  
  #if '$matched'
    id prop($x,$y,$a,dot($p,$q),$c,$b,0,'narg')=
    prop($x,$y,$a,dot($p,$q),$c,$b,dot($p,$q),'narg');
.sort
    #do i=1,1
      if (match(dot($p,$q)*prop($x,$y,$a,dot($p,$q),$c,$b,0,'narg'))=0);
        if(match(dot(p?loopMom,q?)*prop(x?,y?,?a,dot(p?,q?),c?,?b,0,'narg')))redefine i "0";
      endif;
      id dot(p?loopMom$p,q?$q)*prop(x?$x,y?$y,?a$a,dot(p?,q?),c?$c,?b$b,0,'narg')=prop(x,y,?a,dot(p,q),c,?b,0,'narg');
.sort
      id prop($x,$y,$a,dot($p,$q),$c,$b,0,'narg')=prop($x,$y,$a,dot($p,$q),$c,$b,dot($p, $q),'narg');
    #enddo
  $count=$count+1;
  #endif
  $matched=0;
#enddo
*repeat;
*
*if (match(once dot(p?loopMom$p,q?$q)*prop(x?$x,y?$y,?a$a,dot(p?,q?),c?$c,?b$b,0,'narg')));
*Id once dot($p,$q)*prop($x,$y,$a,dot($p,$q),$c,$b,0,'narg')=propproc($x,$y,$a,dot($p,$q),$c,$b,dot($p,$q),'narg');
*$matched=1;
*endif;
*if($matched);
*Id prop($x,$y,$a,dot($p,$q),$c,$b,0,'narg')=propproc($x,$y,$a,dot($p,$q),$c,$b,dot($p,$q),'narg');
*  $count=$count+1;
*endif;
*
*endrepeat;
*while(match(dot(p?loopMom$p,q?$q)*prop(x?$x,y?$y,?a$a,dot(p?,q?),c?$c,?b$b,0,'narg'))&& 1);
*Id prop($x,$y,$a,dot($p,$q),$c,$b,0,'narg')=propproc($x,$y,$a,dot($p,$q),$c,$b,dot($p,$q),'narg');
*
*endwhile;
*

*    1/c*prop(x+1,y,?a,dot(p,q),c,?b,dot(p,q),'narg')
*  - 1/c*prop(x,y,?a,dot(p,q),c,?b,dot(p,q),'narg')
*    *prop(1,y,?a,?b,'narg'-3);

*#enddo



*Id dot(p?,q?)*prop(x?,y?,?a,dot(p?,q?),c?,?b,dot(p?,q?),e?)=
*    1/c*prop(x+1,y,?a,dot(p,q),c,?b,dot(p,q),e)
*  - 1/c*prop(x,y,?a,dot(p,q),c,?b,dot(p,q),e)
*    *prop(1,y,?a,?b,dot(p,q),e-3);





Id propproc(0,?a)=1;
*id prop(1,a?,0)=0;
*while (match(dot(p?,q?)*prop(x?,y?,?a,p?.q?,c?,b?)));
*
*  id dot(p?,q?)*prop(x?,y?,?a,p?.q?,c?,b?)=prop(x,y,?a,b+c*p.q);
*  $count=$count+1;
*endwhile;
*repeat;
*  Id b?*p?loopMom.q?*prop(x?,y?,?a,p?.q?,c?,?b,0)=0;
*  Id p1?.q3?*p?loopMom.q?*prop(x?,y?,?a,p?.q?,c?,?b,0)=0;
*  
*  Id p1?loopMom.q3?*p?.q?*prop(x?,y?,?a,p?.q?,c?,?b,0)=0;
*  Id p?loopMom.q?*p?.q?*prop(x?,y?,?a,p?.q?,c?,?b,0)=0;
**Id b?*prop(?a)=0;
*endrepeat;
*Id p?.q?*k1.k1*prop(-1,1,k1.k1,1,0)=0;
*Id p?.q?*prop(x?,y?rs,?a,p?.q?,c?,?b,d?)=0;

*id p?loopMom.q?=1;
*Format O2;
id u=$count;
.sort

factorize;


Print ;

.end;