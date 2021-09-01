#include <stdio.h>
void main()
{
    int binary[20], n, i, k, low, mid, high;
    printf("enter the size");
    scanf("%d", &n);
    printf("enter elements into array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &binary[i]);
    }
    printf("enter search key");
    scanf("%d", &k);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (binary[mid] < k)

        {
            low = mid + 1;
        }
        else if (binary[mid] > k)
        {
            high = mid - 1;
        }
        else
            break;
    }
    if (binary[mid] == k)
    {
        printf("element is found at location %d", mid + 1);
    }
    else
        printf("element not found");
}
