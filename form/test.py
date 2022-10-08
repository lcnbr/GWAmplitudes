

dia1= (2*prop(-1,1,2)*prop(-1,3,4)*D*e^4*qch1^2*qch2^2)


dia2= (2*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*e^4*qch1^2*qch2^2*m1^2 - 5*
      prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,p1)*e^4*qch1^2*qch2^2 - 2*
      prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,q)*e^4*qch1^2*qch2^2 + 
      prop(-1,1,2)*prop(-1,3,4)*prop(0,5,6)*e^4*qch1^2*qch2^2 + 2*prop(-1,1,2)
      *prop(-1,5,6)*prop(0,3,4)*e^4*qch1^2*qch2^2 - 2*prop(-1,3,4)*prop(-1,5,6
      )*prop(0,1,2)*e^4*qch1^2*qch2^2)


dia3= (2*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*e^4*qch1^2*qch2^2*m2^2 - 5*
      prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p2,p2)*e^4*qch1^2*qch2^2 + 2*
      prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p2,q)*e^4*qch1^2*qch2^2 + 
      prop(-1,1,2)*prop(-1,3,4)*prop(0,5,6)*e^4*qch1^2*qch2^2 + 2*prop(-1,1,2)
      *prop(-1,5,6)*prop(0,3,4)*e^4*qch1^2*qch2^2 - 2*prop(-1,3,4)*prop(-1,5,6
      )*prop(0,1,2)*e^4*qch1^2*qch2^2)


dia4= ( - 8*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,p2)*e^4*qch1*qch2^3
       + 4*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,k1)*e^4*qch1*qch2^3
       - 4*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p2,q)*e^4*qch1*qch2^3 + 
      2*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(k1,q)*e^4*qch1*qch2^3)


dia5= ( - prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*e^4*qch1*qch2^3*m2^2 - 8*
      prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,p2)*e^4*qch1*qch2^3 - 4*
      prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,k1)*e^4*qch1*qch2^3 + 8*
      prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,q)*e^4*qch1*qch2^3 - prop(
      -1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p2,p2)*e^4*qch1*qch2^3 - 4*prop(-1
      ,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p2,q)*e^4*qch1*qch2^3 + 4*prop(-1,1,
      2)*prop(-1,3,4)*prop(-1,5,6)*dot(q,q)*e^4*qch1*qch2^3 + prop(-1,1,2)*
      prop(-1,5,6)*prop(0,3,4)*e^4*qch1*qch2^3)


dia6= ( - 8*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,p2)*e^4*qch1^3*qch2
       + 4*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,q)*e^4*qch1^3*qch2 + 
      4*prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p2,k1)*e^4*qch1^3*qch2 - 2*
      prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(k1,q)*e^4*qch1^3*qch2)


dia7= ( - prop(-1,1,2)*prop(-1,3,4)*prop(-1,5,6)*e^4*qch1^3*qch2*m1^2 - prop(
      -1,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,p1)*e^4*qch1^3*qch2 - 8*prop(-1
      ,1,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,p2)*e^4*qch1^3*qch2 + 4*prop(-1,1
      ,2)*prop(-1,3,4)*prop(-1,5,6)*dot(p1,q)*e^4*qch1^3*qch2 - 4*prop(-1,1,2)
      *prop(-1,3,4)*prop(-1,5,6)*dot(p2,k1)*e^4*qch1^3*qch2 - 8*prop(-1,1,2)*
      prop(-1,3,4)*prop(-1,5,6)*dot(p2,q)*e^4*qch1^3*qch2 + 4*prop(-1,1,2)*
      prop(-1,3,4)*prop(-1,5,6)*dot(q,q)*e^4*qch1^3*qch2 + prop(-1,1,2)*prop(
      -1,5,6)*prop(0,3,4)*e^4*qch1^3*qch2)


dia8= (16*dot(p1,k1)*dot(p2,k1)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 8*dot(p1,k1
      )*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 4*dot(p1,k1)*dot(k1,k1)*
      TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 - 4*dot(p1,k1)*dot(q,q)*TOP(-1,-1,-1,-1
      )*e^4*qch1^3*qch2 + 4*dot(p1,k1)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^2
       - 4*dot(p1,k1)*TOP(-1,-1,-1,0)*e^4*qch1^3*qch2 + 8*dot(p1,q)*dot(p2,k1)
      *TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 4*dot(p1,q)*dot(p2,q)*TOP(-1,-1,-1,
      -1)*e^4*qch1^3*qch2 + 2*dot(p1,q)*dot(k1,k1)*TOP(-1,-1,-1,-1)*e^4*qch1^3
      *qch2 - 2*dot(p1,q)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 2*dot(p1
      ,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^2 - 2*dot(p1,q)*TOP(-1,-1,-1,0)*
      e^4*qch1^3*qch2 - 4*dot(p2,k1)*dot(k1,k1)*TOP(-1,-1,-1,-1)*e^4*qch1^3*
      qch2 + 4*dot(p2,k1)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 - 4*dot(p2
      ,k1)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^2 + 4*dot(p2,k1)*TOP(-1,-1,-1,0
      )*e^4*qch1^3*qch2 - 2*dot(p2,q)*dot(k1,k1)*TOP(-1,-1,-1,-1)*e^4*qch1^3*
      qch2 + 2*dot(p2,q)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 - 2*dot(p2,
      q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^2 + 2*dot(p2,q)*TOP(-1,-1,-1,0)*
      e^4*qch1^3*qch2 - dot(k1,k1)^2*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 2*dot(
      k1,k1)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 - 2*dot(k1,k1)*TOP(-1,
      -1,-1,-1)*e^4*qch1^3*qch2*m1^2 + 2*dot(k1,k1)*TOP(-1,-1,-1,0)*e^4*qch1^3
      *qch2 - dot(q,q)^2*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 2*dot(q,q)*TOP(-1,
      -1,-1,-1)*e^4*qch1^3*qch2*m1^2 - 2*dot(q,q)*TOP(-1,-1,-1,0)*e^4*qch1^3*
      qch2 - TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^4 + 2*TOP(-1,-1,-1,0)*e^4*
      qch1^3*qch2*m1^2 - TOP(-1,-1,-1,1)*e^4*qch1^3*qch2)


dia9= (16*dot(p1,k1)*dot(p2,k1)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 8*dot(p1,k1
      )*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 4*dot(p1,k1)*dot(k1,k1)*
      TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - 4*dot(p1,k1)*dot(q,q)*TOP(-1,-1,-1,-1
      )*e^4*qch1*qch2^3 + 4*dot(p1,k1)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2
       - 4*dot(p1,k1)*TOP(-1,-1,-1,0)*e^4*qch1*qch2^3 + 8*dot(p1,q)*dot(p2,k1)
      *TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 4*dot(p1,q)*dot(p2,q)*TOP(-1,-1,-1,
      -1)*e^4*qch1*qch2^3 + 2*dot(p1,q)*dot(k1,k1)*TOP(-1,-1,-1,-1)*e^4*qch1*
      qch2^3 - 2*dot(p1,q)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 2*dot(
      p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2 - 2*dot(p1,q)*TOP(-1,-1,-1,0
      )*e^4*qch1*qch2^3 - 4*dot(p2,k1)*dot(k1,k1)*TOP(-1,-1,-1,-1)*e^4*qch1*
      qch2^3 + 4*dot(p2,k1)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - 4*dot(
      p2,k1)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2 + 4*dot(p2,k1)*TOP(-1,-1,-1
      ,0)*e^4*qch1*qch2^3 - 2*dot(p2,q)*dot(k1,k1)*TOP(-1,-1,-1,-1)*e^4*qch1*
      qch2^3 + 2*dot(p2,q)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - 2*dot(
      p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2 + 2*dot(p2,q)*TOP(-1,-1,-1,0
      )*e^4*qch1*qch2^3 - dot(k1,k1)^2*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 2*
      dot(k1,k1)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - 2*dot(k1,k1)*TOP(
      -1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2 + 2*dot(k1,k1)*TOP(-1,-1,-1,0)*e^4*
      qch1*qch2^3 - dot(q,q)^2*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 2*dot(q,q)*
      TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2 - 2*dot(q,q)*TOP(-1,-1,-1,0)*e^4*
      qch1*qch2^3 - TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^4 + 2*TOP(-1,-1,-1,0)*
      e^4*qch1*qch2^3*m2^2 - TOP(-1,-1,-1,1)*e^4*qch1*qch2^3)


dia10= (4*dot(p1,p2)*dot(p2,p2)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - 16*dot(p1,
      p2)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - 12*dot(p1,p2)*TOP(-1,-1
      ,-1,-1)*e^4*qch1*qch2^3*m2^2 + 16*dot(p1,p2)*TOP(-1,-1,-1,0)*e^4*qch1*
      qch2^3 - 4*dot(p1,k1)*dot(p2,p2)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 16*
      dot(p1,k1)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 12*dot(p1,k1)*
      TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2 - 16*dot(p1,k1)*TOP(-1,-1,-1,0)*
      e^4*qch1*qch2^3 - 2*dot(p1,q)*dot(p2,p2)*TOP(-1,-1,-1,-1)*e^4*qch1*
      qch2^3 + 8*dot(p1,q)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 6*dot(
      p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2 - 8*dot(p1,q)*TOP(-1,-1,-1,0
      )*e^4*qch1*qch2^3 + dot(p2,p2)^2*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - 2*
      dot(p2,p2)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - dot(p2,p2)*dot(q
      ,q)*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 - 2*dot(p2,p2)*TOP(-1,-1,-1,-1)*e^4
      *qch1*qch2^3*m2^2 + 3*dot(p2,p2)*TOP(-1,-1,-1,0)*e^4*qch1*qch2^3 - 8*
      dot(p2,q)^2*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3 + 4*dot(p2,q)*dot(q,q)*TOP(
      -1,-1,-1,-1)*e^4*qch1*qch2^3 - 10*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1*
      qch2^3*m2^2 + 12*dot(p2,q)*TOP(-1,-1,-1,0)*e^4*qch1*qch2^3 + 3*dot(q,q)*
      TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^2 - 4*dot(q,q)*TOP(-1,-1,-1,0)*e^4*
      qch1*qch2^3 - 3*TOP(-1,-1,-1,-1)*e^4*qch1*qch2^3*m2^4 + 7*TOP(-1,-1,-1,0
      )*e^4*qch1*qch2^3*m2^2 - TOP(-1,-1,-1,1)*e^4*qch1*qch2^3 - 3*TOP(-1,-1,0
      ,0)*e^4*qch1*qch2^3)


dia11= (dot(p1,p1)^2*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 4*dot(p1,p1)*dot(p1,p2
      )*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 2*dot(p1,p1)*dot(p1,q)*TOP(-1,-1,-1
      ,-1)*e^4*qch1^3*qch2 - 4*dot(p1,p1)*dot(p2,k1)*TOP(-1,-1,-1,-1)*e^4*
      qch1^3*qch2 + 2*dot(p1,p1)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 - 
      dot(p1,p1)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 - 2*dot(p1,p1)*TOP(
      -1,-1,-1,-1)*e^4*qch1^3*qch2*m1^2 + 3*dot(p1,p1)*TOP(-1,-1,-1,0)*e^4*
      qch1^3*qch2 + 16*dot(p1,p2)*dot(p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2
       - 12*dot(p1,p2)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^2 + 16*dot(p1,p2)*
      TOP(-1,-1,-1,0)*e^4*qch1^3*qch2 - 8*dot(p1,q)^2*TOP(-1,-1,-1,-1)*e^4*
      qch1^3*qch2 - 16*dot(p1,q)*dot(p2,k1)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2
       + 8*dot(p1,q)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 - 4*dot(p1,q)*
      dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2 + 10*dot(p1,q)*TOP(-1,-1,-1,-1
      )*e^4*qch1^3*qch2*m1^2 - 12*dot(p1,q)*TOP(-1,-1,-1,0)*e^4*qch1^3*qch2 + 
      12*dot(p2,k1)*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^2 - 16*dot(p2,k1)*TOP(
      -1,-1,-1,0)*e^4*qch1^3*qch2 - 6*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^3*
      qch2*m1^2 + 8*dot(p2,q)*TOP(-1,-1,-1,0)*e^4*qch1^3*qch2 + 3*dot(q,q)*
      TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^2 - 4*dot(q,q)*TOP(-1,-1,-1,0)*e^4*
      qch1^3*qch2 - 3*TOP(-1,-1,-1,-1)*e^4*qch1^3*qch2*m1^4 + 7*TOP(-1,-1,-1,0
      )*e^4*qch1^3*qch2*m1^2 - TOP(-1,-1,-1,1)*e^4*qch1^3*qch2 - 3*TOP(-1,-1,0
      ,0)*e^4*qch1^3*qch2)


dia12= (dot(p1,p1)^2*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 + 8*dot(p1,p1)*dot(p1,
      p2)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 - 2*dot(p1,p1)*dot(p1,q)*TOP(-1,
      -1,-1,-1)*e^4*qch1^2*qch2^2 + 2*dot(p1,p1)*dot(p2,p2)*TOP(-1,-1,-1,-1)*
      e^4*qch1^2*qch2^2 + 2*dot(p1,p1)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*
      qch2^2 - dot(p1,p1)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 + 2*dot(
      p1,p1)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m2^2 + 2*dot(p1,p1)*TOP(-1,-1,
      -1,-1)*e^4*qch1^2*qch2^2*m1^2 - 6*dot(p1,p1)*TOP(-1,-1,-1,0)*e^4*qch1^2*
      qch2^2 + 16*dot(p1,p2)^2*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 - 8*dot(p1,
      p2)*dot(p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 + 8*dot(p1,p2)*dot(p2,
      p2)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 + 8*dot(p1,p2)*dot(p2,q)*TOP(-1,
      -1,-1,-1)*e^4*qch1^2*qch2^2 - 4*dot(p1,p2)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4
      *qch1^2*qch2^2 + 8*dot(p1,p2)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m2^2 + 
      8*dot(p1,p2)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2 - 24*dot(p1,p2)*
      TOP(-1,-1,-1,0)*e^4*qch1^2*qch2^2 - 2*dot(p1,q)*dot(p2,p2)*TOP(-1,-1,-1,
      -1)*e^4*qch1^2*qch2^2 - 2*dot(p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*
      m2^2 - 2*dot(p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2 + 6*dot(p1,q)
      *TOP(-1,-1,-1,0)*e^4*qch1^2*qch2^2 + dot(p2,p2)^2*TOP(-1,-1,-1,-1)*e^4*
      qch1^2*qch2^2 + 2*dot(p2,p2)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*
      qch2^2 - dot(p2,p2)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 + 2*dot(
      p2,p2)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m2^2 + 2*dot(p2,p2)*TOP(-1,-1,
      -1,-1)*e^4*qch1^2*qch2^2*m1^2 - 6*dot(p2,p2)*TOP(-1,-1,-1,0)*e^4*qch1^2*
      qch2^2 + 2*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m2^2 + 2*dot(p2,
      q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2 - 6*dot(p2,q)*TOP(-1,-1,-1,0)
      *e^4*qch1^2*qch2^2 - dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m2^2 - 
      dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2 + 3*dot(q,q)*TOP(-1,-1,
      -1,0)*e^4*qch1^2*qch2^2 + TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m2^4 + 2*
      TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2*m2^2 + TOP(-1,-1,-1,-1)*e^4*
      qch1^2*qch2^2*m1^4 - 6*TOP(-1,-1,-1,0)*e^4*qch1^2*qch2^2*m2^2 - 6*TOP(-1
      ,-1,-1,0)*e^4*qch1^2*qch2^2*m1^2 + 4*TOP(-1,-1,-1,1)*e^4*qch1^2*qch2^2
       + 5*TOP(-1,-1,0,0)*e^4*qch1^2*qch2^2)


dia13= (6*dot(p1,p1)^2*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 - 10*dot(p1,p1)*dot(
      p1,p2)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 + 10*dot(p1,p1)*dot(p1,q)*TOP(
      -1,-1,-1,-1)*e^4*qch1^2*qch2^2 - 6*dot(p1,p1)*dot(p2,q)*TOP(-1,-1,-1,-1)
      *e^4*qch1^2*qch2^2 + 3*dot(p1,p1)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*
      qch2^2 + 5*dot(p1,p1)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m2^2 + 5*dot(p1
      ,p1)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2 - 12*dot(p1,p1)*TOP(-1,-1,
      -1,0)*e^4*qch1^2*qch2^2 + 4*dot(p1,p2)^2*TOP(-1,-1,-1,-1)*e^4*qch1^2*
      qch2^2 - 8*dot(p1,p2)*dot(p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 + 4*
      dot(p1,p2)*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 - 2*dot(p1,p2)*
      dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 - 4*dot(p1,p2)*TOP(-1,-1,-1,
      -1)*e^4*qch1^2*qch2^2*m2^2 - 4*dot(p1,p2)*TOP(-1,-1,-1,-1)*e^4*qch1^2*
      qch2^2*m1^2 + 10*dot(p1,p2)*TOP(-1,-1,-1,0)*e^4*qch1^2*qch2^2 + 4*dot(p1
      ,q)^2*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2 - 4*dot(p1,q)*dot(p2,q)*TOP(-1,
      -1,-1,-1)*e^4*qch1^2*qch2^2 + 2*dot(p1,q)*dot(q,q)*TOP(-1,-1,-1,-1)*e^4*
      qch1^2*qch2^2 + 4*dot(p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m2^2 + 4*
      dot(p1,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2 - 10*dot(p1,q)*TOP(-1,
      -1,-1,0)*e^4*qch1^2*qch2^2 - 2*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*
      qch2^2*m2^2 - 2*dot(p2,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2 + 6*
      dot(p2,q)*TOP(-1,-1,-1,0)*e^4*qch1^2*qch2^2 + dot(q,q)*TOP(-1,-1,-1,-1)*
      e^4*qch1^2*qch2^2*m2^2 + dot(q,q)*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*
      m1^2 - 3*dot(q,q)*TOP(-1,-1,-1,0)*e^4*qch1^2*qch2^2 + TOP(-1,-1,-1,-1)*
      e^4*qch1^2*qch2^2*m2^4 + 2*TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^2*m2^2
       + TOP(-1,-1,-1,-1)*e^4*qch1^2*qch2^2*m1^4 - 5*TOP(-1,-1,-1,0)*e^4*
      qch1^2*qch2^2*m2^2 - 5*TOP(-1,-1,-1,0)*e^4*qch1^2*qch2^2*m1^2 + 2*TOP(-1
      ,-1,-1,1)*e^4*qch1^2*qch2^2 + 4*TOP(-1,-1,0,0)*e^4*qch1^2*qch2^2)
