#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> bracket;
    char l_brackets[3] = {'{', '[', '('};
    char r_brackets[3] = {'}', ']', ')'};
    for (char i : s)
    {
        if (bracket.empty())
            bracket.push(i);
        else
        {
            for (int m = 0; m < 3; m++)
            {
                if (bracket.top() == l_brackets[m])
                {
                    if (i == r_brackets[m])
                        bracket.pop();
                    else if (i == '(' || i == '[' || i == '{')
                        bracket.push(i);
                    else
                        return false;
                    break;
                }
            }
        }
    }
    if (bracket.empty())
        return true;
    else
        return false;
}

int main(void)
{
    ifstream input;
    ofstream output;
    string _in;
    input.open("input", ios::in);
    output.open("output", ios::out);
    input >> _in;
    output << isValid(_in);
    input.close();
    output.close();
    return 0;
}