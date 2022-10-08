  Symbol x;
Auto V p;
Auto V p;
Auto V q;
Auto S m;
S e;
Auto S Q;
Auto I nu;
CF prop;
CF inv;

*--#[d1l1:
L [d1l1|o.2.3|i.3|o.i|] = 1*i_* prop(-1,1,q1)*i_* prop(-1,0,q2)*d_(nu3,nu4)*i_* prop(-1,0,q3)*d_(nu5,nu6)*i_*e*qch1*(q1(nu3)-p4(nu3))*i_*e*qch1*(p3(nu5)-q1(nu5))*2*i_*qch2^2*e^2*d_(nu4,nu6);
#procedure momentumRouting
Id q2 = p3 + -p4 + -q3;
Id p1 = p2 + p4 + -p3;
Id q1 = p3 + -q3;

Id q3= l1;
#endprocedure
*--#]d1l1:

*--#[d2l1:
L [d2l1|o.2.3|i.3|o.i|] = 1*i_* prop(-1,2,q1)*i_* prop(-1,0,q2)*d_(nu3,nu4)*i_* prop(-1,0,q3)*d_(nu5,nu6)*i_*e*qch2*(q1(nu3)-p2(nu3))*i_*e*qch2*(p1(nu5)-q1(nu5))*2*i_*qch1^2*e^2*d_(nu4,nu6);
#procedure momentumRouting
Id q2 = p4 + -p3 + -q3;
Id p1 = p2 + p4 + -p3;
Id q1 = p2 + p4 + -p3 + -q3;

Id q3= l1;
#endprocedure
*--#]d2l1:

*--#[d3l1:
L [d3l1|o.3.4|i.3.4|i|o|] = 1*i_* prop(-1,0,q1)*d_(nu1,nu2)*i_* prop(-1,1,q2)*i_* prop(-1,2,q3)*i_* prop(-1,0,q4)*d_(nu7,nu8)*i_*e*qch1*(q2(nu1)-p4(nu1))*i_*e*qch2*(q3(nu2)-p2(nu2))*i_*e*qch1*(p3(nu7)-q2(nu7))*i_*e*qch2*(p1(nu8)-q3(nu8));
#procedure momentumRouting
Id q2 = p3 + -q4;
Id p1 = p2 + p4 + -p3;
Id q1 = p3 + -p4 + -q4;
Id q3 = p2 + p4 + q4 + -p3;

Id q4= l1;
#endprocedure
*--#]d3l1:

*--#[d4l1:
L [d4l1|i.2.4|o.3|i.4|o|] = 1*i_* prop(-1,1,q1)*i_* prop(-1,0,q2)*d_(nu3,nu4)*i_* prop(-1,0,q3)*d_(nu5,nu6)*i_* prop(-1,2,q4)*i_*e*qch1*(q1(nu3)-p4(nu3))*i_*e*qch1*(p3(nu5)-q1(nu5))*i_*e*qch2*(p1(nu4)-q4(nu4))*i_*e*qch2*(q4(nu6)-p2(nu6));
#procedure momentumRouting
Id q2 = p3 + -p4 + -q3;
Id q4 = p2 + -q3;
Id p1 = p2 + p4 + -p3;
Id q1 = p3 + -q3;

Id q3= l1;
#endprocedure
*--#]d4l1:

