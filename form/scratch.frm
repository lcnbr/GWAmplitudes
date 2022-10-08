CF prop,propproc,propagators,matches,propagators,pr,pc,dot(symmetric),dots(symmetric),num,coef;
S a,b,c,d,e,f,g,x,y,momen,help,west,m1,m2,u,;
AutoDeclare V p,q,k,l;
CF assocProc,summation;
S markedCoef,otherPower,fromIndex,toIndex,power,massIndex,Coef,loopdotcount ;


L copypropagators =
         ( propagators(propproc(-1,0,dot(p1,p1),1,dot(k1,k1),1,dot(p1,k1),-2,3
         ,4,2),propproc(-1,0,dot(q1,q1),1,dot(k1,k1),1,dot(q1,k1),-2,5,6,2),
         propproc(-1,1,dot(k1,k1),1,1,2,1),propproc(-1,2,dot(p1,p1),1,dot(p1,
         q2),-2,dot(p1,k1),-2,dot(q2,q2),1,dot(k1,k1),1,dot(q2,k1),2,7,8,3)) )
         ;





argument;
    id propproc(power?,massIndex?,a?,dot(p?,q?),Coef?,fromIndex?,toIndex?,loopdotcount?)=prop(power,massIndex,?);
endargument;




#$match=0;
#do i=1,1
  argument;
  if (match(propproc(power?$nu,massIndex?$mi,a?$a,dot(p?$p,q?$q),Coef?$Coef,fromIndex?$fi,toIndex?$ti,loopdotcount?$loopdotcount)));
  redefine i "0";
  $match=1;
  endif;
  endargument;
  .sort
  #if '$match'
    argument;
    id propproc($nu,$mi,$a,dot($p,$q),$Coef,$fi,$ti,$loopdotcount)=prop($nu,$mi,$a,dot($p,$q),$Coef,$fi,$ti,$loopdotcount);
    endargument;
    
  #endif

#enddo
Print;
.end 
