#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x)-x-1
#define g(x) cbrt(x+1)

int main()
{
	 int i=1, N;
	 float x0, x1, e;
	 /* Inputs */
	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);
	 printf("Enter maximum iteration: ");
	 scanf("%d", &N);
	 /* Implementing Fixed Point Iteration */
	 printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  x1 = g(x0);
		  printf("%d\t%f\t%f\t%f\t%f\n",i, x0, f(x0), x1, f(x1));
		  i++;
		  if(i>N)
		  {
			printf("Not Convergent."); break;
		  }

		  x0 = x1;
	 } while( fabs(f(x1)) > e);
     printf("\nRoot is %f", x1);
	 return(0);
}
