#include <iostream>
#include <fstream>
using namespace std;

bool isSubsequence(string s, string t)
{
    int index = 0;
    for (int i = 0; i < t.size(); i++)
        if (t[i] == s[index])
            index++;
    if (index == s.size())
        return true;
    return false;
}

int main(void)
{
    ifstream input;
    ofstream output;
    string _in1, _in2;
    input.open("input", ios::in);
    output.open("output", ios::out);
    input >> _in1;
    input >> _in2;
    output << isSubsequence(_in1, _in2);
    input.close();
    output.close();
    return 0;
}