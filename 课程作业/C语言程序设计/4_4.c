// 求最大公约数与最小公倍数
#include <stdio.h>

int GCD(int x, int y)
{
    if (y > x)
        return GCD(y, x);
    while (x % y != 0)
    {
        int T = x;
        x = y;
        y = T % y;
    }
    return y;
}

int LCM(int x, int y)
{
    return x * y / GCD(x, y);
}

int main(void)
{
    int input1, input2;
    scanf("%d %d", &input1,&input2);
    printf("%d", GCD(input1, input2));
    return 0;
}
