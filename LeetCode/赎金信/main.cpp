#include <iostream>
#include <fstream>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
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
    output << canConstruct(_in1, _in2);
    input.close();
    output.close();
    return 0;
}