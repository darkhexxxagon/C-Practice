#include <stdio.h>
main()
{
    int a, b;
    scanf("%d", &a);
    if (a != 0)
        if (b != 0)
            int result = a / b;
    else
     printf("Error");
    return 0;
}
//if a=0, the program will jump directly to return 0, because the else respond to the second if, so, we can say: the program have a index problem