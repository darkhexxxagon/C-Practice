#include <stdio.h>
void odd(int n, int arr[])
{
    int x = 0;
    int oddarr[n];
    printf("The odd numbers in the array: \n");
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddarr[x] = arr[i];
            printf("odd[%d]: %d\n", x, oddarr[x]);
            x++;
        }
    }
}
void even(int n, int arr[])
{
    int x = 0;
    int evenarr[n];
    printf("The even numbers in the array: \n");
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenarr[x] = arr[i];
            printf("odd[%d]: %d\n", x, evenarr[x]);
            x++;
        }
    }
}
int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the data of the array: \n");
    for (int i = 0; i <= n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    odd(n, arr);
    even(n,arr);
    return 0;
}