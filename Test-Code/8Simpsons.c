#include<stdio.h>
#include<math.h>
#define f(x) 1/x
int main()
{
    int a, b,i, n;
    double   h, x, sum = 0.0, ans;
    printf("Enter lowerlimit(a) Upper limit (b) and Segment (n): ");
    scanf("%d%d%d", &a,&b,&n);
    h = (double) (b-a)/n;
    for ( i = 1; i < n; i++)
    {
        x = a + i*h;
        
        if(i%2!=0) sum  = sum + 4*f(x);
        else sum  = sum + 2*f(x);
    }
    sum = sum + f(a) + f(b);
    ans = (sum*h)/3;
    printf("Answer is: %lf", ans);
}