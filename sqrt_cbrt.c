#include <stdio.h>
#include <math.h>

int main()
{
    int operation;
    float num,result;
    printf("Enter a number :");
    scanf("%f", &num);

    printf("1:To find square root\n");
    printf("2:To find cube root\n ");

    printf("Choose any number to find square root or cube root.\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        result = sqrt(num);
        printf("The square root of %f is %f .", num, result);
        break;

    case 2:
        result = cbrt(num);
        printf("The cube root of %f is %f .", num, result);
        break;

    default:
        printf("Please choose the option from 1 to 2");

        break;
    }

    return 0;
}