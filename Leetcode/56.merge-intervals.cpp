/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(), in.end()); // will sort using 0th element of each sub vector
        vector<vector<int>> ans;
        ans.push_back(in[0]);
        for (int i = 1; i < in.size();i++)
        {
            if(ans.back()[1] >= in[i][0])
            {
                ans.back()[1] = max(ans.back()[1], in[i][1]);
            }
            else
                ans.push_back(in[i]);
        }
        return ans;
    }
};
// @lc code=end

