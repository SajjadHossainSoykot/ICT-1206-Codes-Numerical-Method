#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-4*x-1
int main()
{
    float x0, x1, x2;
    float f0, f1, f2;
    int i = 1;
    printf("Enter the value of x0 and x1: ");
    scanf("%f %f", &x0, &x1);
    printf("\nStep\tx0\t\tx1\t\tx2\t\tf(x2)\n");
    do
        {
        f0=f(x0);
        f1=f(x1);
        if(f0 == f1)
		{
			printf("Mathematical Error.");
			break;
		}
        x2 = x1 - (x1 - x0) * f1/(f1-f0);
		f2 = f(x2);
        printf("%d\t%f\t%f\t%f\t%f\n",i,x0,x1,x2, f2);
		  x0 = x1;
		  x1 = x2;
		  i++;
    }while(fabs(f2)>e);
    printf("\nRoot is: %f", x2);
return 0;}