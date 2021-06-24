#include<stdio.h>
void main()
{
  int n,flag=0,i=2;
 
  printf("Enter the number\n");
  scanf("%d",&n);
  while(i<n)
  {
    if(n%i==0) // this condition will only be true only if the no is perfectly divisible by any number.
    flag=1;
    i++;
  }
  if(flag==1)
 //initially the flag is 0 but when the flag is 1 we know that it has 
//entered the loop,  so we print that the no is not prime.
  printf("The no is not a prime\n");
  else
  printf("The no is prime");
    }

