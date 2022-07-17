#include<stdio.h>
void decompose(double value, int *int_part, double *frac_part){
    *int_part=(int)value;
    *frac_part=value-*int_part;
}
int main(){
    double a,frac_part;
    int int_part;
    printf("enter a decimal number: ");
    scanf("%lf",&a);
    decompose(a, &int_part, &frac_part);
    printf("the int part is: %d and the decimal part is: %g\n", int_part, frac_part);
    return 0;
}