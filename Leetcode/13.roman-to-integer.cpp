/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m;
        m.insert({'I', 1});
        m.insert({'V', 5});
        m.insert({'X', 10});
        m.insert({'L', 50});
        m.insert({'C', 100});
        m.insert({'D', 500});
        m.insert({'M', 1000});

        int ans=m[s[s.size()-1]];
        for (int i = s.size() - 2; i >= 0; i--)
        {
            if(m[s[i]]<m[s[i+1]])
                ans -= m[s[i]];
            else
                ans += m[s[i]];
        }
        return ans;
    }
};
// @lc code=end

