#include<stdio.h>

int *fun(int a[],int n,int *p)
{
    int i, j, x;
    for(i=0; i<n;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }

    *p = a[n-1]; 

    return p; 

}

int main(void) 
{
    int n=5, p=0;
    int a[]={1, 2, 6, 4, 1};

    *fun(a,n, &p);
    printf("-------------------------------\n");
    printf("%d\n", p); 
    printf("-------------------------------\n");
}