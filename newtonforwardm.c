#include<stdio.h>
#include<math.h>

void main()
{
    float a[100][100],x,u1,u,y;
    int i,j,n,fact;
    printf("enter number of terms \n");
      scanf("%d",&n);
    printf("enter values of x \n");
    for(i=0;i<n;i++)
       scanf("%f",&a[i][0]);
    
    printf("enter rvalues of y\n");
    for(i=0;i<n;i++)
        scanf("%f",&a[i][1]);
    printf("enter value of x for which you want \n");
    scanf("%f",&x);

    //find the difference table

    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
        a[i][j]=a[i+1][j-1]-a[i][j-1];
    }

    //print difference table table

    printf("the difference table is as follows:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n+1;j++)
        printf("%f",a[i][j]);
        printf("\n");
    }
        //find u

        u=(x=a[0][0])/(a[1][0]-a[0][0]);
        y=a[0][1];
        u1=u;
        fact=1;

        for(i=2;i<=n;i++)
        {
            y=y+(u1*a[0][i])/fact;
            fact=fact*i;
            u1=u1*(u-(1-i));
        }
        printf("\n\n vlue at x=%g is y= %f",x,y);
    
return 0;
}