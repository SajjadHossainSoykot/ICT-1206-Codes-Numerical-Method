#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-4*x-1
#define df(x) 3*x*x-4
int main()
{   
    int i=0;
    float x0, x1, f0,f1, df0;
    printf("Initial guess x0: ");
    scanf("%f", &x0);
    printf("\nStep\tx\t\tf(x)\n");
    do
    {
     f0 = f(x0);
     df0 = df(x0);
     if(df0==0){printf("Math Error"); break;}
     x1 = x0 - (f0/df0);
     f1=f(x1);
     x0 = x1;
     i++;
     printf("%d\t%f\t%f\n", i, x1, f1);
    } while (fabs(f1)>e);    
    printf("Approximate Root: %f", x1);
    
}