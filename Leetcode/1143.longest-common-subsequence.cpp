/*
 * @lc app=leetcode id=1143 lang=cpp
 *
 * [1143] Longest Common Subsequence
 */

// @lc code=start
class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int n, m;
        n = t1.size();
        m = t2.size();
        int dp[n + 1][m + 1];
        for(int i=0;i<n+1;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<m+1;i++){
            dp[0][i]=0;
        }
        for (int i = 1; i < n+1;i++)
        {
            for (int j = 1; j < m+1;j++)
            {
                if(t1[i-1]==t2[j-1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }    
            }
        }
        return dp[n][m];
    }
};
// @lc code=end

