#include<stdio.h>
#include<math.h>

float findValueAt(float x)
{
    return x*x*x;
}

int main()
{
    int n,i;
    float sum=0.0,h,a,b;
    printf("enter value of a and b \n");
    scanf("%f %f",&a,&b);
    printf("enter no. of intervals \n");
    scanf("%d",&n);

    //computations

    h=(b-a)/n;
    sum=findValueAt(a)+findValueAt(b);
    for(i=a+h;i<b;i+h)
         sum=sum + 2*findValueAt(i);
   sum=(h*sum)/2;
 printf("\n value of the integral=%f",sum);

    return 0;
}