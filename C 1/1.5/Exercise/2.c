#include <stdio.h>
int main(void)

{
    int year;
    printf("Enter the value of year: ");
    scanf("%d", &year);

    int second = year * 31556926;

    printf("Number of seconds in %d year is: %d", year, second);

    return 0;
}
