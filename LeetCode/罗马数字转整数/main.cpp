#include <iostream>
#include <fstream>
using namespace std;

int romanToInt(string s)
{
    int sum = 0;
    int s_size = s.size();
    for (int i = 0; i < s_size; i++)
    {
        switch (s[i])
        {
        case 'M':
            sum += 1000;
            break;
        case 'D':
            sum += 500;
            break;
        case 'C':
        {
            if (i < s_size - 1)
            {
                char _c = s[i + 1];
                if (_c == 'D' || _c == 'M')
                    sum -= 100;
                else
                    sum += 100;
            }
            else
                sum += 100;
        }
        break;
        case 'L':
            sum += 50;
            break;
        case 'X':
        {
            if (i < s_size - 1)
            {
                char _c = s[i + 1];
                if (_c == 'L' || _c == 'C')
                    sum -= 10;
                else
                    sum += 10;
            }
            else
                sum += 10;
        }
        break;
        case 'V':
            sum += 5;
            break;
        case 'I':
        {
            if (i < s_size - 1)
            {
                char _c = s[i + 1];
                if (_c == 'V' || _c == 'X')
                    sum -= 1;
                else
                    sum += 1;
            }
            else
                sum += 1;
        }
        }
    }
    return sum;
}
int main(void)
{
    ifstream input;
    ofstream output;
    string _in;
    input.open("input", ios::in);
    output.open("output", ios::out);
    input >> _in;
    output << romanToInt(_in);
    input.close();
    output.close();
    return 0;
}