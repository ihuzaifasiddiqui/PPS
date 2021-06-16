// Program to check if a number is odd or even
#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter a number \n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is an Even number\n",n);
    }
    else
    printf("%d is an Odd number\n",n);

        return 0;
}