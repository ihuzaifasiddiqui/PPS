#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in farenheit\n");
    scanf("%f",&f);
    c=(5*(f-32))/9;
    printf("The temperature in celcius is %f\n",c);
    
}
