#include<stdio.h>
#include<math.h>

int main()
{
    float x,u1,u,y;
    int i,j,n, fact;
    printf("enter no. of terms \n");
    scanf("%d",&n);
    float a[n][n+1];
    printf("enter values of x \n");
    for(i=0;i<n;i++)
         scanf("%f",&a[i][0]);
    printf("enter values of y\n");
    for(i=0;i<n;i++)
         scanf("%f",&a[i][1]);
    printf("enter value of x for which we want y \n");
    scanf("%f",&x);

    //find difference table
    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
        a[i][j]=a[i+1][j-1]-a[i][j-1];
    }

    //print the difference table

    printf("the difference table is as follow:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        printf("%f",a[i][j]);
        printf("\n");
    }
    //find u
    u=(x-a[n-1][0])/(a[1][0]-a[0][0]);
    y=a[n-1][1];
    u1=u;
    fact=1;
    j=2;
    for(i=n-2;i>=0;i--)
    {
        y=y+(u1*a[i][j])/fact;
        fact=fact*j;
        u1=u1*(u+(j-1));
        j++;
    }
    printf("\n\n value of x=%g is y=%f",x,y);
    return 0;
}