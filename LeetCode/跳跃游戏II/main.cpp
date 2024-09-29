#include <iostream>
#include <vector>

using namespace std;

void JumpCount(vector<int> &nums, vector<int> *step_count, int now_index, int step)
{
    step++;
    if (now_index == nums.size() - 1)
        step_count->push_back(step);
    else if (now_index > nums.size())
        return;
    for (int i = 1; i <= nums[now_index]; i++)
    {
        JumpCount(nums, step_count, now_index + i, step);
    }
}

int canJump(vector<int> &nums)
{
    vector<int> step_count;
    JumpCount(nums, &step_count, 0, -1);
    int min_step = step_count[0];
    for (int i = 0; i < step_count.size(); i++)
        if (step_count[i] < min_step)
            min_step = step_count[i];
    return min_step;
}

int main(void)
{
    vector<int> nums = {2, 3, 1, 1, 4}; // can to end
    // vector<int> nums = {3, 2, 1, 0, 4}; // can't to end
    cout << canJump(nums) << endl;
    return 0;
}
