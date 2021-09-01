// program demonstrating selection sort 
#include <stdio.h>
void main()
{
    int i, j, n, a[100], t, min;
    printf("enter range of elements");
    scanf("%d", &n);
    printf("enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("elements before sorting");
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
        {
            t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
    printf("elements after sorting are");
    for (i = 0; i < n; i++)
    {

        printf("%5d", a[i]);
    }
}
