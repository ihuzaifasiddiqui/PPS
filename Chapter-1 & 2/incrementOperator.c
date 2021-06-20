/* Program demonstrating the use of increment operator
 ++a ---> pre-increment (first increments then assigns the value)
 a++ ---> post-increment (first assigns then increments)*/

#include<stdio.h>
main() {
   int x, y, z;
   x = 10;
   y = 10;
   z = ++x; //z will hold 11
   printf ("value of z id %d",z); 
   z = y++; //z will hold 10, then y will be 11
   printf ("value of z and y is %d %d ",z,y);
}
