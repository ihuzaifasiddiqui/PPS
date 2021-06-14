#include <stdio.h>

int main() {
   int a, b, temp;
printf("enter the two numbers\n");
scanf("%d %d",&a,&b);
   
   printf("Values before swapping - \n a = %d, b = %d \n\n", a, b);

   temp  = a;
   a  = b;
   b  = temp;

   printf("Values after swapping - \n a = %d, b = %d \n", a, b);
   return 0;
}

