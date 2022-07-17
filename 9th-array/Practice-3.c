//insertion sort
#include <stdio.h>
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]= ", i);
        printf("%d\n", a[i]);
    }
}
void sort_now(int a[], int n, int max)
{
    int i, j, largest_index, temp;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        largest_index = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[largest_index])
                largest_index = j;
        //swap
        int temp=a[largest_index];
        a[largest_index]=a[i];
        a[i]=temp;
    }
}

int main()
{
    int n;
    printf("Enter the n terms of the array: ");
    scanf("%d", &n);
    int a[n - 1];
    printf("Enter the array a: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0];

    printf("original array: \n");
    printArray(a, n);

    sort_now(a, n, max);

    printf("sorted array: \n");
    printArray(a, n);
    return 0;
}
