#include<stdio.h>
float findValueAt(float x)
{
    return 1/(1+x*x);
}

void main()
{
    int n;
    float i, a,b,sum=0.0,h;
    int position_of_term=1;
    printf("enter value of a and b \n");
    scanf("%f%f",&a,&b);
    printf("enter no. of intervals \n");
    scanf("%d",&n);
    h=(b-a)/n;
    sum=findValueAt(a)+findValueAt(b);
    for(i=a+h;i<b;i=i+h)
    {
        if(position_of_term%2==0)
            sum=sum+2*findValueAt(i);
        else
            sum=sum+4*findValueAt(i);
        position_of_term++;

    }
    sum=(h*sum)/3;
    printf("\n value of the integral=%f",sum);
    return 0;
    
}