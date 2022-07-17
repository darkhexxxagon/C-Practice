#include <stdio.h>
int main()
{
    int a, fact = 1, i;
    float e = 1;
    printf("introduce a value n: ");
    scanf("%d", &a);
    
    for (i = 1; i <= a; i++)
    {
        fact *= i;
        e += 1.0f / fact;
    }
    printf("an approximation to e: %g\n ", e);
    return 0;
}