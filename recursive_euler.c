#include<stdio.h>

double e(int aux_fact, int n, int f) {
    if (aux_fact <= n) {
        return 1.0 / f + e(aux_fact + 1, n, f * aux_fact);
    }
}
int main(){
    int n;
    printf("Enter the number of iterations to e: ");
    scanf("%d",&n);
    printf("the e number: %lf\n", e(1,n,1));
    return 0;
}