#include<stdio.h>
int factorial(int n);
void main()
{
int fact, i, n;
printf("Enter the number\t");
scanf("%d", &n);
fact = factorial(n);
printf("Factorial of %d is %d", n, fact);
}
int factorial(int n)
{
int fact = 1;
if(n==1)
{
return fact;
}
else
{
fact = n * factorial(n-1);

return fact;
}
}

