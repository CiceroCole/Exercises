// 百钱百鸡问题
#include <stdio.h>

int main(void)
{
    for (int jw = 1; jw < 20; jw++)
        for (int jm = 1; jm < 34; jm++)
            for (int jc = 3; jc < 300; jc += 3)
                if (jw * 5 + jm * 3 + jc / 3 == 100)
                    printf("公鸡：%d, 母鸡: %d, 小鸡: %d\n", jw, jm, jc);
    return 0;
}
