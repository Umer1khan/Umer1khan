#include <stdio.h>
#include <math.h>
int main()
{
    double x, ret;
    printf("Enter a value :");
    scanf("%lf", &x);
    ret = log(x);
    printf("square root of %lf is %lf\n", x, cbrt(x));
    return 0;
}