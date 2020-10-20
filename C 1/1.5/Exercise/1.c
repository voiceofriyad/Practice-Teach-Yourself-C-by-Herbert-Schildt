#include <stdio.h>
int main(void)
{
    int a;

    printf("Enter the value of dimension: ");
    scanf("%d", &a);

    int volume = a*a*a;

    printf("The volume of the cube is: %d", volume);

    return 0;
}
