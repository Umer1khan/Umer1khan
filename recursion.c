#include <stdio.h>

 float fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        printf("Enter positive number.");
    }
    else
    {

        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter number to find factorial :");
    scanf("%d", &n);
    printf("factorial of %d is %f.", n, fact(n));

    return 0;
}