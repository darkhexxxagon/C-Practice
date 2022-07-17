//bubble sort
#include <stdio.h>
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]= ", i);
        printf("%d\n", a[i]);
    }
}

void sort_now(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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
    printf("original array: \n");
    printArray(a, n);

    sort_now(a, n);
    
    printf("sorted array: \n");
    printArray(a, n);
    return 0;
}