/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
    
public:
    
    
    int rec(int idx,vector<int> &dp,int n)
    {
        if(idx>n)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        if(idx==n)
            {dp[idx] = 1;
            return 1;}
        
        
        int left = rec(idx + 1,dp,n);
        int right = rec(idx + 2,dp,n);
        return dp[idx] = left + right;
    }
    int climbStairs(int n) {
     vector<int> dp(n+1, -1);
        int a = rec(0,dp, n);
        return a;
        }
};
// @lc code=end

