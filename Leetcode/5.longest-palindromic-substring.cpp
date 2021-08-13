/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n =s.size();
        int maxl = 1;
        int dp[n][n];
        memset(dp, 0, sizeof(dp));
        for(int i=0;i<n;i++)
        {
            dp[i][i] =1;   //making all 1size substring true
            
        }
        int start = 0;
         for(int i=0;i<n-1;i++)
        {
            
              
            if(s[i]==s[i+1]) // making all two size substring true
             { dp[i][i+1]=1;
            start = i;
            maxl = 2;}
        }
        for(int k=3;k<=n;k++)
        {
            for (int i = 0; i < n - k + 1;i++)
            {
                int j = i + k - 1;
                if(dp[i+1][j-1]==1 && s[i]==s[j])
                  {  dp[i][j] = 1;

                if(k>maxl)
                {
                    start = i;
                    maxl = k;
                }    }
            }
        }
        string ans;
        for (int i = start; i <=(start + maxl - 1);i++)
            ans += s[i];

        return ans;
    }
};
// @lc code=end

