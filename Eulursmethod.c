#include<stdio.h>
#include<math.h>
#include<stdio.h>
#define f(x,y) -x*y
int main ()
{
    float x0, y0, h, k, xn, x, y, yn;
    int i=1;
    printf("Enter the values of x0, y0, xn and h: ");
    scanf("%f %f %f %f",&x0, &y0, &xn, &h);
    x = x0;
    y = y0;
    printf("\n\nStep\tx0\t\ty0\t\txn\t\tyn\n");
    // float step = (xn - x0)/h;
    // int n = (int)step;
    //for (i = 1; i <=n; i++)
    while(x<xn)    
    {   
        printf("%d\t%f\t%f",i,x,y);
        k = (h*f(x,y));
        y=y+k;
        x=x+h;
        printf("\t%f\t%f\n",x,y);
        i++;
    } 
    printf("Approximate coordinate (%f, %f)\n", x, y);
    return 0;
}
