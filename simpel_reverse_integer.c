#include<stdio.h>
void reverse(int n){
    if(n<10){
        printf("%d\n", n);
        return;
    }
    else{
        printf("%d", n % 10);
        reverse(n/10);
    }
}
main(){
    int n;
    printf("enter the number to reverse: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}