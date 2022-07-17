#include <stdio.h>

void max_min(int a[], int n, int *max, int *min)
{
    *max = *min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}

int main()
{
    int n;
    printf("enter the size of the arrays: ");
    scanf(" %d", &n);
    int a[n - 1], big, small;
    printf("enter the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    max_min(a, n, &big, &small);
    printf("largest: %d\n", big);
    printf("smallest: %d\n", small);
    return 0;
}