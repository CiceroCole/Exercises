log = open("out.log", "w")


def quicklySort(nums: list, left: int = 0, right: int = -1):
    if right == -1:
        right = len(nums) - 1
    old_left, old_right = left, right
    if left == right or left > len(nums) - 1:
        return
    print(left, right, file=log)
    base_num = nums[left]
    print(nums, file=log)
    print("=" * 30, file=log)
    while left != right:
        while left < right and nums[right] >= base_num:
            right -= 1
        nums[left] = nums[right]
        while left < right and nums[left] <= base_num:
            left += 1
        nums[right] = nums[left]

    nums[left] = base_num
    quicklySort(nums, old_left, right)
    quicklySort(nums, left + 1, old_right)
    return nums


print(quicklySort([9, 8, 7, 6, 5, 4, 3, 2, 1, 0]))
