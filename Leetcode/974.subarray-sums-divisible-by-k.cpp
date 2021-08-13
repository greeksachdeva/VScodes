/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int presum = 0;
        int cnt = 0;

        for (int i = 0; i < nums.size();i++)
        {
            presum += nums[i];
            int rem = presum % k;
            if(rem<0) rem += k; // negative no remainder property
            if(m.count(rem))
            {
                cnt += m[rem];
            }
            m[rem]++;
        }
        return cnt;
    }
};
// @lc code=end

