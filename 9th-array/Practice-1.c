#include <stdio.h>
int bool_has_odd(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum % 2 == 0 ? 1 : 0;
}

int main(void)
{
    int n;
    printf("Enter the n terms of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array a: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    if (bool_has_odd(a, n))
        printf("The sum is even\n");
    else
        printf("The sum is odd\n");
    return 0;
}