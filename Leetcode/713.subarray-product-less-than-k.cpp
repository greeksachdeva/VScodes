/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
 */

// @lc code=start
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n = nums.size();
        int ans = 0;
        int l = 0;
        int prod = 1;
        if(k<=1)
            return 0;

        for (int r = 0; r < n;r++)
        {
            prod *= nums[r];
            while(prod>=k)
            {
                prod /= nums[l];
                l++;
            }
            ans += r - l + 1;
        }
        return ans;

        
        }
};
// @lc code=end

