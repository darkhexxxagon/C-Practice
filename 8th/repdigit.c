#include <stdio.h>
main()
{
    int digit_seen[10] = {0};
    int digit;
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = 1;
        n /= 10;
    }
    if (n > 0)
    {
        printf("repeated digit\n");
    }
    else
        printf("no repeated digit\n");
    return 0;
}