/*
 * @lc app=leetcode id=740 lang=cpp
 *
 * [740] Delete and Earn
 */

// @lc code=start
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        vector<int> sum(n, 0);
        for (int i = 0; i < nums.size();i++)
        {
            sum[nums[i]] += nums[i];
        }
       
        int take = 0, skip = 0;
        for (int i = 0; i < n;i++)
        {
            int takei = skip + sum[i];
            int skipi = max(skip, take);
            take = takei;
            skip = skipi;
        }
        return max(take, skip);
    }
};
// @lc code=end

