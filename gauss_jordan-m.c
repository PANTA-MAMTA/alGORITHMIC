#include<stdio.h>
int n;

void convertToDiagonal(float a[][n+1],int n)
{
    int i,j,x,y,k;
    float ratio;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                ratio=a[j][i]/a[i][i];
                for(k=0;k<n+1;k++)
                a[j][k]=a[j][k]-(ratio*a[i][k]);

                //print the matrix after changed row

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

// prints the value of unknowns
void printUnknowns(float a[][n+1],int n)
{
    int i;
    printf("values of unknowns are :\n");
    for(i=0;i<n;i++)
    printf("value of variable %d=%f \n",a[i][n]/a[i][i],i);
}

int main()
{
    int i,j,k,x,y;
    float ratio;
    printf("enter no. of unkinwn \n");
    scanf("%d",&n);
    float a[n][n+1];
    printf("enter the augmented matrix \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        scanf("%f",&a[i][j]);
    }
    convertToDiagonal(a,n);
    printUnknowns(a,n);
    return 0;
}