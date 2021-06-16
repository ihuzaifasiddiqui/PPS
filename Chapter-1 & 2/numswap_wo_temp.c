// Program to swap values without temporary variable
#include<stdio.h>
int main() {
   int a, b;

   printf("enter the two numbers\n");
   scanf("%d %d",&a,&b);
   //if a=11 b=99
   printf("Values before swapping - \n a = %d, b = %d \n\n", a, b);

   a = a + b;  // ( 11 + 99 = 110)
   b = a - b;  // ( 110 - 99 = 11)
   a = a - b;  // ( 110 - 11 = 99)

   printf("Values after swapping - \n a = %d, b = %d \n", a, b);

   return 0;
}