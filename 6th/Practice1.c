#include<stdio.h>
int main(){
    int n, s=0;
    printf("Enter the limit number to perform the sum: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        s+=i;
    }
    printf("%d\n",s);
    return 0;
}