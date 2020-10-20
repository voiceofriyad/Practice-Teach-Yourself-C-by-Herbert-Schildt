#include<stdio.h>
int main(void)
{
    float a, b, sum;

    printf("Enter a floating point number");
    scanf("%f", &a);

    printf("Enter another floating point number");
    scanf("%f", &b);

    sum = a + b;
    printf("Sum is: %f", sum);

    return 0;

}
