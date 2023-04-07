#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-x-1
#define g(x) cbrt(x+1)
int main()
{   
    int i=1,N;
    float x0, x1,e;
    printf("Enter x0, e, N: ");
    scanf("%f%f%d", &x0, &e, &N);
     printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
     do
     {  
        x1 = g(x0);
        printf("%d\t%f\t%f\t%f\t%f\n", i, x0, f(x0), x1, f(x1));
        i++;
        if(i>N){printf("Not Convergent\n"); break;}
        x0 = x1;        
     } while (fabs(f(x1)) > e);
    printf("Approximate Root: %f", x1);
    
}