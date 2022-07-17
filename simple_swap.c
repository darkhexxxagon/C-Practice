#include<stdio.h>
int i,j;
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    
}
int main(void){
    int i=1, j=2;
    swap(i, j);
    printf("i=%d, j=%d\n",i,j);
    return 0;
}
// #include<stdio.h>
// void swap(int *a, int *b)
// {
//     int temp = *a; 
//     *a = *b;      
//     *b = temp; 
// }
// int main()
// {
//     int i = 1;
//     int j = 2;
//     swap(&i,&j);
//     printf("i = %d, j = %d\n",i, j);
//     return 0;
// }