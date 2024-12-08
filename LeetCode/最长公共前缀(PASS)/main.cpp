#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string out = "";
    for (int n = 0; n < strs[0].size(); n++)
    {
        for (int i = 0; i < strs.size() - 1; i++)
        {
            if (n > strs[i].size())
                return out;
            if (strs[i][n] != strs[i + 1][n])
                return out;
        }
        out += strs[0][n];
    }
    return out;
}

int main(void)
{
    ifstream input;
    ofstream output;
    int _in;
    input.open("input", ios::in);
    output.open("output", ios::out);
    vector<string> strs;
    string temp = "";
    while (input >> temp)
        strs.push_back(temp);
    output << longestCommonPrefix(strs);
    input.close();
    output.close();
    return 0;
}