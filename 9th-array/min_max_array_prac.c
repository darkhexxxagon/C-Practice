#include<stdio.h>
void min_max(int a[], int n, int *max, int *min){
    *min=*max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>*max) *max=a[i];
        else if(a[i]<*min) *min=a[i];
    }
}

int main(){
    int n;
    printf("enter the array size: ");
    scanf("%d", &n);
    int a[n-1], max, min;
    printf("enter the array: \n");
    for (int i=0; i<n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    min_max(a,n,&max,&min);
    printf("largest number: %d\n", max);
    printf("smallest number: %d\n",min);
    return 0;
}