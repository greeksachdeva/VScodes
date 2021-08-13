/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, lftsum = 0;
        for (int i = 0; i < nums.size();i++)
        {
            sum += nums[i];
        }
        for (int i = 0; i < nums.size();i++)
        {
            if(lftsum == sum-lftsum-nums[i])
                return i;

            lftsum += nums[i];
        }
        return -1;
    }
};
// @lc code=end

