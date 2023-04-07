#include<stdio.h>
#include<math.h>
#define f(x,y) -x*y
int main()
{   
    int i = 1;
    float x0, y0, x, y, xn, h, k;
    printf("Enter x0, y0, xn, h: ");
    scanf("%f%f%f%f", &x0, &y0, &xn, &h);
    x=x0;
    y=y0;
    printf("Step\tx0\t\tx0\t\txn\t\tyn\n");
    while (x<xn)
    {
        printf("%d\t%f\t%f\t", i, x, y);
        k = h*f(x,y);
        y = y+k;
        x = x+h;
        printf("%f\t%f\n", x, y);
        i++;
    }
    printf("Approx Coordinate (%f, %f)\n", x, y);
    
        
}