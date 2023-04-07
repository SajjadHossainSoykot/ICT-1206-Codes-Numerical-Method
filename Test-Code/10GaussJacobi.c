#include<stdio.h>
#include<math.h>
#define fx(y,z) (3+5*y+2*z)/10
#define fy(x,z) (3+4*x+3*z)/10
#define fz(x,y) (-3-x-6*y)/10
int main()
{
    int i = 1;
    float x1, y1, z1, e1, e2, e3, e;
    float x=0, y = 0, z=0;
    printf("Enter tolarable error (e): ");
    scanf("%f", &e);
    printf("Step\tx\t\ty\t\tz\n");
    do
    {
        x1 = fx(y,z);
        y1 = fy(x,z);
        z1 = fz(x,y);
        printf("%d\t%f\t%f\t%f\n", i, x1, y1, z1);
        e1 = fabs(x-x1);
        e2 = fabs(y-y1);
        e3 = fabs(z-z1);
        x = x1;
        y = y1;
        z = z1;
        i++;
    } while (e1>e && e2>e && e3>e);
    printf("Solution: x = %.3f y = %.3f z = %.3f\n", x, y,z);
}