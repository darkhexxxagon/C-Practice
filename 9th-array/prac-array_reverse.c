#include <stdio.h>
void reverse(int a[], int n)
{
    int i;
    printf("The elements from the array displayed in the reverse order are :\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n=0;
    int array[19], i;
    printf("array(max 20 numbers): \n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &array[i]);
        if (array[i]!=0) n++;
        else if (array[i]==0){
            i=20;
        }
    }
    reverse(array,n);
}
// void main()
// {
//     int n;
//     printf("enter the amount of terms: ");
//     scanf("%d", &n);
//     int array[n], i;
//     printf("Enter elements into the array: \n");
//     for (i = 0; i < n; i++)
//     {
//         printf("array[%d] :", i);
//         scanf("%d", &array[i]);
//     }
//     printf("The elements from the array displayed in the reverse order are :\n");
//     for (i = n-1; i >= 0; i--)
//     {
//         printf("array[%d] :", i);
//         printf("%d\n", array[i]);
//     }
// }