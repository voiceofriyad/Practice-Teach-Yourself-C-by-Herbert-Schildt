#include <stdio.h>
int main(void)
{
    int count = 20;
    int num = 10;
    int val = 15;
    int ans1, ans2;

    ans1 = count * num + 88 / val - 19 % count;
    printf("ans is %d  ", ans1);

    ans2 = (count * num) + (88 / val) - (19 % count);
    printf("Now ans is %d", ans2);


    return 0;
}
