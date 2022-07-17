#include <stdio.h>
int last_exercise(int a[], int b[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the n terms of the array: ");
    scanf("%d", &n);
    int a[n - 1], b[n - 1];
    printf("Enter the array a: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the array b: \n");
    for (int i = 0; i < n; i++)
    {
        printf("b[%d]= ", i);
        scanf("%d", &b[i]);
    }
    printf("\n");
    printf("The sum of the form a[0]*b[0]+...+a[n-1]*b[n-1] = %d\n", last_exercise(a, b, n));
    return 0;
}