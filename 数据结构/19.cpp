// 编写非递归方法计算n!

#include <iostream>

int factorial(int n){
    int sum = 1;
    while (n > 1)
    {
        sum = sum * n;
        n = n - 1;
    }
    return sum;
    
}



int main(int argc, char const *argv[])
{
    std::cout << factorial(20);
    return 0;
}

