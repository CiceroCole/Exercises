#include <iostream>
#include <vector>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    for (int i = 0; i < nums.size() - k; i++)
    {
        for (int m = 1; m <= k; m++)
        {
            if (nums[i] == nums[i + m])
                return true;
        }
    }
    return false;
}

int main(void)
{
    vector<int> nums = {1, 2, 3, 1, 2, 3};
    int k = 2;
    cout << containsNearbyDuplicate(nums, k) << endl;
    return 0;
}