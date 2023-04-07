#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) 3*x-cos(x)-1
int main ()
{
    float a, b, c, fa, fb, fc;
    int i=1;
    printf("Enter the values of a and b: ");
    scanf("%f %f",&a, &b);
    printf("\nStep\ta\t\tb\t\tf(a)\t\tf(b)\t\tc\t\tf(c)\n");
    do {
        fa=f(a);
        fb=f(b);
        c=(a+b)/2;
        fc=f(c);
        printf("%d\t%f\t%f\t%f\t%f\t%f\t%f\n",i,a,b,fa,fb,c,fc);
        if(fa*fc<0){b=c;}
        else {a=c;}
        i++;
        // printf("No of interation = %d\t", i);
        // printf("root %f\t", c);
        // printf("value of function = %f\n", fc);
    } while(fabs(fc)>e);
    printf("Root is %f\n", c);
    return 0;
    }

