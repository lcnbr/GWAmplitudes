* Input model:
*  output= './QGRAFout/inoutp1pp2p1L.h' ;
*
*  style= 'lulu.sty' ;
*
*  model= 'SQEDmodel';
*
*  in= phi1,  phi2;
*
*  out= phi1,phi2;
*
*  loops=1 ;
*
*  loop_momentum= k;
*
*  options=  notadpole,nosnail,onshell ;
*
*

* Diagrams



* Diagram number 1 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 2 internal lines:

Id diag1= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),k1-p1+q1)*
 prop(photon,indx(3),indx(4),-k1)*
 vrtx(phi1c(indx(-2),-q1),photon(indx(1),k1-p1+q1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(2),-k1+p1-q1),photon(indx(4),k1),phi2(indx(-3),p2));




* Diagram number 2 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 3 internal lines:

Id diag2= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1+q1)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-2),-q1),photon(indx(5),-k1+q1),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(4),-k1+p1),photon(indx(6),k1-q1),phi2(indx(-3),p2));




* Diagram number 3 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 3 internal lines:

Id diag3= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1+q2)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p2),phi2(indx(-3),p2))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(5),-k1+q2),phi2(indx(1),k1))*
 vrtx(phi1c(indx(-2),-q1),photon(indx(4),-k1+p2),photon(indx(6),k1-q2),phi1(indx(-1),p1));




* Diagram number 4 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 3 internal lines:

Id diag4= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-p1+q1)*
 prop(phi2,indx(3),indx(4),-k1+p2)*
 prop(photon,indx(5),indx(6),-k1)*
 vrtx(phi1c(indx(-2),-q1),photon(indx(1),-p1+q1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),k1-p2),photon(indx(5),-k1),phi2(indx(-3),p2))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(2),p1-q1),photon(indx(6),k1),phi2(indx(3),-k1+p2));




* Diagram number 5 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 3 internal lines:

Id diag5= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-p1+q1)*
 prop(phi2,indx(3),indx(4),k1+q2)*
 prop(photon,indx(5),indx(6),-k1)*
 vrtx(phi1c(indx(-2),-q1),photon(indx(1),-p1+q1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(5),-k1),phi2(indx(3),k1+q2))*
 vrtx(phi2c(indx(4),-k1-q2),photon(indx(2),p1-q1),photon(indx(6),k1),phi2(indx(-3),p2));




* Diagram number 6 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 3 internal lines:

Id diag6= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-p2+q2)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(photon,indx(5),indx(6),-k1)*
 vrtx(phi2c(indx(-4),-q2),photon(indx(1),-p2+q2),phi2(indx(-3),p2))*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(5),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-2),-q1),photon(indx(2),p2-q2),photon(indx(6),k1),phi1(indx(3),-k1+p1));




* Diagram number 7 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 3 internal lines:

Id diag7= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-p2+q2)*
 prop(phi1,indx(3),indx(4),k1+q1)*
 prop(photon,indx(5),indx(6),-k1)*
 vrtx(phi2c(indx(-4),-q2),photon(indx(1),-p2+q2),phi2(indx(-3),p2))*
 vrtx(phi1c(indx(-2),-q1),photon(indx(5),-k1),phi1(indx(3),k1+q1))*
 vrtx(phi1c(indx(4),-k1-q1),photon(indx(2),p2-q2),photon(indx(6),k1),phi1(indx(-1),p1));




* Diagram number 8 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 4 internal lines:

Id diag8= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-p1+q1)*
 prop(photon,indx(3),indx(4),-p2+q2)*
 prop(phi1,indx(5),indx(6),k1-p1+q1)*
 prop(phi1,indx(7),indx(8),k1)*
 vrtx(phi1c(indx(-2),-q1),photon(indx(1),-p1+q1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(3),-p2+q2),phi2(indx(-3),p2))*
 vrtx(phi1c(indx(8),-k1),photon(indx(2),p1-q1),phi1(indx(5),k1-p1+q1))*
 vrtx(phi1c(indx(6),-k1+p1-q1),photon(indx(4),p2-q2),phi1(indx(7),k1));




* Diagram number 9 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 4 internal lines:

Id diag9= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-p1+q1)*
 prop(photon,indx(3),indx(4),-p2+q2)*
 prop(phi2,indx(5),indx(6),k1-p1+q1)*
 prop(phi2,indx(7),indx(8),k1)*
 vrtx(phi1c(indx(-2),-q1),photon(indx(1),-p1+q1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(3),-p2+q2),phi2(indx(-3),p2))*
 vrtx(phi2c(indx(8),-k1),photon(indx(2),p1-q1),phi2(indx(5),k1-p1+q1))*
 vrtx(phi2c(indx(6),-k1+p1-q1),photon(indx(4),p2-q2),phi2(indx(7),k1));




* Diagram number 10 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 4 internal lines:

Id diag10= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-p1+q1)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p2)*
 prop(phi2,indx(7),indx(8),-k1+q2)*
 vrtx(phi1c(indx(-2),-q1),photon(indx(1),-p1+q1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p2),photon(indx(3),-k1),phi2(indx(-3),p2))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(4),k1),phi2(indx(7),-k1+q2))*
 vrtx(phi2c(indx(8),k1-q2),photon(indx(2),p1-q1),phi2(indx(5),-k1+p2));




* Diagram number 11 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 4 internal lines:

Id diag11= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-p2+q2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k1+q1)*
 vrtx(phi2c(indx(-4),-q2),photon(indx(1),-p2+q2),phi2(indx(-3),p2))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-2),-q1),photon(indx(4),k1),phi1(indx(7),-k1+q1))*
 vrtx(phi1c(indx(8),k1-q1),photon(indx(2),p2-q2),phi1(indx(5),-k1+p1));




* Diagram number 12 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 4 internal lines:

Id diag12= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k1+p2)*
 prop(photon,indx(7),indx(8),k1-p1+q1)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1-p2),photon(indx(2),k1),phi2(indx(-3),p2))*
 vrtx(phi1c(indx(-2),-q1),photon(indx(7),k1-p1+q1),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(8),-k1+p1-q1),phi2(indx(5),k1+p2));




* Diagram number 13 with 4 external legs,
*   2 of which are incoming
*   2 of which are outgoing
* Containg 1 loops:
* with 4 internal lines:

Id diag13= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi2(indx(-3),p2))*
 outpol(phi1(indx(-2),q1))* outpol(phi2(indx(-4),q2))*
 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1+q1)*
 prop(phi2,indx(7),indx(8),k1-p1+q2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-2),-q1),photon(indx(5),-k1+q1),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-4),-q2),photon(indx(4),-k1+p1),phi2(indx(7),k1-p1+q2))*
 vrtx(phi2c(indx(8),-k1+p1-q2),photon(indx(6),k1-q1),phi2(indx(-3),p2));

* Total number of diagrams:

#define NDIAGRAMS "13";

