#include <iostream>
#include <vector>
// #include <map>

using namespace std;

int sumIndicesWithKSetBits(vector<int> &nums, int k)
{
    vector<int> indexs;
    for (int i = 0; i < nums.size(); i++)
    {
        int index = i;
        int count = 0;
        while (index >= 1)
        {
            count = count + (index % 2);
            index = index / 2;
        }
        if (count == k)
        {
            cout << "index : " << i << " value : " << nums[i] << endl;
            indexs.push_back(i);
        }
    }
    int sum = 0;
    for (int i : indexs)
        sum += nums[i];
    return sum;
}

int main(void)
{
    int k = 1;
    vector<int> nums = {5, 10, 1, 5, 2};
    int out = sumIndicesWithKSetBits(nums, k);
    cout << "sum : " << out << endl;
    return 0;
}
