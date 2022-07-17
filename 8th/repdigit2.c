#include<stdio.h>
int main(){
    int digit_seen[10]={0};
    int digit;
    int n,i,repteat=0;

    printf("enter a number: ");
    scanf("%d",&n);

    while (n>0)
    {
        digit=n%10;
        digit_seen[digit]++; 
        n/=10;
    }

    for(i=0; i<10; i++){
        if (digit_seen[i]>1)
        {
            printf("repeated digit %d = %d\n",i, digit_seen[i]);
            repteat=1;
        }
        
    } 
    if (repteat==0)printf("no repeated digit\n");
    
    return 0;
    
}