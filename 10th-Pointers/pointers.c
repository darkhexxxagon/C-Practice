#include<stdio.h>
#define LEN 5
void avg_sum(double a[],int n, double *avg,double *sum);

int main(){
	double b[LEN],ave=0,suma=0.0;
	int i;
	printf("Enter 5 numbers: ");
	for(i=0;i<LEN;i++){
		scanf("%lf",&b[i]);
	}
    
	avg_sum(b,LEN,&ave,&suma);
	printf("Sum equals: %f\n",suma);
	printf("Average is: %f",ave);
	return 0;
}
void avg_sum(double a[],int n, double *avg,double *sum){
	int i;
	*sum = 0.0;
	for(i=0;i<n;i++){
		*sum=*sum+a[i];
	}
	*avg=*sum/n;
}