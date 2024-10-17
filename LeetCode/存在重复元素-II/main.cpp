#include <iostream>
#include <vector>
#include <map>
using namespace std;

using namespace std;
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        auto abs = [](int num){return num > 0? num : -num;};
        map<int,int> count;
        for (int i = 0;i < nums.size();i++)
        {
            if (count.find(nums[i]) != count.end())
            {
                if (abs(i - count[nums[i]]) <= k){
                    return true;
                }
            }
            count[nums[i]] = i;
        }
        return false;
        
    }

int main(void)
{
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    cout << containsNearbyDuplicate(nums, k) << endl;
    return 0;
}