#include<stdio.h>
#include<math.h>
#define f(x) 1/x
int main()
{
    int a,b,n,i;
    double h,sum=0.0,x,result;
    printf("\nEnter the value of lower limit a: ");
    scanf("%d",&a);
    printf("\nEnter the value of upper limit b: ");
    scanf("%d",&b);
    printf("\nEnter the segment: ");
    scanf("%d",&n);
    h=(double)(b-a)/n;
    for(i=1;i<n;i++)
    {
        x=a+i*h;
        if(i%2==0)
        {
        sum=sum+(2*f(x));
        }
        else 
        {
        sum=sum+(4*f(x));
        }
    }
    sum=sum+f(a)+f(b);
    result=(sum*h)/3;
    printf("Result is %lf\n",result);
    return 0;
}
