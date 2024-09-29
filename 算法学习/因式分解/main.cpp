#include <vector>
#include <iostream>
using namespace std;

// 因式分解
vector<int> factorization(int number)
{
    int m = 2;
    vector<int> result;
    if (number < 0)
    {
        number = -number;
        result = {-1};
    }
    else if (number == 0)
    {
        result.push_back(0);
        return result;
    }
    else
        result = {1};
    while (number != 1)
    {
        while (number % m == 0)
        {
            result.push_back(m);
            number /= m;
        }
        m += 1;
    }
    return result;
}

int main(void)
{
    vector out = factorization(156186412);
    for (int i : out)
        cout << i << " ";
    return 0;
}
