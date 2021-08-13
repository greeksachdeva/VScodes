/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (int i = 0; i <nums.size();i++)
        {
            int n = nums.size();
            while(nums[i]>0 && nums[i]<=n && nums[i]!=nums[nums[i]-1])
                swap(nums[i], nums[nums[i] - 1]);
        }
        for (int i = 0; i < nums.size();i++)
        if(nums[i]!=i+1)
            return i + 1;
        return nums.size() + 1;
    }
};
// @lc code=end

