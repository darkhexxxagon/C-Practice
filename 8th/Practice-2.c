//find the number of occurrences in a value and represent that in array
#include <stdio.h>
int main()
{
    int digit_seen[30] = {0};
    int digit;
    const int dig[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
        while (n > 0)//comprove the value of n
        {
            digit = n % 10;//extract the exact digit to analize
            digit_seen[digit]++;//count the repeteance of a exact number and stores in the array
            n /= 10;
        }
    for (int i = 0; i < 10; i++)
    {
        if(i==0){
        printf("Digit     : ");
        }
        printf("%d ", i);
    }    
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if(i==0){
        printf("Ocurrences: ");
        }
        printf("%d ", digit_seen[i]);
    }
    printf("\n");
    return 0;
}