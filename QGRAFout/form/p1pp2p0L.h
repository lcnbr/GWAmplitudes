* Input model:
*  output= './QGRAFout/p1pp2p0L.h' ;
*
*  style= 'lulu.sty' ;
*
*  model= 'SQEDmodel';
*
*  in= phi1, phi1c, phi2, phi2c;
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
* with 1 internal lines:

Id diag1= (+1)*
 inpol(phi1(indx(-1),p1))* inpol(phi1c(indx(-3),p2))* inpol(phi2(indx(-5),p3))* inpol(phi2c(indx(-7),p4))*

 prop(photon,indx(1),indx(2),-p1-p2)*
 vrtx(phi1c(indx(-3),p2),photon(indx(1),-p1-p2),phi1(indx(-1),p1))*
 vrtx(phi2c(indx(-7),p4),photon(indx(2),p1+p2),phi2(indx(-5),p3));

* Total number of diagrams:

#define NDIAGRAMS "1";

