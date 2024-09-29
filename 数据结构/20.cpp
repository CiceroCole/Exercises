// 递归方式编写斐波那契数列
#include <iostream>

int Fibonacci(int n){
    if (n == 1)
        return 0;
    else if (n == 2)
    {
        return 1;
    }
    else{
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
    
};

int main(void)
{
    std::cout << Fibonacci(20);
    return 0;
}
