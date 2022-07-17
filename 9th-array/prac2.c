#include<stdio.h>
int last_exercise(int a[],int b[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i]*b[i];
    }
    return sum;
}
int main(){
    int n;
    printf("enter the lenght of the arrays: ");
    scanf("%d", &n);
    int a[n-1], b[n-1];
    for(int i=0; i<n; i++){
        printf("a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("b[%d]: ",i);
        scanf("%d", &b[i]);
    }
    printf("the sum is: %d\n",last_exercise(a,b,n));
    return 0;
}