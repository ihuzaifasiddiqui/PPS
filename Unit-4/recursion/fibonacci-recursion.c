// Program to print fibonacci series
#include<stdio.h>

void fibonacci(int num);
void main()
{
int num = 0;
printf("Enter a number\t");
scanf("%d", &num);
fibonacci(num);

}
void fibonacci(int num)
{
int a, b, c, i;
a = 0;
b = 1;
i = 1;
printf("%d\t%d", a, b);
while(i <= num)
{
c = a+b;
a = b;
b = c;
printf("\t%d", b);
i++;
}
}
