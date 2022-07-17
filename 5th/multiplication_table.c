/*Write a program that represents the multiplication table from 0 to 20 for any natural number*/
#include <stdio.h>
int i = 0;
float a, b = 0, m;
int main()
{
    printf("Enter the value: ");
    scanf("%f", &a);
    printf("The multiplication table of %.2f is:\n", a);
    while (b <= 20)
    {
        m = a * b;
        printf("%.1f x %.1f = %f\n", a, b, m);
        ++b;
    }
    return 0;
}
