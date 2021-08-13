/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> lft(n, 1), rht(n, 1), ans(n);
        for (int i = 1; i < n;i++)
        {
            lft[i] = lft[i - 1] * nums[i-1]; // nums[i-1] coz we dont have to take that number
        }
        for (int i = n - 2; i >= 0;i--)
        {
            rht[i] = rht[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < n;i++)
            ans[i] = lft[i] * rht[i];

        return ans;
    }
};
// @lc code=end

