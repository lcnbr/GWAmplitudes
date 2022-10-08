* Input model:
*  output= './QGRAFout/sspp0L.h' ;
*
*  style= 'lulu.sty' ;
*
*  model= 'SQEDmodel';
*
*  in= phi1, phi1c, photon, photon;
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



* Diagram number 1 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 0 internal lines:

Id diag1= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))*

 vrtx(phi1c(indx(-3),p2),photon(indx(-5),p3),photon(indx(-7),p4),phi1(indx(-1),p1));




* Diagram number 2 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 1 internal lines:

Id diag2= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),p1+p3)*
 vrtx(phi1c(indx(2),-p1-p3),photon(indx(-5),p3),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-7),p4),phi1(indx(1),p1+p3));




* Diagram number 3 with 4 external legs,
*   4 of which are incoming
*   0 of which are outgoing
* Containg 0 loops:
* with 1 internal lines:

Id diag3= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(photon(indx(-5),p3))* inpol(photon(indx(-7),p4))*

 prop(phi1,indx(1),indx(2),p1+p4)*
 vrtx(phi1c(indx(2),-p1-p4),photon(indx(-7),p4),phi1(indx(-1),p1))*
 vrtx(phi1c(indx(-3),p2),photon(indx(-5),p3),phi1(indx(1),p1+p4));

* Total number of diagrams:

#define NDIAGRAMS "3";

