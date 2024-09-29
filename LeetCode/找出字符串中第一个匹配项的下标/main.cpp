#include <iostream>
#include <fstream>
using namespace std;

int strStr(string haystack, string needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (needle[0] == haystack[i])
        {
            int count = 0;
            for (int n = 0; n < needle.size(); n++)
            {
                if (i + n > haystack.size() - 1)
                    return -1;
                if (needle[n] == haystack[i + n])
                    count++;
                else
                    break;
            }
            if (count == needle.size())
            {
                return i;
            }
        }
    }
    return -1;
}

int main(void)
{
    ifstream input;
    ofstream output;
    string _in1;
    string _in2;
    input.open("input", ios::in);
    output.open("output", ios::out);
    input >> _in1;
    input >> _in2;
    output << strStr(_in1, _in2);
    input.close();
    output.close();
    return 0;
}