#include <iostream>
#include <vector>

using namespace std;

bool canJump(vector<int> &nums, int now_index = 0)
{
    if (now_index == nums.size() - 1)
        return true;
    int canJump_num = nums[now_index];
    for (int i = 1; i <= canJump_num; i++)
    {
        if (canJump(nums, now_index + i))
            return true;
    }
    return false;
}

int main(void)
{
    vector<int> nums = {2, 3, 1, 1, 4}; // can to end
    // vector<int> nums = {3, 2, 1, 0, 4}; // can't to end
    cout << canJump(nums) << endl;
    return 0;
}
