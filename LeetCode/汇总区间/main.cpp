#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> out;
    nums.push_back((int)-2e31 - 1);
    int start = nums[0], end = nums[0];
    for (int i = 0; i < nums.size() - 1; i++)
    {
        end = nums[i];
        if (nums[i] + 1 != nums[i + 1] || i + 1 == nums.size() - 1)
        {
            if (start == end)
            {
                string temp = to_string(start);
                out.push_back(temp);
            }
            else
            {
                string temp = to_string(start) + "->" + to_string(end);
                out.push_back(temp);
            }
            start = nums[i + 1];
        }
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