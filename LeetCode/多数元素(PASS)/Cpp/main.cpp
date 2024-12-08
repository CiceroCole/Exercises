#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

int majorityElement(vector<int> &nums)
{
    map<int, int> num_count;
    int nums_size = nums.size();
    for (int i = 0; i < nums_size; i++)
    {
        num_count[nums[i]] += 1;
        if (num_count[nums[i]] > nums.size() / 2)
            return nums[i];
    }
    return nums[0]; // 无用，解决g++警告
}

int main(void)
{
    ifstream input;
    ofstream output;
    int _in;
    input.open("input", ios::in);
    output.open("output", ios::out);
    int temp;
    vector<int> nums;
    while (input >> temp)
        nums.push_back(temp);
    output << majorityElement(nums);
    input.close();
    output.close();
    return 0;
}