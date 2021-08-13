/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution {
public:
int isPal(string s,int l,int h)
{
    while(l<=h)
      if(s[l++]!=s[h--])
          return 0;

    return 1;
}
void rec(int idx,string s,vector<vector<string>> &ans,vector<string> v)
{
    if(idx==s.size())
    {
        ans.push_back(v);
        return;
    }
    for (int i = idx; i < s.size();i++)
    {
        if(isPal(s,idx,i))
        {
            v.push_back(s.substr(idx, i - idx + 1));
            rec(i + 1, s, ans, v);
            v.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        rec(0, s, ans, v);
        return ans;
        }
};
// @lc code=end

