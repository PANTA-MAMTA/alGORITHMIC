#include<stdio.h>
#include<conio.h>
float df(float x,float y);

void main()
{
    float x,y,xn,h,k1,k2,k3,k4,k;
    int i,n;
    printf("enter values \n");
    printf("x=");
    scanf("%f",&x);
    printf("y=");
    scanf("%f",&y);
    printf("enter x at which y is required xn=");
    scanf("%f",&xn);
    printf("enter step size:");
    scanf("%f",&h);

    //calculating no. of steps
    n=(xn-x)/h+0.5;

    //runge_kutta 4gh order method
    printf("\n step\tx\ty\n");
    printf("                 \n");
    for(i=1;i<=n;i++)
    {
        k1=h*df(x,y);
        k2=h*df(x+h/2.0,y+k1/2.0);
        k3=h*df(x+h/2.0,y+k2/2.0);
        k4=h*df(x+h,y+k3);
        k=(k1+2.0*(k2+k3)+k4/6.0);
        x=x+h;
        y=y+k;
        printf("%.3d\t%.4f\t%.4f\n",i,x,y);
    }

    //displaying result
    printf("\n value of y at x=%.3f is %.4f\n",x,y);
    getch();
}

float df(float x,float y)
{
    return(x*y*y-y/x);
}