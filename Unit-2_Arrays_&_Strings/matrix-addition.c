#include <stdio.h>
void main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    printf("\nENTER VALUES FOR MATRIX A:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("\nENTER VALUES FOR MATRIX B:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("\nTHE VALUES OF MATRIX C ARE:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

            printf("%5d", c[i][j]);
        printf("\n");
    }
}
