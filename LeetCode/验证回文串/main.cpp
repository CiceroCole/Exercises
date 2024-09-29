#include <iostream>
#include <fstream>
using namespace std;

bool isPalindrome(string s)
{
    string clean;
    for (int i = 0; i < s.size(); i++)
        if (64 < s[i] && s[i] < 123)
            clean += s[i];
    string reserve = "";
    for (int i = 0; i < clean.size(); i++)
        reserve = clean[i] + reserve;
    if (reserve == clean)
        return true;
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
    output << isPalindrome(_in);
    input.close();
    output.close();
    return 0;
}