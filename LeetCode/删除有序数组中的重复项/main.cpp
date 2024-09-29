#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 2; i++)
        if (nums[i] == nums[i + 1])
            nums.erase(nums.begin() + i);
    return nums.size();
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 1, 2, 3, 4, 4, 5};
    int k = removeDuplicates(nums);
    cout << k << endl;
    for (int i = 0; i < nums.size() - 1; i++)
        cout << nums[i] << " ";
    return 0;
}
