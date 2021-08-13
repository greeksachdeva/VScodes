/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
int rec(int n,vector<int> &dp,int idx,vector<int> &nums)
{
    if(idx >= n)
        return 0;
    if(dp[idx]!=1e6)
        return dp[idx];

    for (int i = 1 ; i <=nums[idx];i++)
    {
        dp[idx] = min(dp[idx],1 + rec(n, dp, idx + i, nums));
    }
    return dp[idx];
}
    int jump(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> dp(n + 1,1e6); // using 1e6 is impp
        return rec(n, dp,0,nums);
    }
};
// @lc code=end

