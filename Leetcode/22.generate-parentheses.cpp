/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
vector<string> v;

void generate(string &s,int open,int close)
{
    if(open ==0 && close ==0) 
    {
        v.push_back(s);
        return;
    }
    if(open >0)
    {
        s.push_back('(');
        generate(s, open - 1, close);
        s.pop_back(); 
        } //backtrack s\tep
    if(close>0)
    {
        if(open < close)
        {
            s.push_back(')');
            generate(s, open, close - 1);
            s.pop_back(); // backtrack step
        }
    }
}
    vector<string> generateParenthesis(int n) {
        string s = "";
        generate(s, n, n);
        return v;
        }
};
// @lc code=end

