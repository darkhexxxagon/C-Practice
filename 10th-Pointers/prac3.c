#include <stdio.h>
int *middle(int a[], int n)
{
    return &a[n / 2];
}

int main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("enter the data of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    int *p;
    p = middle(arr, n);
    printf("the middle: %d\n", *p);
    return 0;
}