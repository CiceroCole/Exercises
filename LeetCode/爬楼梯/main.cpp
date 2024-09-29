#include <iostream>
#include <fstream>
using namespace std;

void _climbStairs(int n, int climb = 0, int *count = NULL)
{
    if (climb == n)
        (*count)++;
    else if (climb < n)
    {
        _climbStairs(n, climb + 1, count);
        _climbStairs(n, climb + 2, count);
    }
}

int climbStairs(int n)
{
    int count = 0;
    _climbStairs(n, 0, &count);
    return count;
}
int main(void)
{
    ifstream input;
    ofstream output;
    int n;
    input.open("input", ios::in);
    output.open("output", ios::out);
    input >> n;
    output << climbStairs(n);
    input.close();
    output.close();
    return 0;
}
