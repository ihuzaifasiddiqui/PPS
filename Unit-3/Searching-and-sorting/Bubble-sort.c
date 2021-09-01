#include <stdio.h>
void main()
{
    int i, j, n, bubble[20], temp;
    printf("enter range of elements");
    scanf("%d", &n);
    printf("enter elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bubble[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (bubble[j] > bubble[j + 1])
            {
                temp = bubble[j];
                bubble[j] = bubble[j + 1];
                bubble[j + 1] = temp;
            }
        }
    }
    printf("after sorting");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", bubble[i]);
    }
}
