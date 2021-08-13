/*
 * @lc app=leetcode id=532 lang=cpp
 *
 * [532] K-diff Pairs in an Array
 */

// @lc code=start
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>> s;
        
        for (int i = 0; i < nums.size();i++)
        {int l = i, h = nums.size() - 1;
            while (l < h)
            {
                int t = nums[h] - nums[l];
                if (t > k)
                    h--;
                else if (t < k)
                    l++;
                else
                {
                    s.insert({nums[l], nums[h]});
                    l++;
                    h--;
                }
            }}
        return s.size();

    }
};
// @lc code=end

