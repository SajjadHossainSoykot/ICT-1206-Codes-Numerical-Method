#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-4*x-9
int main()
{
    float a, b, c, fa, fb, fc;
    int i = 1;
    printf("Enter two initial guess a and b: ");
    scanf("%f %f", &a, &b);
    printf("\nStep\ta\t\tb\t\tf(a)\t\tf(b)\t\tc\t\tf(c)\t\tUpdate\n");
    do
    {
        fa=f(a);
        fb=f(b);
        c = (a+b)/2;
        fc = f(c);
        printf("%d\t%f\t%f\t%f\t%f\t%f\t%f\t", i, a, b, fa, fb, c, fc);
        if(fa*fc<0) {b=c; printf("b = c\n"); }
        else {a =c; printf("a = c\n");}
        i++;
    } while (fabs(fc)>e);
    printf("Approximate Root: %f", c);
    
}