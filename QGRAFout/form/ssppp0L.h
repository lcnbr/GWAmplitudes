* Input model:
*  output= './QGRAFout/ssppp0L.h' ;
*
*  style= 'lulu.sty' ;
*
*  model= 'SQEDmodel';
*
*  in= phi1, phi1c, photon, photon, photon;
*
*  out= ;
*
*  loops=0;
*
*  loop_momentum= k;
*
*  options= notadpole,nosnail,onshell ;
*
*

* Diagrams



* Diagram number 1 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 1 internal lines:

Id diag1= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p3)*
 vrtx(phi1c(indx(2),-p1-p3),photon(indx(-5),p3),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-7),p4),photon(indx(-9),p5),phi1(indx(1),p1+p3));




* Diagram number 2 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 1 internal lines:

Id diag2= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p4)*
 vrtx(phi1c(indx(2),-p1-p4),photon(indx(-7),p4),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-5),p3),photon(indx(-9),p5),phi1(indx(1),p1+p4));




* Diagram number 3 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 1 internal lines:

Id diag3= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p5)*
 vrtx(phi1c(indx(2),-p1-p5),photon(indx(-9),p5),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-5),p3),photon(indx(-7),p4),phi1(indx(1),p1+p5));




* Diagram number 4 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 1 internal lines:

Id diag4= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),-p2-p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(-5),p3),phi1(indx(1),-p2-p3))*
 vrtx(phi1c(indx(2),p2+p3),photon(indx(-7),p4),photon(indx(-9),p5),phi1(indx(-1),p1));




* Diagram number 5 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 1 internal lines:

Id diag5= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),-p2-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(-7),p4),phi1(indx(1),-p2-p4))*
 vrtx(phi1c(indx(2),p2+p4),photon(indx(-5),p3),photon(indx(-9),p5),phi1(indx(-1),p1));




* Diagram number 6 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 1 internal lines:

Id diag6= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),-p2-p5)*
 vrtx(phi1c(indx(-3),p2),photon(indx(-9),p5),phi1(indx(1),-p2-p5))*
 vrtx(phi1c(indx(2),p2+p5),photon(indx(-5),p3),photon(indx(-7),p4),phi1(indx(-1),p1));




* Diagram number 7 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 2 internal lines:

Id diag7= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p3)*
 prop(phi1,indx(3),indx(4),-p2-p4)*
 vrtx(phi1c(indx(2),-p1-p3),photon(indx(-5),p3),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-7),p4),phi1(indx(3),-p2-p4))*
 vrtx(phi1c(indx(4),p2+p4),photon(indx(-9),p5),phi1(indx(1),p1+p3));




* Diagram number 8 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 2 internal lines:

Id diag8= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p3)*
 prop(phi1,indx(3),indx(4),-p2-p5)*
 vrtx(phi1c(indx(2),-p1-p3),photon(indx(-5),p3),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-9),p5),phi1(indx(3),-p2-p5))*
 vrtx(phi1c(indx(4),p2+p5),photon(indx(-7),p4),phi1(indx(1),p1+p3));




* Diagram number 9 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 2 internal lines:

Id diag9= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p4)*
 prop(phi1,indx(3),indx(4),-p2-p3)*
 vrtx(phi1c(indx(2),-p1-p4),photon(indx(-7),p4),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-5),p3),phi1(indx(3),-p2-p3))*
 vrtx(phi1c(indx(4),p2+p3),photon(indx(-9),p5),phi1(indx(1),p1+p4));




* Diagram number 10 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 2 internal lines:

Id diag10= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p4)*
 prop(phi1,indx(3),indx(4),-p2-p5)*
 vrtx(phi1c(indx(2),-p1-p4),photon(indx(-7),p4),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-9),p5),phi1(indx(3),-p2-p5))*
 vrtx(phi1c(indx(4),p2+p5),photon(indx(-5),p3),phi1(indx(1),p1+p4));




* Diagram number 11 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 2 internal lines:

Id diag11= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p5)*
 prop(phi1,indx(3),indx(4),-p2-p3)*
 vrtx(phi1c(indx(2),-p1-p5),photon(indx(-9),p5),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-5),p3),phi1(indx(3),-p2-p3))*
 vrtx(phi1c(indx(4),p2+p3),photon(indx(-7),p4),phi1(indx(1),p1+p5));




* Diagram number 12 with 5 external legs,
*   5 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 2 internal lines:

Id diag12= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))* inpol(photon(indx(-9),p5))*

 prop(phi1,indx(1),indx(2),p1+p5)*
 prop(phi1,indx(3),indx(4),-p2-p4)*
 vrtx(phi1c(indx(2),-p1-p5),photon(indx(-9),p5),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-7),p4),phi1(indx(3),-p2-p4))*
 vrtx(phi1c(indx(4),p2+p4),photon(indx(-5),p3),phi1(indx(1),p1+p5));

* Total number of diagrams:

#define NDIAGRAMS "12";

