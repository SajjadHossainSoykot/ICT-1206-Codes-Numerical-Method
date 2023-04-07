#include<stdio.h>
#include<math.h>
#define f(x,y) -x*y
int main()
{   
    int i = 1;
    float x0, y0, x, y, xn, h, k, k1,k2,k3,k4;
    printf("Enter x0, y0, xn, h: ");
    scanf("%f%f%f%f", &x0, &y0, &xn, &h);
    x=x0;
    y=y0;
    printf("Step\tx0\t\tx0\t\txn\t\tyn\n");
    while (x<xn)
    {
        printf("%d\t%f\t%f\t", i, x, y);
        k1 = h*f(x,y);
        k2 = h*f((x+h/2.0), (y + k1/2.0));
        k3 = h*f((x+h/2.0), (y + k2/2.0));
        k4 = h*f((x+h), (y + k3));
        k = (k1+2*k2+2*k3+k4)/6;
        y = y+k;
        x = x+h;
        printf("%f\t%f\n", x, y);
        i++;
    }
    printf("Approx Coordinate (%f, %f)\n", x, y);
}