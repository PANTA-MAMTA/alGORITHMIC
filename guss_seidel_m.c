#include<stdio.h>
#include<conio.h>
#include<math.h>

//define functions modified form
#define f1(x,y,z) (15-y-z)/10
#define f2(x,y,z) (24-x-z)/10
#define f3(x,y,z) (33-x-y)/10

int main()
{
    float x0,y0,z0,x1,y1,z1,e,ex,ey,ez;
    int count=0;
    // get tolerable error

    printf("\n enter tolerable error \n e=");
    scanf("%f",&e);

    //get initial guess for x,y and z
    printf("\n enter initial guess for x=\n x0=");
    scanf("%f",&x0);
    printf("\n enter initial gauess for y:\n y0=");
    scanf("%f",&y0);
    printf("\n enter initial guess for z=0 \n z0=");
    scanf("%f",&z0);

    //format the heading for displaying output table
    printf("\n count \tx\ty\tz\n")    ;

    //start looping
    do{
        //find the approximations
        x1=f1(x0,y0,z0);
        y1=f2(x1,y0,z0);
        z1=f3(x1,y1,z0);
        //display in the output
        printf("%d\t%.4f\t%.4f\t%.4f\n",count,x1,y1,z1);
        //calculate errors in x y and z
        ex=fabs(x1-x0);
        ey=fabs(y1-y0);
        ez=fabs(z1-z0);
        count++;
        //set values for next iteration
        x0=x1;
        y0=y1;
        z0=z1;
    }while(ex>e && ey>e && ez>e);
    printf("\n finalapproximation:\n x=%0.3f\n y=%0.3f\nz=%0.3f\n",x1,y1,z1);
    return 0;
}