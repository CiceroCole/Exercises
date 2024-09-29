#include <iostream>
#include <fstream>
#include <map>
using namespace std;

bool isIsomorphic(string s, string t)
{
    map<char, char> dict;
    for (int i = 0; i < s.size(); i++)
    {
        if (dict.count(s[i]) == 0)
            dict[s[i]] = t[i];
        else if (dict[s[i]] != t[i])
            return false;
    }
    return true;
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
    output << isIsomorphic(_in1, _in2);
    input.close();
    output.close();
    return 0;
}