/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum = 0, smax = INT_MIN;

        for (int i = 0; i < nums.size();i++)
        {
            sum += nums[i];
            smax = max(smax, sum);
            if(sum<0)
                sum = 0;
        }
        return smax;

    //     int n = nums.size();
    //     vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    //     for (int i = 0; i < nums.size();i++)
    //     {
    //         dp[i][i] = nums[i];
    //         for (int j = 1; j < nums.size();j++)
    //         {
    //             if(j>i) dp[i][j] = dp[i][j - 1] + nums[j];

    //         }

    //     }

    //     int ans;
    //     ans = 0;
    //     for (int i = 0; i < nums.size() + 1;i++)
    //     {
    //         for (int j = 0; j < n;j++)
    //             ans = max(ans, dp[i, j]);
    //     }
    //     return ans;
    // }
};
// @lc code=end

