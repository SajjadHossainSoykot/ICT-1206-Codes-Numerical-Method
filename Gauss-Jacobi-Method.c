#include<stdio.h>
#include<math.h>
#define fx(y,z) (3+5*y+2*z)/10
#define fy(x,z) (3+4*x+3*z)/10
#define fz(x,y) (-3-x-6*y)/10
int main()
   {
    int i=1,j;
    float x1,y1,z1,e1, e2, e3, e;
    float x=0, y=0, z=0;
    printf("Enter tolarable error: ");
    scanf("%f",&e);
    // printf("Enter The initial value : ");
    // scanf("%f %f %f",&x,&y,&z);
    printf("\nCount\tx\ty\tz\n");
    do
    {
        x1=fx(y,z);
        y1=fy(x,z);
        z1=fz(x,y);
        printf("%d\t%.04f\t%.04f\t%.04f\n",i, x1, y1,z1);
        e1 =fabs(x-x1);
        e2 =fabs(y-y1);
        e3 =fabs(z-z1);
        i++;
        x=x1;
        y=y1;
        z=z1;
    }while(e1>e && e2>e && e3>e);
    printf("\nSolution: x = %0.4f, y = %0.4f, and z = %0.4f\n", x1, y1, z1);
}     