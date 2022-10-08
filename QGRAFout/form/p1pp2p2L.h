* Input model:
*  output= './QGRAFout/p1pp2p2L.h' ;
*
*  style= 'lulu.sty' ;
*
*  model= 'SQEDmodel';
*
*  in= phi1, phi1c, phi2, phi2c;
*
*  out= ;
*
*  loops=2;
*
*  loop_momentum= k;
*
*  options= notadpole,nosnail,onshell ;
*
*

* Diagrams



* Diagram number 1 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 4 internal lines:

Id diag1= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p1-p2)*
 prop(phi2,indx(5),indx(6),k1-k2+p3)*
 prop(photon,indx(7),indx(8),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),photon(indx(3),k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1+k2-p3),photon(indx(2),k1),photon(indx(7),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1+p2),photon(indx(8),k2),phi2(indx(5),k1-k2+p3));




* Diagram number 2 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 4 internal lines:

Id diag2= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p3-p4)*
 prop(phi1,indx(5),indx(6),k1-k2+p1)*
 prop(photon,indx(7),indx(8),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),photon(indx(3),k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),-k1+k2-p1),photon(indx(2),k1),photon(indx(7),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),-k1+p3+p4),photon(indx(8),k2),phi1(indx(5),k1-k2+p1));




* Diagram number 3 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag3= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1+k2)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(photon,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),-k2-p1-p2)*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),-k2),phi1(indx(1),k1+k2))*
 vrtx(phi1c(indx(2),-k1-k2),photon(indx(7),k2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k2-p1-p2),photon(indx(6),k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),k2+p1+p2),photon(indx(8),-k2),phi2(indx(-5),p3));




* Diagram number 4 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag4= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1+k2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(photon,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),-k2-p1-p2)*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),-k2),phi2(indx(1),k1+k2))*
 vrtx(phi2c(indx(2),-k1-k2),photon(indx(7),k2),phi2(indx(3),k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k2-p1-p2),photon(indx(6),k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),k2+p1+p2),photon(indx(8),-k2),phi2(indx(-5),p3));




* Diagram number 5 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag5= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(phi1,indx(7),indx(8),k1-k2)*
 prop(photon,indx(9),indx(10),-k2-p3-p4)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(8),-k1+k2),photon(indx(5),-k2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k2-p3-p4),photon(indx(6),k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(10),k2+p3+p4),photon(indx(4),-k1+p1),phi1(indx(7),k1-k2));




* Diagram number 6 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag6= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(phi1,indx(7),indx(8),-k1+k2)*
 prop(photon,indx(9),indx(10),-k2-p3-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k2),phi1(indx(7),-k1+k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k2-p3-p4),photon(indx(6),k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),k1-k2),photon(indx(10),k2+p3+p4),photon(indx(4),-k1+p2),phi1(indx(-1),p1));




* Diagram number 7 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag7= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(phi2,indx(7),indx(8),k1-k2)*
 prop(photon,indx(9),indx(10),-k2-p1-p2)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1+k2),photon(indx(5),-k2),phi2(indx(1),k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k2-p1-p2),photon(indx(6),k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),k2+p1+p2),photon(indx(4),-k1+p3),phi2(indx(7),k1-k2));




* Diagram number 8 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag8= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p4)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(phi2,indx(7),indx(8),-k1+k2)*
 prop(photon,indx(9),indx(10),-k2-p1-p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),k1-p4),phi2(indx(1),-k1))*
 vrtx(phi2c(indx(2),k1),photon(indx(5),-k2),phi2(indx(7),-k1+k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k2-p1-p2),photon(indx(6),k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),k1-k2),photon(indx(10),k2+p1+p2),photon(indx(4),-k1+p4),phi2(indx(-5),p3));




* Diagram number 9 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag9= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(phi1,indx(5),indx(6),k1-k2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k1+p2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),-k1+k2),photon(indx(7),-k2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1),photon(indx(9),k1+p2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(10),-k1-p2),photon(indx(8),k2),phi1(indx(5),k1-k2));




* Diagram number 10 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag10= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(phi1,indx(5),indx(6),-k1+k2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k1+p1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(7),-k2),phi1(indx(5),-k1+k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p2),photon(indx(9),k1+p1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-k2),photon(indx(10),-k1-p1),photon(indx(8),k2),phi1(indx(-1),p1));




* Diagram number 11 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag11= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(phi2,indx(5),indx(6),k1-k2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k1+p4)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),-k1+k2),photon(indx(7),-k2),phi2(indx(1),k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),-k1+p3),photon(indx(9),k1+p4),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),-k1-p4),photon(indx(8),k2),phi2(indx(5),k1-k2));




* Diagram number 12 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag12= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p4)*
 prop(phi2,indx(5),indx(6),-k1+k2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k1+p3)*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),k1-p4),phi2(indx(1),-k1))*
 vrtx(phi2c(indx(2),k1),photon(indx(7),-k2),phi2(indx(5),-k1+k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),-k1+p4),photon(indx(9),k1+p3),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-k2),photon(indx(10),-k1-p3),photon(indx(8),k2),phi2(indx(-5),p3));




* Diagram number 13 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag13= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1-k2)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),k1+k2),photon(indx(3),-k1),phi1(indx(7),-k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k1-p3-p4),photon(indx(4),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),k2),photon(indx(2),p1+p2),photon(indx(10),k1+p3+p4),phi1(indx(5),-k1-k2));




* Diagram number 14 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag14= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1-k2)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1+k2),photon(indx(3),-k1),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k1-p3-p4),photon(indx(4),k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),k2),photon(indx(2),p1+p2),photon(indx(10),k1+p3+p4),phi2(indx(5),-k1-k2));




* Diagram number 15 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag15= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1-k2)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1-p1-p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1+k2),photon(indx(3),-k1),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k1-p1-p2),photon(indx(4),k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(8),k2),photon(indx(2),p3+p4),photon(indx(10),k1+p1+p2),phi1(indx(5),-k1-k2));




* Diagram number 16 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag16= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1-k2)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1-p1-p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),k1+k2),photon(indx(3),-k1),phi2(indx(7),-k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k1-p1-p2),photon(indx(4),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),k2),photon(indx(2),p3+p4),photon(indx(10),k1+p1+p2),phi2(indx(5),-k1-k2));




* Diagram number 17 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag17= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi1,indx(3),indx(4),-k1+p1+p2)*
 prop(phi1,indx(5),indx(6),-k1)*
 prop(photon,indx(7),indx(8),k2-p3-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(4),k1-p1-p2),photon(indx(2),p1+p2),phi1(indx(5),-k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k2-p3-p4),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1),photon(indx(8),-k2+p3+p4),photon(indx(10),k2),phi1(indx(3),-k1+p1+p2));




* Diagram number 18 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag18= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1+p1+p2)*
 prop(phi2,indx(5),indx(6),-k1)*
 prop(photon,indx(7),indx(8),k2-p3-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(5),-k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k2-p3-p4),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),k1),photon(indx(8),-k2+p3+p4),photon(indx(10),k2),phi2(indx(3),-k1+p1+p2));




* Diagram number 19 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag19= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1+p3+p4)*
 prop(phi1,indx(5),indx(6),-k1)*
 prop(photon,indx(7),indx(8),k2-p1-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(5),-k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k2-p1-p2),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),k1),photon(indx(8),-k2+p1+p2),photon(indx(10),k2),phi1(indx(3),-k1+p3+p4));




* Diagram number 20 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag20= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi2,indx(3),indx(4),-k1+p3+p4)*
 prop(phi2,indx(5),indx(6),-k1)*
 prop(photon,indx(7),indx(8),k2-p1-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(4),k1-p3-p4),photon(indx(2),p3+p4),phi2(indx(5),-k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k2-p1-p2),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1),photon(indx(8),-k2+p1+p2),photon(indx(10),k2),phi2(indx(3),-k1+p3+p4));




* Diagram number 21 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag21= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1-k2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1+k2),photon(indx(7),-k2),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(2),p1+p2),photon(indx(9),-k1+p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),k1-p4),photon(indx(8),k2),phi2(indx(5),-k1-k2));




* Diagram number 22 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag22= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(phi2,indx(5),indx(6),k1+k2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(7),-k2),phi2(indx(5),k1+k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),p1+p2),photon(indx(9),-k1+p3),phi2(indx(3),k1))*
 vrtx(phi2c(indx(6),-k1-k2),photon(indx(10),k1-p3),photon(indx(8),k2),phi2(indx(-5),p3));




* Diagram number 23 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag23= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1-k2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1+k2),photon(indx(7),-k2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(2),p3+p4),photon(indx(9),-k1+p2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(10),k1-p2),photon(indx(8),k2),phi1(indx(5),-k1-k2));




* Diagram number 24 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag24= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(phi1,indx(5),indx(6),k1+k2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(7),-k2),phi1(indx(5),k1+k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),p3+p4),photon(indx(9),-k1+p1),phi1(indx(3),k1))*
 vrtx(phi1c(indx(6),-k1-k2),photon(indx(10),k1-p1),photon(indx(8),k2),phi1(indx(-1),p1));




* Diagram number 25 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag25= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p1+p2)*
 prop(photon,indx(7),indx(8),-k1+k2-p3)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(7),-k1+k2-p3),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),k1-k2+p3),photon(indx(10),k2),phi2(indx(5),-k1+p1+p2));




* Diagram number 26 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag26= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p3+p4)*
 prop(photon,indx(7),indx(8),-k1+k2-p1)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(7),-k1+k2-p1),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(8),k1-k2+p1),photon(indx(10),k2),phi1(indx(5),-k1+p3+p4));




* Diagram number 27 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag27= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),k2-p2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k2),phi1(indx(5),k2-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),photon(indx(9),-k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),-k2+p2),photon(indx(10),k1+p3+p4),photon(indx(8),k2),phi1(indx(3),-k1+p1));




* Diagram number 28 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag28= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi1,indx(5),indx(6),-k2+p1)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi1c(indx(6),k2-p1),photon(indx(7),-k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),photon(indx(9),-k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(10),k1+p3+p4),photon(indx(8),k2),phi1(indx(5),-k2+p1));




* Diagram number 29 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag29= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi2,indx(5),indx(6),k2-p4)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1-p1-p2)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k2),phi2(indx(5),k2-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),photon(indx(9),-k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k2+p4),photon(indx(10),k1+p1+p2),photon(indx(8),k2),phi2(indx(3),-k1+p3));




* Diagram number 30 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag30= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi2,indx(5),indx(6),-k2+p3)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1-p1-p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi2c(indx(6),k2-p3),photon(indx(7),-k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),photon(indx(9),-k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(10),k1+p1+p2),photon(indx(8),k2),phi2(indx(5),-k2+p3));




* Diagram number 31 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag31= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),k2-p3-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k2-p3-p4),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(8),-k2+p3+p4),photon(indx(10),k2),phi1(indx(3),-k1+p1));




* Diagram number 32 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag32= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k2-p1-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k2-p1-p2),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(8),-k2+p1+p2),photon(indx(10),k2),phi2(indx(3),-k1+p3));




* Diagram number 33 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag33= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(phi2,indx(7),indx(8),-k2+p3)*
 prop(photon,indx(9),indx(10),-k1-k2-p2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),k2-p3),photon(indx(5),-k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k1-k2-p2),photon(indx(6),k2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1),photon(indx(10),k1+k2+p2),phi2(indx(7),-k2+p3));




* Diagram number 34 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag34= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(phi2,indx(7),indx(8),k2-p4)*
 prop(photon,indx(9),indx(10),-k1-k2-p2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k2),phi2(indx(7),k2-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k1-k2-p2),photon(indx(6),k2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(8),-k2+p4),photon(indx(4),-k1+p1),photon(indx(10),k1+k2+p2),phi2(indx(-5),p3));




* Diagram number 35 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag35= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(phi2,indx(7),indx(8),-k2+p3)*
 prop(photon,indx(9),indx(10),-k1-k2-p1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi2c(indx(8),k2-p3),photon(indx(5),-k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(2),k1),photon(indx(9),-k1-k2-p1),photon(indx(6),k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p2),photon(indx(10),k1+k2+p1),phi2(indx(7),-k2+p3));




* Diagram number 36 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag36= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k2)*
 prop(phi2,indx(7),indx(8),k2-p4)*
 prop(photon,indx(9),indx(10),-k1-k2-p1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k2),phi2(indx(7),k2-p4))*
 vrtx(phi1c(indx(2),k1),photon(indx(9),-k1-k2-p1),photon(indx(6),k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),-k2+p4),photon(indx(4),-k1+p2),photon(indx(10),k1+k2+p1),phi2(indx(-5),p3));




* Diagram number 37 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag37= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1+p1)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k2+p3)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-p1-p2)*
 vrtx(phi1c(indx(2),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k2-p3),photon(indx(7),-k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),k1),photon(indx(9),-p1-p2),phi1(indx(1),-k1+p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),p1+p2),photon(indx(8),k2),phi2(indx(5),-k2+p3));




* Diagram number 38 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag38= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1+p1)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),k2-p4)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-p1-p2)*
 vrtx(phi1c(indx(2),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k2),phi2(indx(5),k2-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),k1),photon(indx(9),-p1-p2),phi1(indx(1),-k1+p1))*
 vrtx(phi2c(indx(6),-k2+p4),photon(indx(10),p1+p2),photon(indx(8),k2),phi2(indx(-5),p3));




* Diagram number 39 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag39= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k2+p3)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-k1),phi1(indx(1),k1-p2))*
 vrtx(phi2c(indx(6),k2-p3),photon(indx(7),-k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(2),-k1+p2),photon(indx(4),k1),photon(indx(9),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),p1+p2),photon(indx(8),k2),phi2(indx(5),-k2+p3));




* Diagram number 40 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag40= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),k2-p4)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-k1),phi1(indx(1),k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k2),phi2(indx(5),k2-p4))*
 vrtx(phi1c(indx(2),-k1+p2),photon(indx(4),k1),photon(indx(9),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k2+p4),photon(indx(10),p1+p2),photon(indx(8),k2),phi2(indx(-5),p3));




* Diagram number 41 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag41= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),-k1-k2+p1+p3)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(8),k1+k2-p1-p3),photon(indx(4),-k1+p1),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1+p2),photon(indx(10),k2),phi2(indx(7),-k1-k2+p1+p3));




* Diagram number 42 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag42= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k1+k2-p1-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1),photon(indx(9),-k2),phi2(indx(7),k1+k2-p1-p4))*
 vrtx(phi2c(indx(8),-k1-k2+p1+p4),photon(indx(6),k1+p2),photon(indx(10),k2),phi2(indx(-5),p3));




* Diagram number 43 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag43= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),k1+k2-p1-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k1+k2-p1-p2),photon(indx(9),-k2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),-k1-k2+p1+p2),photon(indx(10),k2),phi2(indx(5),k1+p3));




* Diagram number 44 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag44= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k1+k2-p1-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k1+k2-p1-p2),photon(indx(9),-k2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(8),-k1-k2+p1+p2),photon(indx(10),k2),phi2(indx(-5),p3));




* Diagram number 45 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag45= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),k1+k2-p1-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(7),k1+k2-p1-p2),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),-k1-k2+p1+p2),photon(indx(10),k2),phi2(indx(5),k1+p3));




* Diagram number 46 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag46= (+1/2)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k1+k2-p1-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(7),k1+k2-p1-p2),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(8),-k1-k2+p1+p2),photon(indx(10),k2),phi2(indx(-5),p3));




* Diagram number 47 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag47= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),-k1-k2+p1+p3)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1-p4),phi2(indx(1),k1))*
 vrtx(phi1c(indx(8),k1+k2-p1-p3),photon(indx(4),-k1+p3),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1+p4),photon(indx(10),k2),phi1(indx(7),-k1-k2+p1+p3));




* Diagram number 48 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag48= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),k1+k2-p2-p3)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1-p4),phi2(indx(1),k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),-k1+p3),photon(indx(9),-k2),phi1(indx(7),k1+k2-p2-p3))*
 vrtx(phi1c(indx(8),-k1-k2+p2+p3),photon(indx(6),k1+p4),photon(indx(10),k2),phi1(indx(-1),p1));




* Diagram number 49 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag49= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi2,indx(7),indx(8),-k1+k2-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),k1),photon(indx(9),-k2),phi2(indx(7),-k1+k2-p4))*
 vrtx(phi2c(indx(8),k1-k2+p4),photon(indx(2),p1+p2),photon(indx(10),k2),phi2(indx(5),-k1+p3));




* Diagram number 50 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag50= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),k1-k2+p3)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-k1),phi2(indx(5),k1-p4))*
 vrtx(phi2c(indx(8),-k1+k2-p3),photon(indx(4),k1),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),-k1+p4),photon(indx(2),p1+p2),photon(indx(10),k2),phi2(indx(7),k1-k2+p3));




* Diagram number 51 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag51= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k1+k2-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),k1),photon(indx(9),-k2),phi1(indx(7),-k1+k2-p2))*
 vrtx(phi1c(indx(8),k1-k2+p2),photon(indx(2),p3+p4),photon(indx(10),k2),phi1(indx(5),-k1+p1));




* Diagram number 52 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag52= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),k1-k2+p1)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-k1),phi1(indx(5),k1-p2))*
 vrtx(phi1c(indx(8),-k1+k2-p1),photon(indx(4),k1),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),-k1+p2),photon(indx(2),p3+p4),photon(indx(10),k2),phi1(indx(7),k1-k2+p1));




* Diagram number 53 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag53= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),k2+p3)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(5),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),p1+p2),photon(indx(9),-k2),phi2(indx(7),k2+p3))*
 vrtx(phi2c(indx(8),-k2-p3),photon(indx(10),k2),photon(indx(6),k1),phi2(indx(3),-k1+p3));




* Diagram number 54 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag54= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),-k2-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi2c(indx(8),k2+p4),photon(indx(2),p1+p2),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(10),k2),photon(indx(6),k1),phi2(indx(7),-k2-p4));




* Diagram number 55 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag55= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),k2+p1)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(5),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),p3+p4),photon(indx(9),-k2),phi1(indx(7),k2+p1))*
 vrtx(phi1c(indx(8),-k2-p1),photon(indx(10),k2),photon(indx(6),k1),phi1(indx(3),-k1+p1));




* Diagram number 56 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag56= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),-k2-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi1c(indx(8),k2+p2),photon(indx(2),p3+p4),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(10),k2),photon(indx(6),k1),phi1(indx(7),-k2-p2));




* Diagram number 57 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag57= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi1,indx(5),indx(6),k1+k2-p1-p2)*
 prop(phi1,indx(7),indx(8),k1)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),-k1),photon(indx(2),p1+p2),photon(indx(9),-k2),phi1(indx(5),k1+k2-p1-p2))*
 vrtx(phi1c(indx(6),-k1-k2+p1+p2),photon(indx(4),p3+p4),photon(indx(10),k2),phi1(indx(7),k1));




* Diagram number 58 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 5 internal lines:

Id diag58= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi2,indx(5),indx(6),k1+k2-p1-p2)*
 prop(phi2,indx(7),indx(8),k1)*
 prop(photon,indx(9),indx(10),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1),photon(indx(2),p1+p2),photon(indx(9),-k2),phi2(indx(5),k1+k2-p1-p2))*
 vrtx(phi2c(indx(6),-k1-k2+p1+p2),photon(indx(4),p3+p4),photon(indx(10),k2),phi2(indx(7),k1));




* Diagram number 59 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag59= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1+p2)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+k2)*
 prop(photon,indx(11),indx(12),k1-k2-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),k1-p1-p2),photon(indx(2),p1+p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(9),-k1+k2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(11),k1-k2-p1-p2),phi1(indx(5),-k1+p1+p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),k1-k2),photon(indx(12),-k1+k2+p1+p2),phi2(indx(-5),p3));




* Diagram number 60 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag60= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p1+p2)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+k2)*
 prop(photon,indx(11),indx(12),k1-k2-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(9),-k1+k2),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(11),k1-k2-p1-p2),phi2(indx(5),-k1+p1+p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),k1-k2),photon(indx(12),-k1+k2+p1+p2),phi2(indx(-5),p3));




* Diagram number 61 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag61= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p3+p4)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+k2)*
 prop(photon,indx(11),indx(12),k1-k2-p3-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(9),-k1+k2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(11),k1-k2-p3-p4),phi1(indx(5),-k1+p3+p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(10),k1-k2),photon(indx(12),-k1+k2+p3+p4),phi1(indx(-1),p1));




* Diagram number 62 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag62= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3+p4)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+k2)*
 prop(photon,indx(11),indx(12),k1-k2-p3-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),k1-p3-p4),photon(indx(2),p3+p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(9),-k1+k2),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(11),k1-k2-p3-p4),phi2(indx(5),-k1+p3+p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(10),k1-k2),photon(indx(12),-k1+k2+p3+p4),phi1(indx(-1),p1));




* Diagram number 63 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag63= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(phi1,indx(5),indx(6),k1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),k1-k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(5),k1))*
 vrtx(phi1c(indx(10),-k1+k2),photon(indx(11),-k2),phi1(indx(1),k1))*
 vrtx(phi1c(indx(6),-k1),photon(indx(12),k2),phi1(indx(9),k1-k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1),photon(indx(8),k1+p2),phi2(indx(-5),p3));




* Diagram number 64 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag64= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(phi2,indx(5),indx(6),k1)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),k1-k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(5),k1))*
 vrtx(phi2c(indx(10),-k1+k2),photon(indx(11),-k2),phi2(indx(1),k1))*
 vrtx(phi2c(indx(6),-k1),photon(indx(12),k2),phi2(indx(9),k1-k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),-k1+p3),photon(indx(8),k1+p4),phi1(indx(-1),p1));




* Diagram number 65 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag65= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k2)*
 prop(photon,indx(7),indx(8),k2-p2)*
 prop(phi1,indx(9),indx(10),-k1-k2)*
 prop(photon,indx(11),indx(12),-k2-p1)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k2-p2),phi1(indx(5),-k2))*
 vrtx(phi1c(indx(6),k2),photon(indx(2),k1),phi1(indx(9),-k1-k2))*
 vrtx(phi1c(indx(10),k1+k2),photon(indx(11),-k2-p1),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),-k2+p2),photon(indx(12),k2+p1),phi2(indx(-5),p3));




* Diagram number 66 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag66= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi1,indx(5),indx(6),k2)*
 prop(photon,indx(7),indx(8),k2-p1)*
 prop(phi1,indx(9),indx(10),k1+k2)*
 prop(photon,indx(11),indx(12),-k2-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi1c(indx(6),-k2),photon(indx(7),k2-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(10),-k1-k2),photon(indx(2),k1),phi1(indx(5),k2))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(11),-k2-p2),phi1(indx(9),k1+k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),-k2+p1),photon(indx(12),k2+p2),phi2(indx(-5),p3));




* Diagram number 67 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag67= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi2,indx(5),indx(6),-k2)*
 prop(photon,indx(7),indx(8),k2-p4)*
 prop(phi2,indx(9),indx(10),-k1-k2)*
 prop(photon,indx(11),indx(12),-k2-p3)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k2-p4),phi2(indx(5),-k2))*
 vrtx(phi2c(indx(6),k2),photon(indx(2),k1),phi2(indx(9),-k1-k2))*
 vrtx(phi2c(indx(10),k1+k2),photon(indx(11),-k2-p3),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(8),-k2+p4),photon(indx(12),k2+p3),phi1(indx(-1),p1));




* Diagram number 68 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag68= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi2,indx(5),indx(6),k2)*
 prop(photon,indx(7),indx(8),k2-p3)*
 prop(phi2,indx(9),indx(10),k1+k2)*
 prop(photon,indx(11),indx(12),-k2-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi2c(indx(6),-k2),photon(indx(7),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(10),-k1-k2),photon(indx(2),k1),phi2(indx(5),k2))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(11),-k2-p4),phi2(indx(9),k1+k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(8),-k2+p3),photon(indx(12),k2+p4),phi1(indx(-1),p1));




* Diagram number 69 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag69= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi1,indx(7),indx(8),k1+k2-p1)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k1-p1)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),-k1+p1),phi1(indx(7),k1+k2-p1))*
 vrtx(phi1c(indx(8),-k1-k2+p1),photon(indx(11),k1-p1),phi1(indx(9),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1+p2),photon(indx(12),-k1+p1),phi2(indx(-5),p3));




* Diagram number 70 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag70= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k1+k2-p1)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k1-p1)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),-k1+p1),phi2(indx(7),k1+k2-p1))*
 vrtx(phi2c(indx(8),-k1-k2+p1),photon(indx(11),k1-p1),phi2(indx(9),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1+p2),photon(indx(12),-k1+p1),phi2(indx(-5),p3));




* Diagram number 71 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag71= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1-p1)*
 prop(phi1,indx(7),indx(8),k1+k2-p2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),-k1+p2),phi1(indx(7),k1+k2-p2))*
 vrtx(phi1c(indx(8),-k1-k2+p2),photon(indx(11),k1-p2),phi1(indx(9),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1+p1),photon(indx(12),-k1+p2),phi2(indx(-5),p3));




* Diagram number 72 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag72= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1-p1)*
 prop(phi2,indx(7),indx(8),k1+k2-p2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),-k1+p2),phi2(indx(7),k1+k2-p2))*
 vrtx(phi2c(indx(8),-k1-k2+p2),photon(indx(11),k1-p2),phi2(indx(9),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1+p1),photon(indx(12),-k1+p2),phi2(indx(-5),p3));




* Diagram number 73 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag73= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),k1+k2-p3)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k1-p3)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1-p4),phi2(indx(1),k1))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),-k1+p3),phi1(indx(7),k1+k2-p3))*
 vrtx(phi1c(indx(8),-k1-k2+p3),photon(indx(11),k1-p3),phi1(indx(9),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1+p4),photon(indx(12),-k1+p3),phi1(indx(-1),p1));




* Diagram number 74 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag74= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k1-p4)*
 prop(phi2,indx(7),indx(8),k1+k2-p3)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k1-p3)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1-p4),phi2(indx(1),k1))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),-k1+p3),phi2(indx(7),k1+k2-p3))*
 vrtx(phi2c(indx(8),-k1-k2+p3),photon(indx(11),k1-p3),phi2(indx(9),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1+p4),photon(indx(12),-k1+p3),phi1(indx(-1),p1));




* Diagram number 75 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag75= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p4)*
 prop(photon,indx(5),indx(6),-k1-p3)*
 prop(phi1,indx(7),indx(8),k1+k2-p4)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k1-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),k1-p4),phi2(indx(1),-k1))*
 vrtx(phi2c(indx(2),k1),photon(indx(5),-k1-p3),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),-k1+p4),phi1(indx(7),k1+k2-p4))*
 vrtx(phi1c(indx(8),-k1-k2+p4),photon(indx(11),k1-p4),phi1(indx(9),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1+p3),photon(indx(12),-k1+p4),phi1(indx(-1),p1));




* Diagram number 76 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag76= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p4)*
 prop(photon,indx(5),indx(6),-k1-p3)*
 prop(phi2,indx(7),indx(8),k1+k2-p4)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k1-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),k1-p4),phi2(indx(1),-k1))*
 vrtx(phi2c(indx(2),k1),photon(indx(5),-k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),-k1+p4),phi2(indx(7),k1+k2-p4))*
 vrtx(phi2c(indx(8),-k1-k2+p4),photon(indx(11),k1-p4),phi2(indx(9),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1+p3),photon(indx(12),-k1+p4),phi1(indx(-1),p1));




* Diagram number 77 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag77= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k1+k2-p1)*
 prop(photon,indx(11),indx(12),-k1-k2-p2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),k1+k2-p1),phi1(indx(3),-k1+p1))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(11),-k1-k2-p2),phi1(indx(7),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),-k1-k2+p1),photon(indx(12),k1+k2+p2),phi2(indx(-5),p3));




* Diagram number 78 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag78= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k1+k2-p3)*
 prop(photon,indx(11),indx(12),-k1-k2-p4)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),k1+k2-p3),phi2(indx(3),-k1+p3))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(11),-k1-k2-p4),phi2(indx(7),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(10),-k1-k2+p3),photon(indx(12),k1+k2+p4),phi1(indx(-1),p1));




* Diagram number 79 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag79= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi1,indx(7),indx(8),-k1+k2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-k1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),k1),phi1(indx(7),-k1+k2))*
 vrtx(phi1c(indx(8),k1-k2),photon(indx(11),-k1),phi1(indx(9),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),p1+p2),photon(indx(12),k1),phi2(indx(5),-k1+p3));




* Diagram number 80 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag80= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi2,indx(7),indx(8),-k1+k2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-k1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),k1),phi2(indx(7),-k1+k2))*
 vrtx(phi2c(indx(8),k1-k2),photon(indx(11),-k1),phi2(indx(9),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),p1+p2),photon(indx(12),k1),phi2(indx(5),-k1+p3));




* Diagram number 81 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag81= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(phi2,indx(7),indx(8),k1-k2)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi2,indx(11),indx(12),k1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1+k2),photon(indx(9),-k2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(12),-k1),photon(indx(10),k2),phi2(indx(7),k1-k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),p1+p2),photon(indx(6),-k1+p3),phi2(indx(11),k1));




* Diagram number 82 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag82= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),k1-p4)*
 prop(phi1,indx(7),indx(8),-k1+k2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-k1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-k1),phi2(indx(5),k1-p4))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),k1),phi1(indx(7),-k1+k2))*
 vrtx(phi1c(indx(8),k1-k2),photon(indx(11),-k1),phi1(indx(9),k2))*
 vrtx(phi2c(indx(6),-k1+p4),photon(indx(2),p1+p2),photon(indx(12),k1),phi2(indx(-5),p3));




* Diagram number 83 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag83= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),-k1+k2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-k1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-k1),phi2(indx(5),k1-p4))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),k1),phi2(indx(7),-k1+k2))*
 vrtx(phi2c(indx(8),k1-k2),photon(indx(11),-k1),phi2(indx(9),k2))*
 vrtx(phi2c(indx(6),-k1+p4),photon(indx(2),p1+p2),photon(indx(12),k1),phi2(indx(-5),p3));




* Diagram number 84 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag84= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),-k1+k2)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi2,indx(11),indx(12),-k1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),k1-p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(9),-k2),phi2(indx(7),-k1+k2))*
 vrtx(phi2c(indx(8),k1-k2),photon(indx(10),k2),phi2(indx(11),-k1))*
 vrtx(phi2c(indx(12),k1),photon(indx(2),p1+p2),photon(indx(6),-k1+p4),phi2(indx(-5),p3));




* Diagram number 85 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag85= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k1+k2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-k1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),k1),phi1(indx(7),-k1+k2))*
 vrtx(phi1c(indx(8),k1-k2),photon(indx(11),-k1),phi1(indx(9),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),p3+p4),photon(indx(12),k1),phi1(indx(5),-k1+p1));




* Diagram number 86 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag86= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi2,indx(7),indx(8),-k1+k2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-k1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),k1),phi2(indx(7),-k1+k2))*
 vrtx(phi2c(indx(8),k1-k2),photon(indx(11),-k1),phi2(indx(9),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),p3+p4),photon(indx(12),k1),phi1(indx(5),-k1+p1));




* Diagram number 87 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag87= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(phi1,indx(7),indx(8),k1-k2)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),k1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(8),-k1+k2),photon(indx(9),-k2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(12),-k1),photon(indx(10),k2),phi1(indx(7),k1-k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),p3+p4),photon(indx(6),-k1+p1),phi1(indx(11),k1));




* Diagram number 88 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag88= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),-k1+k2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-k1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-k1),phi1(indx(5),k1-p2))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),k1),phi1(indx(7),-k1+k2))*
 vrtx(phi1c(indx(8),k1-k2),photon(indx(11),-k1),phi1(indx(9),k2))*
 vrtx(phi1c(indx(6),-k1+p2),photon(indx(2),p3+p4),photon(indx(12),k1),phi1(indx(-1),p1));




* Diagram number 89 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag89= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),k1-p2)*
 prop(phi2,indx(7),indx(8),-k1+k2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-k1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-k1),phi1(indx(5),k1-p2))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),k1),phi2(indx(7),-k1+k2))*
 vrtx(phi2c(indx(8),k1-k2),photon(indx(11),-k1),phi2(indx(9),k2))*
 vrtx(phi1c(indx(6),-k1+p2),photon(indx(2),p3+p4),photon(indx(12),k1),phi1(indx(-1),p1));




* Diagram number 90 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag90= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),-k1+k2)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),-k1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),k1-p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(9),-k2),phi1(indx(7),-k1+k2))*
 vrtx(phi1c(indx(8),k1-k2),photon(indx(10),k2),phi1(indx(11),-k1))*
 vrtx(phi1c(indx(12),k1),photon(indx(2),p3+p4),photon(indx(6),-k1+p2),phi1(indx(-1),p1));




* Diagram number 91 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag91= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),-k1+k2)*
 prop(phi2,indx(11),indx(12),-k1+k2+p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),-k1+k2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(12),k1-k2-p3),photon(indx(6),-k1+p3),phi2(indx(7),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),p1+p2),photon(indx(10),k1-k2),phi2(indx(11),-k1+k2+p3));




* Diagram number 92 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag92= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+k2)*
 prop(phi2,indx(11),indx(12),k1-k2-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),k1-p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(9),-k1+k2),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(6),-k1+p4),phi2(indx(11),k1-k2-p4))*
 vrtx(phi2c(indx(12),-k1+k2+p4),photon(indx(2),p1+p2),photon(indx(10),k1-k2),phi2(indx(-5),p3));




* Diagram number 93 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag93= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),-k1+k2)*
 prop(phi1,indx(11),indx(12),-k1+k2+p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),-k1+k2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(12),k1-k2-p1),photon(indx(6),-k1+p1),phi1(indx(7),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),p3+p4),photon(indx(10),k1-k2),phi1(indx(11),-k1+k2+p1));




* Diagram number 94 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag94= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),-k1+k2)*
 prop(phi1,indx(11),indx(12),k1-k2-p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),k1-p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(9),-k1+k2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(6),-k1+p2),phi1(indx(11),k1-k2-p2))*
 vrtx(phi1c(indx(12),-k1+k2+p2),photon(indx(2),p3+p4),photon(indx(10),k1-k2),phi1(indx(-1),p1));




* Diagram number 95 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag95= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),k2-p1-p2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(5),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(10),-k2),photon(indx(2),p1+p2),phi1(indx(7),k2-p1-p2))*
 vrtx(phi1c(indx(8),-k2+p1+p2),photon(indx(11),-p1-p2),phi1(indx(9),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1),photon(indx(12),p1+p2),phi2(indx(3),-k1+p3));




* Diagram number 96 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag96= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),k2-p1-p2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(5),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(10),-k2),photon(indx(2),p1+p2),phi2(indx(7),k2-p1-p2))*
 vrtx(phi2c(indx(8),-k2+p1+p2),photon(indx(11),-p1-p2),phi2(indx(9),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1),photon(indx(12),p1+p2),phi2(indx(3),-k1+p3));




* Diagram number 97 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag97= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),k2-p1-p2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(10),-k2),photon(indx(2),p1+p2),phi1(indx(7),k2-p1-p2))*
 vrtx(phi1c(indx(8),-k2+p1+p2),photon(indx(11),-p1-p2),phi1(indx(9),k2))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(6),k1),photon(indx(12),p1+p2),phi2(indx(-5),p3));




* Diagram number 98 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag98= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),k2-p1-p2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi2c(indx(10),-k2),photon(indx(2),p1+p2),phi2(indx(7),k2-p1-p2))*
 vrtx(phi2c(indx(8),-k2+p1+p2),photon(indx(11),-p1-p2),phi2(indx(9),k2))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(6),k1),photon(indx(12),p1+p2),phi2(indx(-5),p3));




* Diagram number 99 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag99= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),k2-p3-p4)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-p3-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(5),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(10),-k2),photon(indx(2),p3+p4),phi1(indx(7),k2-p3-p4))*
 vrtx(phi1c(indx(8),-k2+p3+p4),photon(indx(11),-p3-p4),phi1(indx(9),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1),photon(indx(12),p3+p4),phi1(indx(3),-k1+p1));




* Diagram number 100 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag100= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),k2-p3-p4)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-p3-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(5),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(10),-k2),photon(indx(2),p3+p4),phi2(indx(7),k2-p3-p4))*
 vrtx(phi2c(indx(8),-k2+p3+p4),photon(indx(11),-p3-p4),phi2(indx(9),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1),photon(indx(12),p3+p4),phi1(indx(3),-k1+p1));




* Diagram number 101 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag101= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),k2-p3-p4)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-p3-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi1c(indx(10),-k2),photon(indx(2),p3+p4),phi1(indx(7),k2-p3-p4))*
 vrtx(phi1c(indx(8),-k2+p3+p4),photon(indx(11),-p3-p4),phi1(indx(9),k2))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(6),k1),photon(indx(12),p3+p4),phi1(indx(-1),p1));




* Diagram number 102 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag102= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),k2-p3-p4)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),-p3-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(10),-k2),photon(indx(2),p3+p4),phi2(indx(7),k2-p3-p4))*
 vrtx(phi2c(indx(8),-k2+p3+p4),photon(indx(11),-p3-p4),phi2(indx(9),k2))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(6),k1),photon(indx(12),p3+p4),phi1(indx(-1),p1));




* Diagram number 103 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag103= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(phi2,indx(9),indx(10),-k2+p1+p2)*
 prop(photon,indx(11),indx(12),-k1-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(10),k2-p1-p2),photon(indx(2),p1+p2),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(11),-k1-k2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),-k1+p3),photon(indx(12),k1+k2),phi2(indx(9),-k2+p1+p2));




* Diagram number 104 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag104= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(phi2,indx(9),indx(10),k2-p1-p2)*
 prop(photon,indx(11),indx(12),-k1-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),k1-p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(8),-k2),photon(indx(2),p1+p2),phi2(indx(9),k2-p1-p2))*
 vrtx(phi2c(indx(4),k1),photon(indx(11),-k1-k2),phi2(indx(7),k2))*
 vrtx(phi2c(indx(10),-k2+p1+p2),photon(indx(6),-k1+p4),photon(indx(12),k1+k2),phi2(indx(-5),p3));




* Diagram number 105 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag105= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(phi1,indx(9),indx(10),-k2+p3+p4)*
 prop(photon,indx(11),indx(12),-k1-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(10),k2-p3-p4),photon(indx(2),p3+p4),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(11),-k1-k2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),-k1+p1),photon(indx(12),k1+k2),phi1(indx(9),-k2+p3+p4));




* Diagram number 106 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag106= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(phi1,indx(9),indx(10),k2-p3-p4)*
 prop(photon,indx(11),indx(12),-k1-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),k1-p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(8),-k2),photon(indx(2),p3+p4),phi1(indx(9),k2-p3-p4))*
 vrtx(phi1c(indx(4),k1),photon(indx(11),-k1-k2),phi1(indx(7),k2))*
 vrtx(phi1c(indx(10),-k2+p3+p4),photon(indx(6),-k1+p2),photon(indx(12),k1+k2),phi1(indx(-1),p1));




* Diagram number 107 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag107= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(phi2,indx(7),indx(8),k1+p1+p2)*
 prop(phi2,indx(9),indx(10),k1-k2+p1+p2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(10),-k1+k2-p1-p2),photon(indx(11),-k2),phi2(indx(7),k1+p1+p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),-k1+p3),photon(indx(12),k2),phi2(indx(9),k1-k2+p1+p2));




* Diagram number 108 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag108= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),-k1-p1-p2)*
 prop(phi2,indx(9),indx(10),-k1+k2-p1-p2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),k1-p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(2),p1+p2),phi2(indx(7),-k1-p1-p2))*
 vrtx(phi2c(indx(8),k1+p1+p2),photon(indx(11),-k2),phi2(indx(9),-k1+k2-p1-p2))*
 vrtx(phi2c(indx(10),k1-k2+p1+p2),photon(indx(6),-k1+p4),photon(indx(12),k2),phi2(indx(-5),p3));




* Diagram number 109 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag109= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(phi1,indx(7),indx(8),k1+p3+p4)*
 prop(phi1,indx(9),indx(10),k1-k2+p3+p4)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(8),-k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(3),k1))*
 vrtx(phi1c(indx(10),-k1+k2-p3-p4),photon(indx(11),-k2),phi1(indx(7),k1+p3+p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),-k1+p1),photon(indx(12),k2),phi1(indx(9),k1-k2+p3+p4));




* Diagram number 110 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag110= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),-k1-p3-p4)*
 prop(phi1,indx(9),indx(10),-k1+k2-p3-p4)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),k1-p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(2),p3+p4),phi1(indx(7),-k1-p3-p4))*
 vrtx(phi1c(indx(8),k1+p3+p4),photon(indx(11),-k2),phi1(indx(9),-k1+k2-p3-p4))*
 vrtx(phi1c(indx(10),k1-k2+p3+p4),photon(indx(6),-k1+p2),photon(indx(12),k2),phi1(indx(-1),p1));




* Diagram number 111 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag111= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(phi1,indx(5),indx(6),-k2)*
 prop(photon,indx(7),indx(8),k2-p2)*
 prop(photon,indx(9),indx(10),k1+k2)*
 prop(phi2,indx(11),indx(12),k1+k2+p3)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k2-p2),phi1(indx(5),-k2))*
 vrtx(phi2c(indx(12),-k1-k2-p3),photon(indx(9),k1+k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k2),photon(indx(10),-k1-k2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1),photon(indx(8),-k2+p2),phi2(indx(11),k1+k2+p3));




* Diagram number 112 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag112= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(phi1,indx(5),indx(6),-k2)*
 prop(photon,indx(7),indx(8),k2-p2)*
 prop(photon,indx(9),indx(10),k1+k2)*
 prop(phi2,indx(11),indx(12),-k1-k2-p4)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k2-p2),phi1(indx(5),-k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),k1+k2),phi2(indx(11),-k1-k2-p4))*
 vrtx(phi1c(indx(6),k2),photon(indx(10),-k1-k2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(12),k1+k2+p4),photon(indx(4),-k1+p1),photon(indx(8),-k2+p2),phi2(indx(-5),p3));




* Diagram number 113 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag113= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k2)*
 prop(photon,indx(7),indx(8),k2-p3)*
 prop(phi2,indx(9),indx(10),k1+k2)*
 prop(photon,indx(11),indx(12),-k1-k2-p4)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k2),photon(indx(7),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),-k1-k2-p4),phi2(indx(9),k1+k2))*
 vrtx(phi2c(indx(10),-k1-k2),photon(indx(2),k1),phi2(indx(5),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(8),-k2+p3),photon(indx(12),k1+k2+p4),phi1(indx(3),-k1+p1));




* Diagram number 114 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag114= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),k2)*
 prop(photon,indx(7),indx(8),k2-p3)*
 prop(phi2,indx(9),indx(10),k1+k2)*
 prop(photon,indx(11),indx(12),-k1-k2-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(6),-k2),photon(indx(7),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),-k1-k2-p4),phi2(indx(9),k1+k2))*
 vrtx(phi2c(indx(10),-k1-k2),photon(indx(2),k1),phi2(indx(5),k2))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(8),-k2+p3),photon(indx(12),k1+k2+p4),phi1(indx(-1),p1));




* Diagram number 115 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag115= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p3)*
 prop(phi2,indx(11),indx(12),-k1+k2+p1)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(12),k1-k2-p1),photon(indx(4),-k1+p1),phi2(indx(7),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1+p2),photon(indx(10),-k2+p3),phi2(indx(11),-k1+k2+p1));




* Diagram number 116 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag116= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p4)*
 prop(phi2,indx(11),indx(12),k1-k2-p1)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),k2-p4),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(4),-k1+p1),phi2(indx(11),k1-k2-p1))*
 vrtx(phi2c(indx(12),-k1+k2+p1),photon(indx(6),k1+p2),photon(indx(10),-k2+p4),phi2(indx(-5),p3));




* Diagram number 117 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag117= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p2)*
 prop(photon,indx(11),indx(12),k1-k2-p1)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),k2-p2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(11),k1-k2-p1),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),-k2+p2),photon(indx(12),-k1+k2+p1),phi2(indx(5),k1+p3));




* Diagram number 118 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag118= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p2)*
 prop(photon,indx(11),indx(12),k1-k2-p1)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),k2-p2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(11),k1-k2-p1),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(10),-k2+p2),photon(indx(12),-k1+k2+p1),phi2(indx(-5),p3));




* Diagram number 119 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag119= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1-p1)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p3)*
 prop(phi2,indx(11),indx(12),-k1+k2+p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(12),k1-k2-p2),photon(indx(4),-k1+p2),phi2(indx(7),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1+p1),photon(indx(10),-k2+p3),phi2(indx(11),-k1+k2+p2));




* Diagram number 120 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag120= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1-p1)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p4)*
 prop(phi2,indx(11),indx(12),k1-k2-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),k2-p4),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(4),-k1+p2),phi2(indx(11),k1-k2-p2))*
 vrtx(phi2c(indx(12),-k1+k2+p2),photon(indx(6),k1+p1),photon(indx(10),-k2+p4),phi2(indx(-5),p3));




* Diagram number 121 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag121= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p1)*
 prop(photon,indx(11),indx(12),k1-k2-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),k2-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(11),k1-k2-p2),phi1(indx(7),k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(10),-k2+p1),photon(indx(12),-k1+k2+p2),phi2(indx(5),k1+p3));




* Diagram number 122 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag122= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p1)*
 prop(photon,indx(11),indx(12),k1-k2-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),k2-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(11),k1-k2-p2),phi1(indx(7),k2))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(10),-k2+p1),photon(indx(12),-k1+k2+p2),phi2(indx(-5),p3));




* Diagram number 123 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag123= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi1,indx(5),indx(6),k1+p1)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p4)*
 prop(photon,indx(11),indx(12),k1-k2-p3)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),-k1-p1),photon(indx(2),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),k2-p4),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(11),k1-k2-p3),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(10),-k2+p4),photon(indx(12),-k1+k2+p3),phi1(indx(5),k1+p1));




* Diagram number 124 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag124= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p4)*
 prop(photon,indx(11),indx(12),k1-k2-p3)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),k2-p4),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(11),k1-k2-p3),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(10),-k2+p4),photon(indx(12),-k1+k2+p3),phi1(indx(-1),p1));




* Diagram number 125 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag125= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p1)*
 prop(phi1,indx(11),indx(12),-k1+k2+p3)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1-p4),phi2(indx(1),k1))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),k2-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(12),k1-k2-p3),photon(indx(4),-k1+p3),phi1(indx(7),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1+p4),photon(indx(10),-k2+p1),phi1(indx(11),-k1+k2+p3));




* Diagram number 126 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag126= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p2)*
 prop(phi1,indx(11),indx(12),k1-k2-p3)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1-p4),phi2(indx(1),k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),k2-p2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(4),-k1+p3),phi1(indx(11),k1-k2-p3))*
 vrtx(phi1c(indx(12),-k1+k2+p3),photon(indx(6),k1+p4),photon(indx(10),-k2+p2),phi1(indx(-1),p1));




* Diagram number 127 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag127= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi1,indx(5),indx(6),k1+p1)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p3)*
 prop(photon,indx(11),indx(12),k1-k2-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(6),-k1-p1),photon(indx(2),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(11),k1-k2-p4),phi2(indx(7),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(10),-k2+p3),photon(indx(12),-k1+k2+p4),phi1(indx(5),k1+p1));




* Diagram number 128 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag128= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p3)*
 prop(photon,indx(11),indx(12),k1-k2-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(11),k1-k2-p4),phi2(indx(7),k2))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(10),-k2+p3),photon(indx(12),-k1+k2+p4),phi1(indx(-1),p1));




* Diagram number 129 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag129= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p4)*
 prop(photon,indx(5),indx(6),-k1-p3)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p1)*
 prop(phi1,indx(11),indx(12),-k1+k2+p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),k1-p4),phi2(indx(1),-k1))*
 vrtx(phi2c(indx(2),k1),photon(indx(5),-k1-p3),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),k2-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(12),k1-k2-p4),photon(indx(4),-k1+p4),phi1(indx(7),k2))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1+p3),photon(indx(10),-k2+p1),phi1(indx(11),-k1+k2+p4));




* Diagram number 130 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag130= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p4)*
 prop(photon,indx(5),indx(6),-k1-p3)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p2)*
 prop(phi1,indx(11),indx(12),k1-k2-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),k1-p4),phi2(indx(1),-k1))*
 vrtx(phi2c(indx(2),k1),photon(indx(5),-k1-p3),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),k2-p2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(4),-k1+p4),phi1(indx(11),k1-k2-p4))*
 vrtx(phi1c(indx(12),-k1+k2+p4),photon(indx(6),k1+p3),photon(indx(10),-k2+p2),phi1(indx(-1),p1));




* Diagram number 131 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag131= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),-k2+p3)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(photon,indx(11),indx(12),-p1-p2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(8),k2-p3),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(11),-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(12),p1+p2),photon(indx(10),k2),phi2(indx(7),-k2+p3));




* Diagram number 132 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag132= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k2-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(photon,indx(11),indx(12),-p1-p2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k2),phi2(indx(7),k2-p4))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(11),-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(8),-k2+p4),photon(indx(12),p1+p2),photon(indx(10),k2),phi2(indx(-5),p3));




* Diagram number 133 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag133= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),-k2+p1)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(photon,indx(11),indx(12),-p3-p4)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(8),k2-p1),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(11),-p3-p4),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(12),p3+p4),photon(indx(10),k2),phi1(indx(7),-k2+p1));




* Diagram number 134 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag134= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),k2-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(photon,indx(11),indx(12),-p3-p4)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k2),phi1(indx(7),k2-p2))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(11),-p3-p4),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(8),-k2+p2),photon(indx(12),p3+p4),photon(indx(10),k2),phi1(indx(-1),p1));




* Diagram number 135 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag135= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(phi2,indx(9),indx(10),k1-k2+p3)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k1-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(10),-k1+k2-p3),photon(indx(11),-k2),phi2(indx(5),k1+p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),-k1+p1+p2),photon(indx(12),k2),phi2(indx(9),k1-k2+p3));




* Diagram number 136 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag136= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(phi2,indx(9),indx(10),-k1+k2-p4)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k1-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(11),-k2),phi2(indx(9),-k1+k2-p4))*
 vrtx(phi2c(indx(10),k1-k2+p4),photon(indx(8),-k1+p1+p2),photon(indx(12),k2),phi2(indx(-5),p3));




* Diagram number 137 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag137= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(phi2,indx(9),indx(10),k1-k2+p3)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(7),k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(10),-k1+k2-p3),photon(indx(11),-k2),phi2(indx(5),k1+p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),-k1+p1+p2),photon(indx(12),k2),phi2(indx(9),k1-k2+p3));




* Diagram number 138 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag138= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(phi2,indx(9),indx(10),-k1+k2-p4)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(7),k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(11),-k2),phi2(indx(9),-k1+k2-p4))*
 vrtx(phi2c(indx(10),k1-k2+p4),photon(indx(8),-k1+p1+p2),photon(indx(12),k2),phi2(indx(-5),p3));




* Diagram number 139 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag139= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi1,indx(5),indx(6),k1+p1)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),k1-k2+p1)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),-k1-p1),photon(indx(2),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k1-p3-p4),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(10),-k1+k2-p1),photon(indx(11),-k2),phi1(indx(5),k1+p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(8),-k1+p3+p4),photon(indx(12),k2),phi1(indx(9),k1-k2+p1));




* Diagram number 140 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag140= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),-k1+k2-p2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k1-p3-p4),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(11),-k2),phi1(indx(9),-k1+k2-p2))*
 vrtx(phi1c(indx(10),k1-k2+p2),photon(indx(8),-k1+p3+p4),photon(indx(12),k2),phi1(indx(-1),p1));




* Diagram number 141 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag141= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi1,indx(5),indx(6),k1+p1)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),k1-k2+p1)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(6),-k1-p1),photon(indx(2),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(7),k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(10),-k1+k2-p1),photon(indx(11),-k2),phi1(indx(5),k1+p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(8),-k1+p3+p4),photon(indx(12),k2),phi1(indx(9),k1-k2+p1));




* Diagram number 142 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag142= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),-k1+k2-p2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(7),k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(11),-k2),phi1(indx(9),-k1+k2-p2))*
 vrtx(phi1c(indx(10),k1-k2+p2),photon(indx(8),-k1+p3+p4),photon(indx(12),k2),phi1(indx(-1),p1));




* Diagram number 143 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag143= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi1,indx(5),indx(6),k1)*
 prop(phi1,indx(7),indx(8),k1-p1-p2)*
 prop(phi1,indx(9),indx(10),k1-k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),-k1),photon(indx(2),p1+p2),phi1(indx(7),k1-p1-p2))*
 vrtx(phi1c(indx(10),-k1+k2),photon(indx(11),-k2),phi1(indx(5),k1))*
 vrtx(phi1c(indx(8),-k1+p1+p2),photon(indx(4),p3+p4),photon(indx(12),k2),phi1(indx(9),k1-k2));




* Diagram number 144 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag144= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi1,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),-k1+p1+p2)*
 prop(phi1,indx(9),indx(10),-k1+k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),k1-p1-p2),photon(indx(2),p1+p2),phi1(indx(5),-k1))*
 vrtx(phi1c(indx(6),k1),photon(indx(11),-k2),phi1(indx(9),-k1+k2))*
 vrtx(phi1c(indx(10),k1-k2),photon(indx(4),p3+p4),photon(indx(12),k2),phi1(indx(7),-k1+p1+p2));




* Diagram number 145 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag145= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi2,indx(5),indx(6),k1)*
 prop(phi2,indx(7),indx(8),k1-p1-p2)*
 prop(phi2,indx(9),indx(10),k1-k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),-k1),photon(indx(2),p1+p2),phi2(indx(7),k1-p1-p2))*
 vrtx(phi2c(indx(10),-k1+k2),photon(indx(11),-k2),phi2(indx(5),k1))*
 vrtx(phi2c(indx(8),-k1+p1+p2),photon(indx(4),p3+p4),photon(indx(12),k2),phi2(indx(9),k1-k2));




* Diagram number 146 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag146= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi2,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),-k1+p1+p2)*
 prop(phi2,indx(9),indx(10),-k1+k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(5),-k1))*
 vrtx(phi2c(indx(6),k1),photon(indx(11),-k2),phi2(indx(9),-k1+k2))*
 vrtx(phi2c(indx(10),k1-k2),photon(indx(4),p3+p4),photon(indx(12),k2),phi2(indx(7),-k1+p1+p2));




* Diagram number 147 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag147= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-p1-p2)*
 prop(phi1,indx(5),indx(6),k1)*
 prop(phi1,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),k1-k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),-k1),photon(indx(2),p3+p4),phi1(indx(7),k1-p3-p4))*
 vrtx(phi1c(indx(10),-k1+k2),photon(indx(11),-k2),phi1(indx(5),k1))*
 vrtx(phi1c(indx(8),-k1+p3+p4),photon(indx(4),p1+p2),photon(indx(12),k2),phi1(indx(9),k1-k2));




* Diagram number 148 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag148= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-p1-p2)*
 prop(phi1,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),-k1+p3+p4)*
 prop(phi1,indx(9),indx(10),-k1+k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(8),k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(5),-k1))*
 vrtx(phi1c(indx(6),k1),photon(indx(11),-k2),phi1(indx(9),-k1+k2))*
 vrtx(phi1c(indx(10),k1-k2),photon(indx(4),p1+p2),photon(indx(12),k2),phi1(indx(7),-k1+p3+p4));




* Diagram number 149 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag149= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-p1-p2)*
 prop(phi2,indx(5),indx(6),k1)*
 prop(phi2,indx(7),indx(8),k1-p3-p4)*
 prop(phi2,indx(9),indx(10),k1-k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1),photon(indx(2),p3+p4),phi2(indx(7),k1-p3-p4))*
 vrtx(phi2c(indx(10),-k1+k2),photon(indx(11),-k2),phi2(indx(5),k1))*
 vrtx(phi2c(indx(8),-k1+p3+p4),photon(indx(4),p1+p2),photon(indx(12),k2),phi2(indx(9),k1-k2));




* Diagram number 150 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag150= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-p1-p2)*
 prop(phi2,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),-k1+p3+p4)*
 prop(phi2,indx(9),indx(10),-k1+k2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),k1-p3-p4),photon(indx(2),p3+p4),phi2(indx(5),-k1))*
 vrtx(phi2c(indx(6),k1),photon(indx(11),-k2),phi2(indx(9),-k1+k2))*
 vrtx(phi2c(indx(10),k1-k2),photon(indx(4),p1+p2),photon(indx(12),k2),phi2(indx(7),-k1+p3+p4));




* Diagram number 151 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag151= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p4)*
 prop(phi2,indx(11),indx(12),-k1-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),k2-p4),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(4),k1),phi2(indx(11),-k1-k2))*
 vrtx(phi2c(indx(12),k1+k2),photon(indx(2),p1+p2),photon(indx(10),-k2+p4),phi2(indx(5),-k1+p3));




* Diagram number 152 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag152= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi2,indx(9),indx(10),k2-p4)*
 prop(phi2,indx(11),indx(12),k1+k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k2),phi2(indx(9),k2-p4))*
 vrtx(phi2c(indx(12),-k1-k2),photon(indx(8),k2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(10),-k2+p4),photon(indx(2),p1+p2),photon(indx(6),-k1+p3),phi2(indx(11),k1+k2));




* Diagram number 153 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag153= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p2)*
 prop(phi1,indx(11),indx(12),-k1-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),k2-p2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(8),k2),photon(indx(4),k1),phi1(indx(11),-k1-k2))*
 vrtx(phi1c(indx(12),k1+k2),photon(indx(2),p3+p4),photon(indx(10),-k2+p2),phi1(indx(5),-k1+p1));




* Diagram number 154 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag154= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi1,indx(9),indx(10),k2-p2)*
 prop(phi1,indx(11),indx(12),k1+k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k2),phi1(indx(9),k2-p2))*
 vrtx(phi1c(indx(12),-k1-k2),photon(indx(8),k2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(10),-k2+p2),photon(indx(2),p3+p4),photon(indx(6),-k1+p1),phi1(indx(11),k1+k2));




* Diagram number 155 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag155= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi1,indx(9),indx(10),-k1-k2+p3)*
 prop(phi1,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(3),k1))*
 vrtx(phi1c(indx(10),k1+k2-p3),photon(indx(6),-k1+p3),phi1(indx(11),-k2))*
 vrtx(phi1c(indx(12),k2),photon(indx(2),p1+p2),photon(indx(8),k1+p4),phi1(indx(9),-k1-k2+p3));




* Diagram number 156 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag156= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),-k1-k2+p3)*
 prop(phi2,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(3),k1))*
 vrtx(phi2c(indx(10),k1+k2-p3),photon(indx(6),-k1+p3),phi2(indx(11),-k2))*
 vrtx(phi2c(indx(12),k2),photon(indx(2),p1+p2),photon(indx(8),k1+p4),phi2(indx(9),-k1-k2+p3));




* Diagram number 157 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag157= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi2,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),-k1-k2+p3)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),k1),phi2(indx(7),-k1-p4))*
 vrtx(phi2c(indx(10),k1+k2-p3),photon(indx(11),-k2),phi2(indx(5),-k1+p3))*
 vrtx(phi2c(indx(8),k1+p4),photon(indx(2),p1+p2),photon(indx(12),k2),phi2(indx(9),-k1-k2+p3));




* Diagram number 158 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag158= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p4)*
 prop(photon,indx(7),indx(8),-k1-p3)*
 prop(phi1,indx(9),indx(10),-k1-k2+p4)*
 prop(phi1,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),k1-p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(7),-k1-p3),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(10),k1+k2-p4),photon(indx(6),-k1+p4),phi1(indx(11),-k2))*
 vrtx(phi1c(indx(12),k2),photon(indx(2),p1+p2),photon(indx(8),k1+p3),phi1(indx(9),-k1-k2+p4));




* Diagram number 159 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag159= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p4)*
 prop(photon,indx(7),indx(8),-k1-p3)*
 prop(phi2,indx(9),indx(10),-k1-k2+p4)*
 prop(phi2,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),k1-p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(4),k1),photon(indx(7),-k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(10),k1+k2-p4),photon(indx(6),-k1+p4),phi2(indx(11),-k2))*
 vrtx(phi2c(indx(12),k2),photon(indx(2),p1+p2),photon(indx(8),k1+p3),phi2(indx(9),-k1-k2+p4));




* Diagram number 160 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag160= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),k1+p3)*
 prop(phi2,indx(9),indx(10),k1+k2-p4)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-k1),phi2(indx(5),k1-p4))*
 vrtx(phi2c(indx(8),-k1-p3),photon(indx(4),k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),-k1+p4),photon(indx(11),-k2),phi2(indx(9),k1+k2-p4))*
 vrtx(phi2c(indx(10),-k1-k2+p4),photon(indx(2),p1+p2),photon(indx(12),k2),phi2(indx(7),k1+p3));




* Diagram number 161 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag161= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),-k1-k2+p1)*
 prop(phi1,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(10),k1+k2-p1),photon(indx(6),-k1+p1),phi1(indx(11),-k2))*
 vrtx(phi1c(indx(12),k2),photon(indx(2),p3+p4),photon(indx(8),k1+p2),phi1(indx(9),-k1-k2+p1));




* Diagram number 162 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag162= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi2,indx(9),indx(10),-k1-k2+p1)*
 prop(phi2,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(3),k1))*
 vrtx(phi2c(indx(10),k1+k2-p1),photon(indx(6),-k1+p1),phi2(indx(11),-k2))*
 vrtx(phi2c(indx(12),k2),photon(indx(2),p3+p4),photon(indx(8),k1+p2),phi2(indx(9),-k1-k2+p1));




* Diagram number 163 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag163= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),-k1-k2+p1)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),k1),phi1(indx(7),-k1-p2))*
 vrtx(phi1c(indx(10),k1+k2-p1),photon(indx(11),-k2),phi1(indx(5),-k1+p1))*
 vrtx(phi1c(indx(8),k1+p2),photon(indx(2),p3+p4),photon(indx(12),k2),phi1(indx(9),-k1-k2+p1));




* Diagram number 164 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag164= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p2)*
 prop(photon,indx(7),indx(8),-k1-p1)*
 prop(phi1,indx(9),indx(10),-k1-k2+p2)*
 prop(phi1,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),k1-p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(7),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(10),k1+k2-p2),photon(indx(6),-k1+p2),phi1(indx(11),-k2))*
 vrtx(phi1c(indx(12),k2),photon(indx(2),p3+p4),photon(indx(8),k1+p1),phi1(indx(9),-k1-k2+p2));




* Diagram number 165 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag165= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p2)*
 prop(photon,indx(7),indx(8),-k1-p1)*
 prop(phi2,indx(9),indx(10),-k1-k2+p2)*
 prop(phi2,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),k1-p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(4),k1),photon(indx(7),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(10),k1+k2-p2),photon(indx(6),-k1+p2),phi2(indx(11),-k2))*
 vrtx(phi2c(indx(12),k2),photon(indx(2),p3+p4),photon(indx(8),k1+p1),phi2(indx(9),-k1-k2+p2));




* Diagram number 166 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag166= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),k1+p1)*
 prop(phi1,indx(9),indx(10),k1+k2-p2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-k1),phi1(indx(5),k1-p2))*
 vrtx(phi1c(indx(8),-k1-p1),photon(indx(4),k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),-k1+p2),photon(indx(11),-k2),phi1(indx(9),k1+k2-p2))*
 vrtx(phi1c(indx(10),-k1-k2+p2),photon(indx(2),p3+p4),photon(indx(12),k2),phi1(indx(7),k1+p1));




* Diagram number 167 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag167= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(phi2,indx(7),indx(8),k2-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi2,indx(11),indx(12),k1+p1+p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k2),phi2(indx(7),k2-p4))*
 vrtx(phi2c(indx(12),-k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(8),-k2+p4),photon(indx(6),-k1+p3),photon(indx(10),k2),phi2(indx(11),k1+p1+p2));




* Diagram number 168 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag168= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),-k2+p3)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi2,indx(11),indx(12),-k1-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),k1-p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(8),k2-p3),photon(indx(9),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(4),k1),photon(indx(2),p1+p2),phi2(indx(11),-k1-p1-p2))*
 vrtx(phi2c(indx(12),k1+p1+p2),photon(indx(6),-k1+p4),photon(indx(10),k2),phi2(indx(7),-k2+p3));




* Diagram number 169 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag169= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(phi1,indx(7),indx(8),k2-p2)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),k1+p3+p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k2),phi1(indx(7),k2-p2))*
 vrtx(phi1c(indx(12),-k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(3),k1))*
 vrtx(phi1c(indx(8),-k2+p2),photon(indx(6),-k1+p1),photon(indx(10),k2),phi1(indx(11),k1+p3+p4));




* Diagram number 170 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag170= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),-k2+p1)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),-k1-p3-p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),k1-p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(8),k2-p1),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(4),k1),photon(indx(2),p3+p4),phi1(indx(11),-k1-p3-p4))*
 vrtx(phi1c(indx(12),k1+p3+p4),photon(indx(6),-k1+p2),photon(indx(10),k2),phi1(indx(7),-k2+p1));




* Diagram number 171 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag171= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi1,indx(9),indx(10),-k2+p1+p2)*
 prop(phi1,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(3),k1))*
 vrtx(phi1c(indx(10),k2-p1-p2),photon(indx(2),p1+p2),phi1(indx(11),-k2))*
 vrtx(phi1c(indx(12),k2),photon(indx(6),-k1+p3),photon(indx(8),k1+p4),phi1(indx(9),-k2+p1+p2));




* Diagram number 172 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag172= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),-k2+p1+p2)*
 prop(phi2,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(3),k1))*
 vrtx(phi2c(indx(10),k2-p1-p2),photon(indx(2),p1+p2),phi2(indx(11),-k2))*
 vrtx(phi2c(indx(12),k2),photon(indx(6),-k1+p3),photon(indx(8),k1+p4),phi2(indx(9),-k2+p1+p2));




* Diagram number 173 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag173= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),-k2+p3+p4)*
 prop(phi1,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(10),k2-p3-p4),photon(indx(2),p3+p4),phi1(indx(11),-k2))*
 vrtx(phi1c(indx(12),k2),photon(indx(6),-k1+p1),photon(indx(8),k1+p2),phi1(indx(9),-k2+p3+p4));




* Diagram number 174 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag174= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi2,indx(9),indx(10),-k2+p3+p4)*
 prop(phi2,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(3),k1))*
 vrtx(phi2c(indx(10),k2-p3-p4),photon(indx(2),p3+p4),phi2(indx(11),-k2))*
 vrtx(phi2c(indx(12),k2),photon(indx(6),-k1+p1),photon(indx(8),k1+p2),phi2(indx(9),-k2+p3+p4));




* Diagram number 175 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag175= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi2,indx(9),indx(10),-k2+p3)*
 prop(phi2,indx(11),indx(12),-k2-p4)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(10),k2-p3),photon(indx(7),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),k2),phi2(indx(11),-k2-p4))*
 vrtx(phi2c(indx(12),k2+p4),photon(indx(4),-k1+p1),photon(indx(6),k1+p2),phi2(indx(9),-k2+p3));




* Diagram number 176 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag176= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p3)*
 prop(photon,indx(11),indx(12),-k2-p4)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),-k2-p4),phi2(indx(7),k2))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(10),-k2+p3),photon(indx(12),k2+p4),phi1(indx(3),-k1+p1));




* Diagram number 177 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag177= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),-k1+p1+p3)*
 prop(phi2,indx(9),indx(10),k2-p4)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(8),k1-p1-p3),photon(indx(4),-k1+p1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),-k2),phi2(indx(9),k2-p4))*
 vrtx(phi2c(indx(10),-k2+p4),photon(indx(6),k1+p2),photon(indx(12),k2),phi2(indx(7),-k1+p1+p3));




* Diagram number 178 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag178= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k1-p1-p4)*
 prop(phi2,indx(9),indx(10),-k2+p3)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1),phi2(indx(7),k1-p1-p4))*
 vrtx(phi2c(indx(10),k2-p3),photon(indx(11),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1+p1+p4),photon(indx(6),k1+p2),photon(indx(12),k2),phi2(indx(9),-k2+p3));




* Diagram number 179 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag179= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1-p1)*
 prop(phi2,indx(7),indx(8),-k1+p2+p3)*
 prop(phi2,indx(9),indx(10),k2-p4)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),k1-p2-p3),photon(indx(4),-k1+p2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),-k2),phi2(indx(9),k2-p4))*
 vrtx(phi2c(indx(10),-k2+p4),photon(indx(6),k1+p1),photon(indx(12),k2),phi2(indx(7),-k1+p2+p3));




* Diagram number 180 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag180= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1-p1)*
 prop(phi2,indx(7),indx(8),k1-p2-p4)*
 prop(phi2,indx(9),indx(10),-k2+p3)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p2),phi2(indx(7),k1-p2-p4))*
 vrtx(phi2c(indx(10),k2-p3),photon(indx(11),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1+p2+p4),photon(indx(6),k1+p1),photon(indx(12),k2),phi2(indx(9),-k2+p3));




* Diagram number 181 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag181= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi1,indx(5),indx(6),k1+p1)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),k2-p2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),-k1-p1),photon(indx(2),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k1-p3-p4),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(11),-k2),phi1(indx(9),k2-p2))*
 vrtx(phi1c(indx(10),-k2+p2),photon(indx(8),-k1+p3+p4),photon(indx(12),k2),phi1(indx(5),k1+p1));




* Diagram number 182 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag182= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),-k2+p1)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k1-p3-p4),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(10),k2-p1),photon(indx(11),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(8),-k1+p3+p4),photon(indx(12),k2),phi1(indx(9),-k2+p1));




* Diagram number 183 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag183= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi1,indx(5),indx(6),k1+p1)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),k2-p2)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(6),-k1-p1),photon(indx(2),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(7),k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(11),-k2),phi1(indx(9),k2-p2))*
 vrtx(phi1c(indx(10),-k2+p2),photon(indx(8),-k1+p3+p4),photon(indx(12),k2),phi1(indx(5),k1+p1));




* Diagram number 184 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 6 internal lines:

Id diag184= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(phi1,indx(9),indx(10),-k2+p1)*
 prop(photon,indx(11),indx(12),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(7),k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(10),k2-p1),photon(indx(11),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(8),-k1+p3+p4),photon(indx(12),k2),phi1(indx(9),-k2+p1));




* Diagram number 185 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag185= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi1,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),-k1+p1+p2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(phi1,indx(11),indx(12),k2-p3-p4)*
 prop(photon,indx(13),indx(14),-k1-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),k1-p1-p2),photon(indx(2),p1+p2),phi1(indx(5),-k1))*
 vrtx(phi1c(indx(10),-k2),photon(indx(4),p3+p4),phi1(indx(11),k2-p3-p4))*
 vrtx(phi1c(indx(6),k1),photon(indx(13),-k1-k2),phi1(indx(9),k2))*
 vrtx(phi1c(indx(12),-k2+p3+p4),photon(indx(14),k1+k2),phi1(indx(7),-k1+p1+p2));




* Diagram number 186 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag186= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi2,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),-k1+p1+p2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(phi2,indx(11),indx(12),k2-p3-p4)*
 prop(photon,indx(13),indx(14),-k1-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(5),-k1))*
 vrtx(phi2c(indx(10),-k2),photon(indx(4),p3+p4),phi2(indx(11),k2-p3-p4))*
 vrtx(phi2c(indx(6),k1),photon(indx(13),-k1-k2),phi2(indx(9),k2))*
 vrtx(phi2c(indx(12),-k2+p3+p4),photon(indx(14),k1+k2),phi2(indx(7),-k1+p1+p2));




* Diagram number 187 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag187= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi1,indx(5),indx(6),k1-p1-p2)*
 prop(phi1,indx(7),indx(8),k1)*
 prop(phi1,indx(9),indx(10),k2-p3-p4)*
 prop(phi1,indx(11),indx(12),k2)*
 prop(photon,indx(13),indx(14),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),-k1),photon(indx(2),p1+p2),phi1(indx(5),k1-p1-p2))*
 vrtx(phi1c(indx(12),-k2),photon(indx(4),p3+p4),phi1(indx(9),k2-p3-p4))*
 vrtx(phi1c(indx(6),-k1+p1+p2),photon(indx(13),-p1-p2),phi1(indx(7),k1))*
 vrtx(phi1c(indx(10),-k2+p3+p4),photon(indx(14),p1+p2),phi1(indx(11),k2));




* Diagram number 188 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag188= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi1,indx(5),indx(6),k1-p1-p2)*
 prop(phi1,indx(7),indx(8),k1)*
 prop(phi2,indx(9),indx(10),k2-p3-p4)*
 prop(phi2,indx(11),indx(12),k2)*
 prop(photon,indx(13),indx(14),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),-k1),photon(indx(2),p1+p2),phi1(indx(5),k1-p1-p2))*
 vrtx(phi2c(indx(12),-k2),photon(indx(4),p3+p4),phi2(indx(9),k2-p3-p4))*
 vrtx(phi1c(indx(6),-k1+p1+p2),photon(indx(13),-p1-p2),phi1(indx(7),k1))*
 vrtx(phi2c(indx(10),-k2+p3+p4),photon(indx(14),p1+p2),phi2(indx(11),k2));




* Diagram number 189 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag189= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi2,indx(5),indx(6),k1-p1-p2)*
 prop(phi2,indx(7),indx(8),k1)*
 prop(phi1,indx(9),indx(10),k2-p3-p4)*
 prop(phi1,indx(11),indx(12),k2)*
 prop(photon,indx(13),indx(14),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1),photon(indx(2),p1+p2),phi2(indx(5),k1-p1-p2))*
 vrtx(phi1c(indx(12),-k2),photon(indx(4),p3+p4),phi1(indx(9),k2-p3-p4))*
 vrtx(phi2c(indx(6),-k1+p1+p2),photon(indx(13),-p1-p2),phi2(indx(7),k1))*
 vrtx(phi1c(indx(10),-k2+p3+p4),photon(indx(14),p1+p2),phi1(indx(11),k2));




* Diagram number 190 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag190= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi2,indx(5),indx(6),k1-p1-p2)*
 prop(phi2,indx(7),indx(8),k1)*
 prop(phi2,indx(9),indx(10),k2-p3-p4)*
 prop(phi2,indx(11),indx(12),k2)*
 prop(photon,indx(13),indx(14),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1),photon(indx(2),p1+p2),phi2(indx(5),k1-p1-p2))*
 vrtx(phi2c(indx(12),-k2),photon(indx(4),p3+p4),phi2(indx(9),k2-p3-p4))*
 vrtx(phi2c(indx(6),-k1+p1+p2),photon(indx(13),-p1-p2),phi2(indx(7),k1))*
 vrtx(phi2c(indx(10),-k2+p3+p4),photon(indx(14),p1+p2),phi2(indx(11),k2));




* Diagram number 191 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag191= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi1,indx(5),indx(6),-k1)*
 prop(phi1,indx(7),indx(8),-k1+p1+p2)*
 prop(phi1,indx(9),indx(10),-k1-p3-p4)*
 prop(phi1,indx(11),indx(12),-k1-k2+p1+p2)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),k1-p1-p2),photon(indx(2),p1+p2),phi1(indx(5),-k1))*
 vrtx(phi1c(indx(6),k1),photon(indx(4),p3+p4),phi1(indx(9),-k1-p3-p4))*
 vrtx(phi1c(indx(12),k1+k2-p1-p2),photon(indx(13),-k2),phi1(indx(7),-k1+p1+p2))*
 vrtx(phi1c(indx(10),k1+p3+p4),photon(indx(14),k2),phi1(indx(11),-k1-k2+p1+p2));




* Diagram number 192 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag192= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi1,indx(5),indx(6),k1)*
 prop(phi1,indx(7),indx(8),k1-p1-p2)*
 prop(phi1,indx(9),indx(10),k1+p3+p4)*
 prop(phi1,indx(11),indx(12),k1+k2-p1-p2)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),-k1),photon(indx(2),p1+p2),phi1(indx(7),k1-p1-p2))*
 vrtx(phi1c(indx(10),-k1-p3-p4),photon(indx(4),p3+p4),phi1(indx(5),k1))*
 vrtx(phi1c(indx(8),-k1+p1+p2),photon(indx(13),-k2),phi1(indx(11),k1+k2-p1-p2))*
 vrtx(phi1c(indx(12),-k1-k2+p1+p2),photon(indx(14),k2),phi1(indx(9),k1+p3+p4));




* Diagram number 193 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag193= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi2,indx(5),indx(6),-k1)*
 prop(phi2,indx(7),indx(8),-k1+p1+p2)*
 prop(phi2,indx(9),indx(10),-k1-p3-p4)*
 prop(phi2,indx(11),indx(12),-k1-k2+p1+p2)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(5),-k1))*
 vrtx(phi2c(indx(6),k1),photon(indx(4),p3+p4),phi2(indx(9),-k1-p3-p4))*
 vrtx(phi2c(indx(12),k1+k2-p1-p2),photon(indx(13),-k2),phi2(indx(7),-k1+p1+p2))*
 vrtx(phi2c(indx(10),k1+p3+p4),photon(indx(14),k2),phi2(indx(11),-k1-k2+p1+p2));




* Diagram number 194 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag194= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-p3-p4)*
 prop(phi2,indx(5),indx(6),k1)*
 prop(phi2,indx(7),indx(8),k1-p1-p2)*
 prop(phi2,indx(9),indx(10),k1+p3+p4)*
 prop(phi2,indx(11),indx(12),k1+k2-p1-p2)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),-k1),photon(indx(2),p1+p2),phi2(indx(7),k1-p1-p2))*
 vrtx(phi2c(indx(10),-k1-p3-p4),photon(indx(4),p3+p4),phi2(indx(5),k1))*
 vrtx(phi2c(indx(8),-k1+p1+p2),photon(indx(13),-k2),phi2(indx(11),k1+k2-p1-p2))*
 vrtx(phi2c(indx(12),-k1-k2+p1+p2),photon(indx(14),k2),phi2(indx(9),k1+p3+p4));




* Diagram number 195 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag195= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi2,indx(9),indx(10),k2-p4)*
 prop(phi2,indx(11),indx(12),k1+k2)*
 prop(phi2,indx(13),indx(14),k1+k2+p1+p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k2),phi2(indx(9),k2-p4))*
 vrtx(phi2c(indx(14),-k1-k2-p1-p2),photon(indx(2),p1+p2),phi2(indx(11),k1+k2))*
 vrtx(phi2c(indx(12),-k1-k2),photon(indx(8),k2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(10),-k2+p4),photon(indx(6),-k1+p3),phi2(indx(13),k1+k2+p1+p2));




* Diagram number 196 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag196= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi1,indx(9),indx(10),k2-p2)*
 prop(phi1,indx(11),indx(12),k1+k2)*
 prop(phi1,indx(13),indx(14),k1+k2+p3+p4)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k2),phi1(indx(9),k2-p2))*
 vrtx(phi1c(indx(14),-k1-k2-p3-p4),photon(indx(2),p3+p4),phi1(indx(11),k1+k2))*
 vrtx(phi1c(indx(12),-k1-k2),photon(indx(8),k2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(10),-k2+p2),photon(indx(6),-k1+p1),phi1(indx(13),k1+k2+p3+p4));




* Diagram number 197 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag197= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p4)*
 prop(phi2,indx(11),indx(12),k1+p1+p2)*
 prop(phi2,indx(13),indx(14),k1-k2-p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),k2-p4),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(12),-k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(8),k2),photon(indx(6),-k1+p3),phi2(indx(13),k1-k2-p3))*
 vrtx(phi2c(indx(14),-k1+k2+p3),photon(indx(10),-k2+p4),phi2(indx(11),k1+p1+p2));




* Diagram number 198 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag198= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p3)*
 prop(phi2,indx(11),indx(12),-k1-p1-p2)*
 prop(phi2,indx(13),indx(14),-k1+k2+p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),k1-p4),phi2(indx(3),-k1))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(4),k1),photon(indx(2),p1+p2),phi2(indx(11),-k1-p1-p2))*
 vrtx(phi2c(indx(14),k1-k2-p4),photon(indx(6),-k1+p4),phi2(indx(7),k2))*
 vrtx(phi2c(indx(12),k1+p1+p2),photon(indx(10),-k2+p3),phi2(indx(13),-k1+k2+p4));




* Diagram number 199 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag199= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p2)*
 prop(phi1,indx(11),indx(12),k1+p3+p4)*
 prop(phi1,indx(13),indx(14),k1-k2-p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),k2-p2),phi1(indx(7),-k2))*
 vrtx(phi1c(indx(12),-k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(3),k1))*
 vrtx(phi1c(indx(8),k2),photon(indx(6),-k1+p1),phi1(indx(13),k1-k2-p1))*
 vrtx(phi1c(indx(14),-k1+k2+p1),photon(indx(10),-k2+p2),phi1(indx(11),k1+p3+p4));




* Diagram number 200 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag200= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),-k1)*
 prop(photon,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p1)*
 prop(phi1,indx(11),indx(12),-k1-p3-p4)*
 prop(phi1,indx(13),indx(14),-k1+k2+p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),k1-p2),phi1(indx(3),-k1))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),k2-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(4),k1),photon(indx(2),p3+p4),phi1(indx(11),-k1-p3-p4))*
 vrtx(phi1c(indx(14),k1-k2-p2),photon(indx(6),-k1+p2),phi1(indx(7),k2))*
 vrtx(phi1c(indx(12),k1+p3+p4),photon(indx(10),-k2+p1),phi1(indx(13),-k1+k2+p2));




* Diagram number 201 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag201= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(phi2,indx(7),indx(8),k1+p1+p2)*
 prop(photon,indx(9),indx(10),-k1+p3)*
 prop(phi1,indx(11),indx(12),k1+k2-p3)*
 prop(phi1,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k1+p3),phi2(indx(7),k1+p1+p2))*
 vrtx(phi2c(indx(8),-k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(3),k1))*
 vrtx(phi1c(indx(14),-k2),photon(indx(6),-k1+p3),phi1(indx(11),k1+k2-p3))*
 vrtx(phi1c(indx(12),-k1-k2+p3),photon(indx(10),k1-p3),phi1(indx(13),k2));




* Diagram number 202 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag202= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(phi2,indx(7),indx(8),k1+p1+p2)*
 prop(photon,indx(9),indx(10),-k1+p3)*
 prop(phi2,indx(11),indx(12),k1+k2-p3)*
 prop(phi2,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k1+p3),phi2(indx(7),k1+p1+p2))*
 vrtx(phi2c(indx(8),-k1-p1-p2),photon(indx(2),p1+p2),phi2(indx(3),k1))*
 vrtx(phi2c(indx(14),-k2),photon(indx(6),-k1+p3),phi2(indx(11),k1+k2-p3))*
 vrtx(phi2c(indx(12),-k1-k2+p3),photon(indx(10),k1-p3),phi2(indx(13),k2));




* Diagram number 203 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag203= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(phi1,indx(7),indx(8),k1+p3+p4)*
 prop(photon,indx(9),indx(10),-k1+p1)*
 prop(phi1,indx(11),indx(12),k1+k2-p1)*
 prop(phi1,indx(13),indx(14),k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k1+p1),phi1(indx(7),k1+p3+p4))*
 vrtx(phi1c(indx(8),-k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(3),k1))*
 vrtx(phi1c(indx(14),-k2),photon(indx(6),-k1+p1),phi1(indx(11),k1+k2-p1))*
 vrtx(phi1c(indx(12),-k1-k2+p1),photon(indx(10),k1-p1),phi1(indx(13),k2));




* Diagram number 204 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag204= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(phi1,indx(7),indx(8),k1+p3+p4)*
 prop(photon,indx(9),indx(10),-k1+p1)*
 prop(phi2,indx(11),indx(12),k1+k2-p1)*
 prop(phi2,indx(13),indx(14),k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k1+p1),phi1(indx(7),k1+p3+p4))*
 vrtx(phi1c(indx(8),-k1-p3-p4),photon(indx(2),p3+p4),phi1(indx(3),k1))*
 vrtx(phi2c(indx(14),-k2),photon(indx(6),-k1+p1),phi2(indx(11),k1+k2-p1))*
 vrtx(phi2c(indx(12),-k1-k2+p1),photon(indx(10),k1-p1),phi2(indx(13),k2));




* Diagram number 205 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag205= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi1,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),-k2+p1+p2)*
 prop(phi1,indx(13),indx(14),k1-k2-p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(3),k1))*
 vrtx(phi1c(indx(12),k2-p1-p2),photon(indx(2),p1+p2),phi1(indx(9),-k2))*
 vrtx(phi1c(indx(10),k2),photon(indx(6),-k1+p3),phi1(indx(13),k1-k2-p3))*
 vrtx(phi1c(indx(14),-k1+k2+p3),photon(indx(8),k1+p4),phi1(indx(11),-k2+p1+p2));




* Diagram number 206 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag206= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(phi1,indx(11),indx(12),k2-p1-p2)*
 prop(phi1,indx(13),indx(14),-k1+k2+p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(3),k1))*
 vrtx(phi1c(indx(10),-k2),photon(indx(2),p1+p2),phi1(indx(11),k2-p1-p2))*
 vrtx(phi1c(indx(14),k1-k2-p3),photon(indx(6),-k1+p3),phi1(indx(9),k2))*
 vrtx(phi1c(indx(12),-k2+p1+p2),photon(indx(8),k1+p4),phi1(indx(13),-k1+k2+p3));




* Diagram number 207 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag207= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),-k2)*
 prop(phi2,indx(11),indx(12),-k2+p1+p2)*
 prop(phi2,indx(13),indx(14),k1-k2-p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(3),k1))*
 vrtx(phi2c(indx(12),k2-p1-p2),photon(indx(2),p1+p2),phi2(indx(9),-k2))*
 vrtx(phi2c(indx(10),k2),photon(indx(6),-k1+p3),phi2(indx(13),k1-k2-p3))*
 vrtx(phi2c(indx(14),-k1+k2+p3),photon(indx(8),k1+p4),phi2(indx(11),-k2+p1+p2));




* Diagram number 208 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag208= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(phi2,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p3)*
 prop(photon,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(phi2,indx(11),indx(12),k2-p1-p2)*
 prop(phi2,indx(13),indx(14),-k1+k2+p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1),photon(indx(5),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k1-p4),phi2(indx(3),k1))*
 vrtx(phi2c(indx(10),-k2),photon(indx(2),p1+p2),phi2(indx(11),k2-p1-p2))*
 vrtx(phi2c(indx(14),k1-k2-p3),photon(indx(6),-k1+p3),phi2(indx(9),k2))*
 vrtx(phi2c(indx(12),-k2+p1+p2),photon(indx(8),k1+p4),phi2(indx(13),-k1+k2+p3));




* Diagram number 209 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag209= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi2,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),-k2)*
 prop(phi2,indx(11),indx(12),-k2+p1+p2)*
 prop(photon,indx(13),indx(14),k1-k2-p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),k1),phi2(indx(7),-k1-p4))*
 vrtx(phi2c(indx(12),k2-p1-p2),photon(indx(2),p1+p2),phi2(indx(9),-k2))*
 vrtx(phi2c(indx(10),k2),photon(indx(13),k1-k2-p3),phi2(indx(5),-k1+p3))*
 vrtx(phi2c(indx(8),k1+p4),photon(indx(14),-k1+k2+p3),phi2(indx(11),-k2+p1+p2));




* Diagram number 210 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag210= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),-k2+p3+p4)*
 prop(phi1,indx(13),indx(14),k1-k2-p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(12),k2-p3-p4),photon(indx(2),p3+p4),phi1(indx(9),-k2))*
 vrtx(phi1c(indx(10),k2),photon(indx(6),-k1+p1),phi1(indx(13),k1-k2-p1))*
 vrtx(phi1c(indx(14),-k1+k2+p1),photon(indx(8),k1+p2),phi1(indx(11),-k2+p3+p4));




* Diagram number 211 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag211= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),k2)*
 prop(phi1,indx(11),indx(12),k2-p3-p4)*
 prop(phi1,indx(13),indx(14),-k1+k2+p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(3),k1))*
 vrtx(phi1c(indx(10),-k2),photon(indx(2),p3+p4),phi1(indx(11),k2-p3-p4))*
 vrtx(phi1c(indx(14),k1-k2-p1),photon(indx(6),-k1+p1),phi1(indx(9),k2))*
 vrtx(phi1c(indx(12),-k2+p3+p4),photon(indx(8),k1+p2),phi1(indx(13),-k1+k2+p1));




* Diagram number 212 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag212= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi2,indx(9),indx(10),-k2)*
 prop(phi2,indx(11),indx(12),-k2+p3+p4)*
 prop(phi2,indx(13),indx(14),k1-k2-p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(3),k1))*
 vrtx(phi2c(indx(12),k2-p3-p4),photon(indx(2),p3+p4),phi2(indx(9),-k2))*
 vrtx(phi2c(indx(10),k2),photon(indx(6),-k1+p1),phi2(indx(13),k1-k2-p1))*
 vrtx(phi2c(indx(14),-k1+k2+p1),photon(indx(8),k1+p2),phi2(indx(11),-k2+p3+p4));




* Diagram number 213 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag213= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(phi1,indx(3),indx(4),k1)*
 prop(photon,indx(5),indx(6),k1-p1)*
 prop(photon,indx(7),indx(8),-k1-p2)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(phi2,indx(11),indx(12),k2-p3-p4)*
 prop(phi2,indx(13),indx(14),-k1+k2+p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1),photon(indx(5),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k1-p2),phi1(indx(3),k1))*
 vrtx(phi2c(indx(10),-k2),photon(indx(2),p3+p4),phi2(indx(11),k2-p3-p4))*
 vrtx(phi2c(indx(14),k1-k2-p1),photon(indx(6),-k1+p1),phi2(indx(9),k2))*
 vrtx(phi2c(indx(12),-k2+p3+p4),photon(indx(8),k1+p2),phi2(indx(13),-k1+k2+p1));




* Diagram number 214 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag214= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),-k2+p3+p4)*
 prop(photon,indx(13),indx(14),k1-k2-p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),k1),phi1(indx(7),-k1-p2))*
 vrtx(phi1c(indx(12),k2-p3-p4),photon(indx(2),p3+p4),phi1(indx(9),-k2))*
 vrtx(phi1c(indx(10),k2),photon(indx(13),k1-k2-p1),phi1(indx(5),-k1+p1))*
 vrtx(phi1c(indx(8),k1+p2),photon(indx(14),-k1+k2+p1),phi1(indx(11),-k2+p3+p4));




* Diagram number 215 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag215= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi2,indx(7),indx(8),-k1-p4)*
 prop(phi1,indx(9),indx(10),k2-p1-p2)*
 prop(phi1,indx(11),indx(12),k2)*
 prop(photon,indx(13),indx(14),-p3-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),k1),phi2(indx(7),-k1-p4))*
 vrtx(phi1c(indx(12),-k2),photon(indx(2),p1+p2),phi1(indx(9),k2-p1-p2))*
 vrtx(phi2c(indx(8),k1+p4),photon(indx(13),-p3-p4),phi2(indx(5),-k1+p3))*
 vrtx(phi1c(indx(10),-k2+p1+p2),photon(indx(14),p3+p4),phi1(indx(11),k2));




* Diagram number 216 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag216= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi2,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),k2-p1-p2)*
 prop(phi2,indx(11),indx(12),k2)*
 prop(photon,indx(13),indx(14),-p3-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),k1),phi2(indx(7),-k1-p4))*
 vrtx(phi2c(indx(12),-k2),photon(indx(2),p1+p2),phi2(indx(9),k2-p1-p2))*
 vrtx(phi2c(indx(8),k1+p4),photon(indx(13),-p3-p4),phi2(indx(5),-k1+p3))*
 vrtx(phi2c(indx(10),-k2+p1+p2),photon(indx(14),p3+p4),phi2(indx(11),k2));




* Diagram number 217 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag217= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),k2-p3-p4)*
 prop(phi1,indx(11),indx(12),k2)*
 prop(photon,indx(13),indx(14),-p1-p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),k1),phi1(indx(7),-k1-p2))*
 vrtx(phi1c(indx(12),-k2),photon(indx(2),p3+p4),phi1(indx(9),k2-p3-p4))*
 vrtx(phi1c(indx(8),k1+p2),photon(indx(13),-p1-p2),phi1(indx(5),-k1+p1))*
 vrtx(phi1c(indx(10),-k2+p3+p4),photon(indx(14),p1+p2),phi1(indx(11),k2));




* Diagram number 218 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag218= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k1-p2)*
 prop(phi2,indx(9),indx(10),k2-p3-p4)*
 prop(phi2,indx(11),indx(12),k2)*
 prop(photon,indx(13),indx(14),-p1-p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),k1),phi1(indx(7),-k1-p2))*
 vrtx(phi2c(indx(12),-k2),photon(indx(2),p3+p4),phi2(indx(9),k2-p3-p4))*
 vrtx(phi1c(indx(8),k1+p2),photon(indx(13),-p1-p2),phi1(indx(5),-k1+p1))*
 vrtx(phi2c(indx(10),-k2+p3+p4),photon(indx(14),p1+p2),phi2(indx(11),k2));




* Diagram number 219 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag219= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),-k1+p3)*
 prop(phi2,indx(7),indx(8),-k1-p4)*
 prop(phi2,indx(9),indx(10),-k1-p4)*
 prop(phi2,indx(11),indx(12),-k1+k2-p4)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1-p3),photon(indx(3),-k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),k1),phi2(indx(7),-k1-p4))*
 vrtx(phi2c(indx(10),k1+p4),photon(indx(2),p1+p2),phi2(indx(5),-k1+p3))*
 vrtx(phi2c(indx(8),k1+p4),photon(indx(13),-k2),phi2(indx(11),-k1+k2-p4))*
 vrtx(phi2c(indx(12),k1-k2+p4),photon(indx(14),k2),phi2(indx(9),-k1-p4));




* Diagram number 220 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag220= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi2,indx(5),indx(6),k1-p4)*
 prop(phi2,indx(7),indx(8),k1+p3)*
 prop(phi2,indx(9),indx(10),k1+p3)*
 prop(phi2,indx(11),indx(12),k1-k2+p3)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(3),-k1),phi2(indx(5),k1-p4))*
 vrtx(phi2c(indx(8),-k1-p3),photon(indx(4),k1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(6),-k1+p4),photon(indx(2),p1+p2),phi2(indx(9),k1+p3))*
 vrtx(phi2c(indx(12),-k1+k2-p3),photon(indx(13),-k2),phi2(indx(7),k1+p3))*
 vrtx(phi2c(indx(10),-k1-p3),photon(indx(14),k2),phi2(indx(11),k1-k2+p3));




* Diagram number 221 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag221= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),-k1+p1)*
 prop(phi1,indx(7),indx(8),-k1-p2)*
 prop(phi1,indx(9),indx(10),-k1-p2)*
 prop(phi1,indx(11),indx(12),-k1+k2-p2)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),k1-p1),photon(indx(3),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),k1),phi1(indx(7),-k1-p2))*
 vrtx(phi1c(indx(10),k1+p2),photon(indx(2),p3+p4),phi1(indx(5),-k1+p1))*
 vrtx(phi1c(indx(8),k1+p2),photon(indx(13),-k2),phi1(indx(11),-k1+k2-p2))*
 vrtx(phi1c(indx(12),k1-k2+p2),photon(indx(14),k2),phi1(indx(9),-k1-p2));




* Diagram number 222 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag222= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p3-p4)*
 prop(photon,indx(3),indx(4),-k1)*
 prop(phi1,indx(5),indx(6),k1-p2)*
 prop(phi1,indx(7),indx(8),k1+p1)*
 prop(phi1,indx(9),indx(10),k1+p1)*
 prop(phi1,indx(11),indx(12),k1-k2+p1)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),-k1),phi1(indx(5),k1-p2))*
 vrtx(phi1c(indx(8),-k1-p1),photon(indx(4),k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),-k1+p2),photon(indx(2),p3+p4),phi1(indx(9),k1+p1))*
 vrtx(phi1c(indx(12),-k1+k2-p1),photon(indx(13),-k2),phi1(indx(7),k1+p1))*
 vrtx(phi1c(indx(10),-k1-p1),photon(indx(14),k2),phi1(indx(11),k1-k2+p1));




* Diagram number 223 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag223= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p2)*
 prop(photon,indx(11),indx(12),-k1+k2+p1)*
 prop(phi2,indx(13),indx(14),k1-k2-p1-p4)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),k2-p2),phi1(indx(7),-k2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),-k1+k2+p1),phi2(indx(13),k1-k2-p1-p4))*
 vrtx(phi1c(indx(8),k2),photon(indx(12),k1-k2-p1),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(14),-k1+k2+p1+p4),photon(indx(10),-k2+p2),phi2(indx(5),k1+p3));




* Diagram number 224 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag224= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p2)*
 prop(photon,indx(11),indx(12),-k1+k2+p1)*
 prop(phi2,indx(13),indx(14),-k1+k2+p1+p3)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),k2-p2),phi1(indx(7),-k2))*
 vrtx(phi2c(indx(14),k1-k2-p1-p3),photon(indx(11),-k1+k2+p1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),k2),photon(indx(12),k1-k2-p1),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(10),-k2+p2),phi2(indx(13),-k1+k2+p1+p3));




* Diagram number 225 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag225= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p1)*
 prop(photon,indx(11),indx(12),-k1+k2+p2)*
 prop(phi2,indx(13),indx(14),k1-k2-p2-p4)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),k2-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),-k1+k2+p2),phi2(indx(13),k1-k2-p2-p4))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(12),k1-k2-p2),phi1(indx(7),k2))*
 vrtx(phi2c(indx(14),-k1+k2+p2+p4),photon(indx(10),-k2+p1),phi2(indx(5),k1+p3));




* Diagram number 226 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag226= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p1)*
 prop(photon,indx(11),indx(12),-k1+k2+p2)*
 prop(phi2,indx(13),indx(14),-k1+k2+p2+p3)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(8),-k2),photon(indx(9),k2-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(14),k1-k2-p2-p3),photon(indx(11),-k1+k2+p2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(12),k1-k2-p2),phi1(indx(7),k2))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(10),-k2+p1),phi2(indx(13),-k1+k2+p2+p3));




* Diagram number 227 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag227= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi2,indx(9),indx(10),-k2+p3)*
 prop(phi2,indx(11),indx(12),-k2-p4)*
 prop(phi2,indx(13),indx(14),-k1-k2+p1+p3)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(10),k2-p3),photon(indx(7),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),k2),phi2(indx(11),-k2-p4))*
 vrtx(phi2c(indx(14),k1+k2-p1-p3),photon(indx(4),-k1+p1),phi2(indx(9),-k2+p3))*
 vrtx(phi2c(indx(12),k2+p4),photon(indx(6),k1+p2),phi2(indx(13),-k1-k2+p1+p3));




* Diagram number 228 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag228= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k2)*
 prop(photon,indx(9),indx(10),k2-p3)*
 prop(photon,indx(11),indx(12),-k2-p4)*
 prop(phi1,indx(13),indx(14),-k1-k2+p1+p3)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(8),-k2),photon(indx(9),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),-k2-p4),phi2(indx(7),k2))*
 vrtx(phi1c(indx(14),k1+k2-p1-p3),photon(indx(10),-k2+p3),phi1(indx(3),-k1+p1))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(12),k2+p4),phi1(indx(13),-k1-k2+p1+p3));




* Diagram number 229 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag229= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi2,indx(9),indx(10),k2-p4)*
 prop(phi2,indx(11),indx(12),k2+p3)*
 prop(phi2,indx(13),indx(14),k1+k2-p1-p4)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),-k2),phi2(indx(9),k2-p4))*
 vrtx(phi2c(indx(12),-k2-p3),photon(indx(8),k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(10),-k2+p4),photon(indx(4),-k1+p1),phi2(indx(13),k1+k2-p1-p4))*
 vrtx(phi2c(indx(14),-k1-k2+p1+p4),photon(indx(6),k1+p2),phi2(indx(11),k2+p3));




* Diagram number 230 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag230= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),-k2)*
 prop(photon,indx(9),indx(10),k2-p4)*
 prop(photon,indx(11),indx(12),-k2-p3)*
 prop(phi1,indx(13),indx(14),-k1-k2+p1+p4)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),k2-p4),phi2(indx(7),-k2))*
 vrtx(phi2c(indx(8),k2),photon(indx(11),-k2-p3),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(14),k1+k2-p1-p4),photon(indx(10),-k2+p4),phi1(indx(3),-k1+p1))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(12),k2+p3),phi1(indx(13),-k1-k2+p1+p4));




* Diagram number 231 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag231= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi1,indx(9),indx(10),k2-p2)*
 prop(phi2,indx(11),indx(12),-k2-p4)*
 prop(photon,indx(13),indx(14),k1+k2-p1-p2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k2),phi1(indx(9),k2-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),k2),phi2(indx(11),-k2-p4))*
 vrtx(phi1c(indx(10),-k2+p2),photon(indx(13),k1+k2-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(12),k2+p4),photon(indx(14),-k1-k2+p1+p2),phi2(indx(5),k1+p3));




* Diagram number 232 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag232= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi1,indx(9),indx(10),k2-p2)*
 prop(phi2,indx(11),indx(12),k2+p3)*
 prop(photon,indx(13),indx(14),k1+k2-p1-p2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),-k2),phi1(indx(9),k2-p2))*
 vrtx(phi2c(indx(12),-k2-p3),photon(indx(8),k2),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(10),-k2+p2),photon(indx(13),k1+k2-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(14),-k1-k2+p1+p2),phi2(indx(11),k2+p3));




* Diagram number 233 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag233= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),-k2)*
 prop(phi2,indx(9),indx(10),-k2+p3)*
 prop(phi2,indx(11),indx(12),-k2-p4)*
 prop(photon,indx(13),indx(14),-p1-p2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(10),k2-p3),photon(indx(7),-k2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(8),k2),phi2(indx(11),-k2-p4))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(13),-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(12),k2+p4),photon(indx(14),p1+p2),phi2(indx(9),-k2+p3));




* Diagram number 234 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag234= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),-k1+p1+p3)*
 prop(phi2,indx(9),indx(10),-k2)*
 prop(photon,indx(11),indx(12),k2-p4)*
 prop(phi2,indx(13),indx(14),-k1-k2-p2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(8),k1-p1-p3),photon(indx(4),-k1+p1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),k2-p4),phi2(indx(9),-k2))*
 vrtx(phi2c(indx(10),k2),photon(indx(6),k1+p2),phi2(indx(13),-k1-k2-p2))*
 vrtx(phi2c(indx(14),k1+k2+p2),photon(indx(12),-k2+p4),phi2(indx(7),-k1+p1+p3));




* Diagram number 235 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag235= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k1-p1-p4)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k2-p3)*
 prop(phi2,indx(13),indx(14),k1+k2+p2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1),phi2(indx(7),k1-p1-p4))*
 vrtx(phi2c(indx(10),-k2),photon(indx(11),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(14),-k1-k2-p2),photon(indx(6),k1+p2),phi2(indx(9),k2))*
 vrtx(phi2c(indx(8),-k1+p1+p4),photon(indx(12),-k2+p3),phi2(indx(13),k1+k2+p2));




* Diagram number 236 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag236= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1-p1)*
 prop(phi2,indx(7),indx(8),-k1+p2+p3)*
 prop(phi2,indx(9),indx(10),-k2)*
 prop(photon,indx(11),indx(12),k2-p4)*
 prop(phi2,indx(13),indx(14),-k1-k2-p1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(8),k1-p2-p3),photon(indx(4),-k1+p2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(11),k2-p4),phi2(indx(9),-k2))*
 vrtx(phi2c(indx(10),k2),photon(indx(6),k1+p1),phi2(indx(13),-k1-k2-p1))*
 vrtx(phi2c(indx(14),k1+k2+p1),photon(indx(12),-k2+p4),phi2(indx(7),-k1+p2+p3));




* Diagram number 237 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag237= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),-k1)*
 prop(photon,indx(3),indx(4),k1-p2)*
 prop(photon,indx(5),indx(6),-k1-p1)*
 prop(phi2,indx(7),indx(8),k1-p2-p4)*
 prop(phi2,indx(9),indx(10),k2)*
 prop(photon,indx(11),indx(12),k2-p3)*
 prop(phi2,indx(13),indx(14),k1+k2+p1)*
 vrtx(phi1c(indx(-3),p2),photon(indx(3),k1-p2),phi1(indx(1),-k1))*
 vrtx(phi1c(indx(2),k1),photon(indx(5),-k1-p1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p2),phi2(indx(7),k1-p2-p4))*
 vrtx(phi2c(indx(10),-k2),photon(indx(11),k2-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(14),-k1-k2-p1),photon(indx(6),k1+p1),phi2(indx(9),k2))*
 vrtx(phi2c(indx(8),-k1+p2+p4),photon(indx(12),-k2+p3),phi2(indx(13),k1+k2+p1));




* Diagram number 238 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag238= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi1,indx(5),indx(6),k1+p1)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),k2-p2)*
 prop(phi1,indx(13),indx(14),k1+k2+p1)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(6),-k1-p1),photon(indx(2),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k1-p3-p4),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k2),phi1(indx(11),k2-p2))*
 vrtx(phi1c(indx(14),-k1-k2-p1),photon(indx(10),k2),phi1(indx(5),k1+p1))*
 vrtx(phi1c(indx(12),-k2+p2),photon(indx(8),-k1+p3+p4),phi1(indx(13),k1+k2+p1));




* Diagram number 239 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag239= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),-k1+p3)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),-k2+p1)*
 prop(phi1,indx(13),indx(14),-k1-k2-p2)*
 vrtx(phi2c(indx(4),k1-p3),photon(indx(1),-k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(7),k1-p3-p4),phi2(indx(3),-k1+p3))*
 vrtx(phi1c(indx(12),k2-p1),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(10),k2),phi1(indx(13),-k1-k2-p2))*
 vrtx(phi1c(indx(14),k1+k2+p2),photon(indx(8),-k1+p3+p4),phi1(indx(11),-k2+p1));




* Diagram number 240 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag240= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi1,indx(5),indx(6),k1+p1)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),k2-p2)*
 prop(phi1,indx(13),indx(14),k1+k2+p1)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(6),-k1-p1),photon(indx(2),k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(7),k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(9),-k2),phi1(indx(11),k2-p2))*
 vrtx(phi1c(indx(14),-k1-k2-p1),photon(indx(10),k2),phi1(indx(5),k1+p1))*
 vrtx(phi1c(indx(12),-k2+p2),photon(indx(8),-k1+p3+p4),phi1(indx(13),k1+k2+p1));




* Diagram number 241 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag241= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi2,indx(3),indx(4),k1-p4)*
 prop(phi1,indx(5),indx(6),-k1-p2)*
 prop(photon,indx(7),indx(8),k1-p3-p4)*
 prop(photon,indx(9),indx(10),-k2)*
 prop(phi1,indx(11),indx(12),-k2+p1)*
 prop(phi1,indx(13),indx(14),-k1-k2-p2)*
 vrtx(phi2c(indx(-7),p4),photon(indx(1),-k1),phi2(indx(3),k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(2),k1),phi1(indx(5),-k1-p2))*
 vrtx(phi2c(indx(4),-k1+p4),photon(indx(7),k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(12),k2-p1),photon(indx(9),-k2),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(6),k1+p2),photon(indx(10),k2),phi1(indx(13),-k1-k2-p2))*
 vrtx(phi1c(indx(14),k1+k2+p2),photon(indx(8),-k1+p3+p4),phi1(indx(11),-k2+p1));




* Diagram number 242 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag242= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),-k1+p1+p3)*
 prop(phi2,indx(9),indx(10),-k1-p2-p4)*
 prop(phi2,indx(11),indx(12),-k1-k2+p1+p3)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(8),k1-p1-p3),photon(indx(4),-k1+p1),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(6),k1+p2),phi2(indx(9),-k1-p2-p4))*
 vrtx(phi2c(indx(12),k1+k2-p1-p3),photon(indx(13),-k2),phi2(indx(7),-k1+p1+p3))*
 vrtx(phi2c(indx(10),k1+p2+p4),photon(indx(14),k2),phi2(indx(11),-k1-k2+p1+p3));




* Diagram number 243 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag243= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p1)*
 prop(photon,indx(5),indx(6),-k1-p2)*
 prop(phi2,indx(7),indx(8),k1-p1-p4)*
 prop(phi2,indx(9),indx(10),k1+p2+p3)*
 prop(phi2,indx(11),indx(12),k1+k2-p1-p4)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi1c(indx(2),-k1),photon(indx(3),k1-p1),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(5),-k1-p2),phi1(indx(1),k1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(4),-k1+p1),phi2(indx(7),k1-p1-p4))*
 vrtx(phi2c(indx(10),-k1-p2-p3),photon(indx(6),k1+p2),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(8),-k1+p1+p4),photon(indx(13),-k2),phi2(indx(11),k1+k2-p1-p4))*
 vrtx(phi2c(indx(12),-k1-k2+p1+p4),photon(indx(14),k2),phi2(indx(9),k1+p2+p3));




* Diagram number 244 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag244= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 prop(phi1,indx(11),indx(12),k1+k2-p1-p2)*
 prop(phi1,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k1-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k1-p3-p4),phi2(indx(5),k1+p3))*
 vrtx(phi1c(indx(14),-k2),photon(indx(8),-k1+p1+p2),phi1(indx(11),k1+k2-p1-p2))*
 vrtx(phi1c(indx(12),-k1-k2+p1+p2),photon(indx(10),k1+p3+p4),phi1(indx(13),k2));




* Diagram number 245 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag245= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 prop(phi2,indx(11),indx(12),k1+k2-p1-p2)*
 prop(phi2,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k1-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k1-p3-p4),phi2(indx(5),k1+p3))*
 vrtx(phi2c(indx(14),-k2),photon(indx(8),-k1+p1+p2),phi2(indx(11),k1+k2-p1-p2))*
 vrtx(phi2c(indx(12),-k1-k2+p1+p2),photon(indx(10),k1+p3+p4),phi2(indx(13),k2));




* Diagram number 246 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag246= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 prop(phi1,indx(11),indx(12),k1+k2-p1-p2)*
 prop(phi1,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k1-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(9),-k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(14),-k2),photon(indx(8),-k1+p1+p2),phi1(indx(11),k1+k2-p1-p2))*
 vrtx(phi1c(indx(12),-k1-k2+p1+p2),photon(indx(10),k1+p3+p4),phi1(indx(13),k2));




* Diagram number 247 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag247= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),-k1+p1)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 prop(phi2,indx(11),indx(12),k1+k2-p1-p2)*
 prop(phi2,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(4),k1-p1),photon(indx(1),-k1),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(-3),p2),photon(indx(7),k1-p1-p2),phi1(indx(3),-k1+p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(9),-k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(14),-k2),photon(indx(8),-k1+p1+p2),phi2(indx(11),k1+k2-p1-p2))*
 vrtx(phi2c(indx(12),-k1-k2+p1+p2),photon(indx(10),k1+p3+p4),phi2(indx(13),k2));




* Diagram number 248 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag248= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 prop(phi1,indx(11),indx(12),k1+k2-p1-p2)*
 prop(phi1,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(7),k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k1-p3-p4),phi2(indx(5),k1+p3))*
 vrtx(phi1c(indx(14),-k2),photon(indx(8),-k1+p1+p2),phi1(indx(11),k1+k2-p1-p2))*
 vrtx(phi1c(indx(12),-k1-k2+p1+p2),photon(indx(10),k1+p3+p4),phi1(indx(13),k2));




* Diagram number 249 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag249= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),k1+p3)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 prop(phi2,indx(11),indx(12),k1+k2-p1-p2)*
 prop(phi2,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(6),-k1-p3),photon(indx(2),k1),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(7),k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(9),-k1-p3-p4),phi2(indx(5),k1+p3))*
 vrtx(phi2c(indx(14),-k2),photon(indx(8),-k1+p1+p2),phi2(indx(11),k1+k2-p1-p2))*
 vrtx(phi2c(indx(12),-k1-k2+p1+p2),photon(indx(10),k1+p3+p4),phi2(indx(13),k2));




* Diagram number 250 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag250= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 prop(phi1,indx(11),indx(12),k1+k2-p1-p2)*
 prop(phi1,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(7),k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(9),-k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi1c(indx(14),-k2),photon(indx(8),-k1+p1+p2),phi1(indx(11),k1+k2-p1-p2))*
 vrtx(phi1c(indx(12),-k1-k2+p1+p2),photon(indx(10),k1+p3+p4),phi1(indx(13),k2));




* Diagram number 251 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag251= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-k1)*
 prop(phi1,indx(3),indx(4),k1-p2)*
 prop(phi2,indx(5),indx(6),-k1-p4)*
 prop(photon,indx(7),indx(8),k1-p1-p2)*
 prop(photon,indx(9),indx(10),-k1-p3-p4)*
 prop(phi2,indx(11),indx(12),k1+k2-p1-p2)*
 prop(phi2,indx(13),indx(14),k2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-k1),phi1(indx(3),k1-p2))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),k1),phi2(indx(5),-k1-p4))*
 vrtx(phi1c(indx(4),-k1+p2),photon(indx(7),k1-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(6),k1+p4),photon(indx(9),-k1-p3-p4),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(14),-k2),photon(indx(8),-k1+p1+p2),phi2(indx(11),k1+k2-p1-p2))*
 vrtx(phi2c(indx(12),-k1-k2+p1+p2),photon(indx(10),k1+p3+p4),phi2(indx(13),k2));




* Diagram number 252 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag252= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),-k1+p1+p3)*
 prop(phi1,indx(9),indx(10),-k1-p2-p4)*
 prop(phi1,indx(11),indx(12),-k1-k2+p1+p3)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1-p4),phi2(indx(1),k1))*
 vrtx(phi1c(indx(8),k1-p1-p3),photon(indx(4),-k1+p3),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(6),k1+p4),phi1(indx(9),-k1-p2-p4))*
 vrtx(phi1c(indx(12),k1+k2-p1-p3),photon(indx(13),-k2),phi1(indx(7),-k1+p1+p3))*
 vrtx(phi1c(indx(10),k1+p2+p4),photon(indx(14),k2),phi1(indx(11),-k1-k2+p1+p3));




* Diagram number 253 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 2 loops:
* with 7 internal lines:

Id diag253= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(phi2,indx(1),indx(2),k1)*
 prop(photon,indx(3),indx(4),k1-p3)*
 prop(photon,indx(5),indx(6),-k1-p4)*
 prop(phi1,indx(7),indx(8),k1-p2-p3)*
 prop(phi1,indx(9),indx(10),k1+p1+p4)*
 prop(phi1,indx(11),indx(12),k1+k2-p2-p3)*
 prop(photon,indx(13),indx(14),-k2)*
 vrtx(phi2c(indx(2),-k1),photon(indx(3),k1-p3),phi2(indx(-5),p3))*
 vrtx(phi2c(indx(-7),p4),photon(indx(5),-k1-p4),phi2(indx(1),k1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(4),-k1+p3),phi1(indx(7),k1-p2-p3))*
 vrtx(phi1c(indx(10),-k1-p1-p4),photon(indx(6),k1+p4),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(8),-k1+p2+p3),photon(indx(13),-k2),phi1(indx(11),k1+k2-p2-p3))*
 vrtx(phi1c(indx(12),-k1-k2+p2+p3),photon(indx(14),k2),phi1(indx(9),k1+p1+p4));

* Total number of diagrams:

#define NDIAGRAMS "253";

