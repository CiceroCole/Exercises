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
        if (num_count.count(nums[i] == 0))
            num_count[nums[i]] = 1;
        else
            num_count[nums[i]] += 1;
    }

    for (map<int, int>::iterator it = num_count.begin(); it != num_count.end(); it++)
        if (it->second > nums_size / 2)
            return it->first;
    return 0; // 无用，解决g++警告
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