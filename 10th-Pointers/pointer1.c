// #include <stdio.h>
// int main()
// {
//     int *p;
//     int var = 5;
//     p = &var;
//     printf("var: %d\n", var);
//     printf("address of var: %p", p);
//     return 0;
//}

// #include <stdio.h>
// int main()
// {
//     int var = 5, *point = &var;
//     printf("var: %d\n", *point);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int *p, var;
    var = 22;
    printf("var address: %p\n", &var);
    printf("var value: %d\n\n", var);
    p = &var;
    printf("pointer address: %p\n", p);
    printf("pointer value: %d\n\n", *p);
    var = 11;
    printf("pointer address: %p\n", p);
    printf("pointer value: %d\n\n", *p);
    *p = 67;
    printf("var address: %p\n", &var);
    printf("var value: %d\n\n", var);
    return 0;
}