#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> out;

    switch (nums.size())
    {
        case 0:
        {
            return out;
            break;
        }
        case 1:
        {
            out.push_back(to_string(nums[0]));
            return out;
        }
    }
    int start = nums[0], end = nums[0];
    int i = 0;
    for (; i < nums.size() - 1; i++)
    {
        end = nums[i];
        if (nums[i] + 1 != nums[i + 1]){
            string append_item  = 
                start == end ? to_string(start) 
                             : to_string(start) + "->" + to_string(end);
            out.push_back(append_item);
            start = nums[i + 1];
        };

    }
    if (start == nums.back())
        out.push_back(to_string(nums.back()));
    else
        out.push_back(to_string(start) + "->" + to_string(nums.back()));

    return out;
}

int main(void)
{
    ifstream input;
    ofstream output;
    int _in;
    input.open("input", ios::in);
    output.open("output", ios::out);
    vector<int> in;
    vector<string> out;
    int temp;
    while (input >> temp)
        in.push_back(temp);
    out = summaryRanges(in);
    for (string i : out)
        output << i << endl;
    input.close();
    output.close();
    return 0;
}