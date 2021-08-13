/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        for (int i = 0; i < nums.size();i++)
        {
            int j = i;
            while(j>=0)
            {
                v[i] += nums[j];
                j--;
            }

        }
        return v;
    }
};
// @lc code=end

