#include<stdio.h>
float findvalueat(float x)
{
    return 1/(1+x*x);
}

void main()
{
    int n;
    float i,a,b,sum=0,h;
    int position_of_term=1;
    printf("enter value of a and b \n");
    scanf("%f%f",&a,&b);
    printf("enter no. of intervals \n");
    scanf("%d",&n);
    h=(b-a)/n;
    sum=findvalueat(a)+findvalueat(b);
    for(i=a+h;i<b;i=i+h)
    {
        if(position_of_term%3==0)
        sum=sum+2*findvalueat(i);
        else
        sum=sum+3*findvalueat(i);
        position_of_term++;
    }
    sum=(3*h)/8*sum;
    printf("\n value of the integral=%f",sum);
    return 0;
}