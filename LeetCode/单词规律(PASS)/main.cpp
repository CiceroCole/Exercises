#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

vector<string> split(string _str, char _c)
{
    vector<string> out;
    string temp = "";
    for (int i = 0; i <= _str.size(); i++)
    {
        if (i != _str.size() && _str[i] != _c)
            temp += _str[i];
        else
        {
            out.push_back(temp);
            temp.clear();
        }
    }
    return out;
}

bool wordPattern(string pattern, string s)
{
    vector<string> strs = split(s, ' ');
    if (strs.size() != pattern.size())
        return false;
    map<char, string> patternK_dict;
    map<string, char> strsK_dict;
    for (int i = 0; i < pattern.size(); i++)
    {
        if (patternK_dict.count(pattern[i]) == 0 && strsK_dict.count(strs[i]) == 0)
        {
                patternK_dict[pattern[i]] = strs[i];        
                strsK_dict[strs[i]] = pattern[i];
        }
        else if (patternK_dict[pattern[i]] != strs[i]
                 || 
                strsK_dict[strs[i]] != pattern[i])
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
    input.ignore(1);
    char temp[3000 + 1];
    input.getline(temp, 3000);
    _in2 = temp;
    output << wordPattern(_in1, _in2);
    input.close();
    output.close();
    return 0;
}