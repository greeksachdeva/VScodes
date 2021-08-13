/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    void rec(int n,int tar,vector<int> &can,vector<int> &v,int i)
    {
        if(tar<0)
            return;
        if(tar==0)
        {
            ans.push_back(v);
            return;
        }
        for (; i < n;++i)
        {
            v.push_back(can[i]);
            rec(n, tar - can[i], can, v,i);
            v.pop_back();
        }
            
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        int n = can.size();
        vector<int> v;
        rec(n, target, can,v,0);
        return ans;
    }
};
// @lc code=end

