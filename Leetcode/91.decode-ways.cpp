/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 */

// @lc code=start
class Solution {
public:
    int numDecodings(string s) {
        // this whole question need first pen paper derivation 
        int n = s.size();
        if(n==0)
            return 1;
        if(s[0]=='0')
            return 0;
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n;i++)
        {
            int d1 = s[i-1] - '0';
            int d2 = (s[i - 2] - '0')*10+ (s[i-1] - '0');

            if(d1>=1)             //for these two if conditions observe pen paper solution
                dp[i] += dp[i - 1];
            if(d2>=10 && d2<=26)
                dp[i] += dp[i - 2];
        }
        return dp[n];
    }
};
// @lc code=end

