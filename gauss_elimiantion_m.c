#include<stdio.h>

int n;

void converToUpperTriangular(float a[][n+1],int n)
{
    int i,j,x,y,k;
    float ratio;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                ratio=a[j][i]/a[i][i];
                for(k=0;k<n+1;k++)
                a[j][k]=a[j][k]-(ratio*a[i][k]);
            //print the matrix after changed row intermediateforms
            printf("intermediate forms:\n");
            for(x=0;x<n;x++)
            {
                for(y=0;y<n+1;y++)
                printf("%f",a[x][y]);
                printf("\n");
            }
            printf("\n");
            }
        }
    }
}

void applybacksubstitution(float a[][n+1],float value[],int n)
{
    int i,j;
    float sum;
    value[n-1]=a[n-1][n]/a[n-1][n-1];
    for(i=n-2;i>=0;i--)
    {
        sum=0;
        for(j=i+1;j<n;j++)
            sum=sum+a[i][j]*value[j];
            value[i]=(a[i][n]-sum)/a[i][i];
    }
}
int main()
{
    int i,j,k,x,y,n;
    float sum,ratio;
    printf("enter no.of unknown \n");
    scanf("%d",&n);
    float a[n][n+1],value[n];
    printf("enter the augmented matrix \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        scanf("%f",&a[i][j]);
    }
converToUpperTriangular(a,n);
applybacksubstitution(a,value,n);
printf(value,n);
return 0;
    
}

