#include <stdio.h>
int main()
{
    int c = 0; /* digit position */
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        n /= 10;
        c++;
    }

    int numberArray[c];

    c = 0;

    /* extract each digit */
    while (n != 0)
    {
        numberArray[c] = n % 10;
        n /= 10;
        c++;
    }
}