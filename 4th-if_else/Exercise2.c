#include <stdio.h>
main()
{
    float a;
    printf("Enter a value: ");
    scanf("%f", &a);
    if (a >= 20.00 && a <= 90.00)
        printf("the number is inside the interval 20<x<90\n");
    else
        printf("The number is outside the interval 20<x<90 \n");
    return 0;
}