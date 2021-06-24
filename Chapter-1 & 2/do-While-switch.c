// Program to add subtract, divide, or multiply two numbers
// using do-while and switch statement. 
#include <stdio.h>
int main()
{
    int a, b, c, n;
    do
    {
        printf("Enter two no’s\n");
        scanf("%d %d", &a, &b);
        printf("1.Addition\n2.Substration\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            c = a + b;
            printf("%d", c);
            break;
        case 2:
            c = a - b;
            printf("%d", c);
            break;
        case 3:
            c = a * b;
            printf("%d", c);
            break;
        case 4:
            c = a / b;
            printf("%d", c);
            break;
        }
    } while (n < 5);
    return 0;
}
