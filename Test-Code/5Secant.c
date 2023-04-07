#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-4*x-1
int main()
{   
    int i = 1;
    float x0,x1,x2,f0,f1,f2;
    printf("Enter x0 and x1: ");
    scanf("%f%f", &x0, &x1);
    printf("Step\tx0\t\tx1\t\tx2\t\tf(x2)\n");
    do
    {
        f0 = f(x0);
        f1 = f(x1);
        if(f1==f0){printf("Math Error\n"); break;}
        x2 = x1 - ((x1-x0)*f1)/(f1-f0);
        f2 = f(x2);
        printf("%d\t%f\t%f\t%f\t%f\n", i, x0, x1, x2, f2);
        x0 = x1;
        x1 = x2; 
        i++;        
    } while (fabs(f2)>e);
    printf("Approximate Root: %f", x2);
}