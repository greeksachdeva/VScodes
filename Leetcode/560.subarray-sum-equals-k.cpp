/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
          unordered_map<int,int> m;
        m[0] =1;
        int sum =0; int cnt=0;
        for(int i =0;i<nums.size();i++)
        {
            sum += nums[i];
            if(m.count(sum-k)) 
                cnt+=m[sum-k];
            
            m[sum]++;
        }
        
        return cnt;
    }
};
// @lc code=end

