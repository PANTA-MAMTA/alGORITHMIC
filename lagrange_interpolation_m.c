#include<stdio.h>

int main()
{
    int i,j,n,x;
    float X[n],y[n],sum=0.0,term;
    printf("enter number of terms\n");
    scanf("%d",&n);
    printf("enter value of x \n");
    for(i=0;i<n;i++)
     scanf("%f",&X[i]);
    printf("enter value of y \n");
    for(i=0;i<n;i++)
     scanf("%f",&y[i]);
    printf("enter value of x for which you want y \n");
    scanf("%f",&x);

    //applying the formula
    for(i=0;i<n;i++)
    {
        term=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            term=term*((x-X[j])/(X[i]-X[j]));
        }
        sum=sum+term*y[i];
    }
    printf("\n value of x=%g is =%f",x,sum);
    return 0;
}