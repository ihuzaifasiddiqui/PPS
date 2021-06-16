#include<stdio.h>
int main(){
    int p,t,r;
    float si;
printf("Enter the principle  amount\n");
scanf("%d",&p);
printf("Enter time in years\n");
scanf("%d",&t);
printf("Enter rate of interest\n");
scanf("%d",&r);
si = (p*t*r)/100 ;
printf("Simple Interest is %f\n", si);


return 0;
}