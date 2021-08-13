/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (int i = 0; i < strs[0].size();i++)
        {
            int j = 1;
            while(j<strs.size() && strs[j].size()>i)
            {
                if(strs[j][i]!=strs[0][i])
                    return ans;

                j++;
            }
            if(j==strs.size())
                ans += strs[0][i];
        }
        return ans;
    }
};
// @lc code=end

