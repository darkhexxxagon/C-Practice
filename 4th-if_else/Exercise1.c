#include <stdio.h>
main()
{
    float a, b;
    printf("enter a:");
    scanf("%f", &a);
    printf("enter b:");
    scanf("%f", &b);

    if (a > b)
        printf("a is greater than b\n");
    else if (a < b)
        printf("b is greater than a\n");
    else if (a == b)
        printf("b is equal to a\n");
    return 0;
}