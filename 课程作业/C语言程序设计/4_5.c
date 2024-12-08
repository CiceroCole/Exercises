// 奖金计算问题
#include <stdio.h>

/**
 * 计算奖金
 * 
 * 根据销售额计算员工的奖金。该函数使用预定义的销售标准和对应的奖金比例来计算总奖金。
 * 
 * @param Sales 销售额，用于计算奖金的基础。
 * @return 返回计算得到的奖金总额。
 */
double bonus(int Sales){
    // 定义销售标准数组，用于比较销售额并决定奖金比例
    int standard[] = {1,2,4,6,Sales};
    // 定义对应的奖金比例数组
    double standard_m[] = {0.1, 0.075, 0.05,  0.03, 0.015};
    // 定义每个标准下的销售变动量数组
    double standard_v[] = {1,1,2,2,0};
    // 初始化总奖金和总销售额变量
    double sum = 0, TSales = Sales;
    // 循环遍历每个销售标准
    for(int i = 0; i < 5;i++)
    {
        // 检查当前销售额是否达到当前销售标准
        if (Sales - standard[i] * 100000 >= 0)
            // 如果达到，计算当前标准下的奖金并累加到总奖金中
            sum  = sum + standard_v[i] * 100000 * standard_m[i];
        else
        {
            // 如果未达到，按比例计算当前销售额对应的奖金并结束循环
            sum  = sum + TSales * standard_m[i];
            break;
        }
        // 更新剩余销售额
        TSales = TSales - standard_v[i] * 100000;
    }
    // 返回计算得到的总奖金
    return sum;
}


int main(void)
{
    int I = 450000;
    printf("奖金为 %1.3lf", bonus(I));
    return 0;
}

