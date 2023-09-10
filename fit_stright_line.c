#include<stdio.h>

int main()
{
    int n ,j,i;
    float sum1=0,sum2=0,sum3=0,sum4=0,a,b;
    printf("enter no. of observations \n");
    scanf("%d",&n);
    float x[n],y[n],augmented_matrix[2][3];
    printf("enter value of x \n");
    for(int i=0;i<n;i++)
    scanf("%f",&x[i]);
    printf("enter values of y \n");
    for(int i=0;i<n;i++)
    scanf("%f",&y[i]);

    //computations
    for(int i=0;i<n;i++)
    {
        sum1=sum1+x[i];
        sum2=sum2+y[i];
        sum3=sum3=x[i]*y[i];
        sum4=sum4+x[i]*x[i];
    }

    //finding slope and intercept 

    augmented_matrix[0][0]=n;
    augmented_matrix[0][1]=sum1;
    augmented_matrix[0][2]=sum2;
    augmented_matrix[1][0]=sum1;
    augmented_matrix[1][1]=sum4;
    augmented_matrix[1][2]=sum3;

    //solving it 

    int ratio = augmented_matrix[1][0]/augmented_matrix[0][0];
    for(int i=0;i<3;i++)
    augmented_matrix[1][i]=augmented_matrix[1][i]-ratio*augmented_matrix[0][i];

    //printfing upper triangular matrix

    for(int i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        printf(".2%f",augmented_matrix[i][j]);
        printf("\n");

        //finding a and b  ny back substitution

        b=augmented_matrix[1][2]/augmented_matrix[1][1];
        a=(augmented_matrix[0][2]-augmented_matrix[0][1]*b)/augmented_matrix[0][0];
        printf("equation of the line:y=%.2f + %.2fX",a,b);
        return 0;
    }
    }