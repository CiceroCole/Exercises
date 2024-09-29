nums = [1, 1, 2, 3, 4, 4, 5]
i = 0
while i < len(nums) - 1:
    if nums[i] == nums[i + 1]:
        del nums[i]
    i += 1
print(nums)