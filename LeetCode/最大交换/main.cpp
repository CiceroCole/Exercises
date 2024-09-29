#include <iostream>
#include <fstream>
using namespace std;

int maximumSwap(int num)
{
    string str_num;
    str_num = to_string(num);
    int max_num_index = 0;
    for (int i = 0; i < str_num.size(); i++)
    {
        if (str_num[i] >= str_num[max_num_index])
            max_num_index = i;
    }
    string out_str;
    out_str = str_num[max_num_index];
    for (int i = 1; i < str_num.size(); i++)
    {
        if (i == max_num_index)
            out_str += str_num[0];
        else
            out_str += str_num[i];
    }
    return atoi(out_str.c_str());
}

int main(void)
{
    ifstream input;
    ofstream output;
    int _in;
    input.open("input", ios::in);
    output.open("output", ios::out);
    input >> _in;
    output << maximumSwap(_in);
    input.close();
    output.close();
    return 0;
}