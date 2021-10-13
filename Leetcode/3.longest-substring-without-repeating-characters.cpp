/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> v(257);
        int l = 0, r = 0;
        int ans = 0;

        while(r<s.length())
        {
            v[s[r]]++;
            while(v[s[r]]>1)
            {
                v[s[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;

        }
        return ans;
        }
};
// @lc code=end

