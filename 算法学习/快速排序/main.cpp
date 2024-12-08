#include <iostream>
#include <vector>

using namespace std;

// 快速排序
template <typename T>
void sort(T &nums, int left, int right)
{
    if (left >= right)
        return;
    int _left = left;
    int _right = right;
    int base_num = nums[left + (right - left ) / 2];
    while (_left != _right)
    {
        while (_right > _left && nums[_right] >= base_num)
            _right -= 1;
        if (_left < _right) {
            nums[_left] = nums[_right];
        }
        while (_left < _right && nums[_left] <= base_num)
            _left += 1;
        if (_left < _right) {
            nums[_right] = nums[_left];
        }
    }
    nums[_left] = base_num;
    sort(nums, left, _left);
    sort(nums, _left + 1, right);
}
int main(void)
{
    // vector<int> nums = {3, 2, 4, 1, 5, 6, 9, 8, 7, 3, 2, 4, 1, 5, 6, 9, 8, 7};
    int nums[18] = {3, 2, 4, 1, 5, 6, 9, 8, 7, 3, 2, 4, 1, 5, 6, 9, 8, 7};
    for (int i : nums)
        cout << i << " ";
    cout << endl;
    // sort(nums, 0, nums.size() - 1);
    sort(nums, 0, 18 - 1);
    for (int i : nums)
        cout << i << " ";
    return 0;
}
