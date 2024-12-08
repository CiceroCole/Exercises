// 求所有的水仙花数
#include <stdio.h>
#include <math.h>

int is_SXH(int n)
{
    int ID,TD,HD;
    ID = n % 10;
    TD = (n / 10) % 10;
    HD = n / 100;
    
    return pow(ID,3) + pow(TD,3) + pow(HD,3) == n ? 1 : 0;
}

int main(void)
{
    for (int i = 100; i < 1000; i++)
        if (is_SXH(i))
            printf("%d\n",i);
    
    return 0;
}
