// Program to find factorial of a number using while loop

#include <stdio.h>
void main()
{
    int fact = 1, i = 1, n; //fact value is initialized as 1 bcz factorial of 1 is 1.
    printf("Enter the number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial = %d", fact);
}
