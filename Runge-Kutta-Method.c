#include<stdio.h>
#include<math.h>
#define f(x,y) -x*y 
int main()
{
    float x0,y0,k1,k2,k3,k4,k,y,x,h,xn;
    int i = 1;
    printf("Enter x0, y0, xn, h: ");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n\nStep\tx0\t\ty0\t\txn\t\tyn\n");
    while(x<xn)
    {
        printf("%d\t%f\t%f",i,x,y);
        k1=h*f(x,y);
        k2=h*f((x+h/2.0),(y+k1/2.0));
        k3=h*f((x+h/2.0),(y+k2/2.0));
        k4=h*f((x+h),(y+k3));
        k=((k1+2*k2+2*k3+k4)/6);
        y=y+k;
        x=x+h;
        printf("\t%f\t%f\n",x,y);
        i++;
    }
    printf("Approximate coordinate (%f, %f)\n", x, y);
}