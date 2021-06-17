// Program to find the roots of quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float r1,r2,d;
    printf("Enter the coefficients of equation\n");
  scanf("%d %d %d",&a,&b,&c);
  d=(b*b)-(4*a*c);
  if(d<0)
  {
     printf("The roots are imaginary\n");
  }
  else if(d==0)
  {
    printf("Roots are equal\n");
    r1=-b/(2*a);
    r2=r1;
    printf("r1=%f   r2=%f\n",r1,r2);
  }
  else 
  {
     printf("Roots are real");
     r1=(-b+sqrt(d))/(2*a);
     r2=(-b-sqrt(d))/(2*a);
     printf("r1=%f r2=%f\n",r1,r2);
  }
  return 0;
}
