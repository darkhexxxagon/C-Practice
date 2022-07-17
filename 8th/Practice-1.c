//Fibonacci with array
#include <stdio.h>
int main()
{
    int f[10];
    f[0] = 0;
    f[1] = 1;
    for (int i = 1; i < 11; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        
        printf("%d ", f[i]);
        
    }
    printf("\n"); // shit
    
    return 0;
}