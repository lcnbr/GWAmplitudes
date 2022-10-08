#switch 'kinematics'
#case inin
  #if 'masses'
  argument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  argument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  endargument;
  endargument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  #endif
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;


  argument;
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;
   argument;
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;
  endargument;
  endargument;
#break
#case bars
  argument;
  Id p1=-(pb1-q/2);
  Id p2=-(pb2+q/2);
  Id p3=(pb2-q/2);
  Id p4=(pb1+q/2);
  argument;
  Id p1=-(pb1-q/2);
  Id p2=-(pb2+q/2);
  Id p3=(pb2-q/2);
  Id p4=(pb1+q/2);
  endargument;
  endargument;
  Id p1=-(pb1-q/2);
  Id p2=-(pb2+q/2);
  Id p3=(pb2-q/2);
  Id p4=(pb1+q/2);
  #if 'masses'
  argument;
  Id pb1.pb1=mb1^2;
  Id pb2.pb2=mb2^2;
  argument;
  Id pb1.pb1=mb1^2;
  Id pb2.pb2=mb2^2;
  endargument;
  endargument;

  Id pb1.pb1=mb1^2;
  Id pb2.pb2=mb2^2;
  #endif

#break
#case ininasinout
  #if 'masses'
  argument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  argument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  endargument;
  endargument;
  Id p1.p1=m1^2;
  Id p4.p4=m1^2;
  Id p2.p2=m2^2;
  Id p3.p3=m2^2;
  #endif
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;
  Id p3=-p2-q;

  argument;
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;
  Id p3=-p2-q;
    argument;
* p1+p2+p3+p4=0
  Id p4=-p1-p2-p3;
  Id p3=-p2-q;
  endargument;
  endargument;

#break
#case inout
  #if 'masses'
  argument;
  Id p1.p1=m1^2;
  Id q1.q1=m1^2;
  Id p2.p2=m2^2;
  Id q2.q2=m2^2;
  argument;
  Id p1.p1=m1^2;
  Id q1.q1=m1^2;
  Id p2.p2=m2^2;
  Id q2.q2=m2^2;
  endargument;
  endargument;
  Id p1.p1=m1^2;
  Id q1.q1=m1^2;
  Id p2.p2=m2^2;
  Id q2.q2=m2^2;
  #endif

* p1+p2=q1+q2
  Id q2=p1+p2-q1;
  Id q1 =p1+q;

  argument;
* p1+p2=q1+q2
  Id q2=p1+p2-q1;
  Id q1 =p1+q;
  argument;
* p1+p2=q1+q2
  Id q2=p1+p2-q1;
  Id q1 =p1+q;
  endargument;
  endargument;

#break
#case outout
#break
#endswitch