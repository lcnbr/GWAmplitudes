S x;
CF f;
Local F = f(30)-f(20);
#$count=0;
#define max "10";
#procedure testing
#do i = 1,1
.sort
    Print "show %t";
    .sort
    #write "test %$", $count

#$count = $count + 1;
    if ($count<16) redefine i "0";
    .sort
#enddo

#endprocedure


#procedure testing2
#do loopdotcount=1,`max'
  #do i=1,1
  .sort
    if ($count<16) redefine i "0";
    #$argMatch=0;


      Print "match check  %t";
    .sort
      #write "match? %$ with on loopcount: %s", $argMatch,`loopdotcount'
    .sort
* As long as we are still finding terms we loop
    #$count = $count + 1;
    .sort
* Reinitialise matching var
  #enddo
.sort
#enddo
.sort
#endprocedure
#call testing2
Print +s;
.end