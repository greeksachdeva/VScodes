/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size();i++)
        {
            if(i>0 && nums[i] == nums[i-1])
                continue;
    
            int j = i + 1, k = nums.size() - 1;
            while(j<k)
            {
              int c = nums[i]+nums[j] + nums[k];

                if(c<0)
                      j++;
                else if(c>0)
                      k--;
                else 
                  {
                      vector<int> v;
                      v.push_back(nums[i]);
                      v.push_back(nums[j]);
                      v.push_back(nums[k]);
                      ans.push_back(v);

                      while(j<k && nums[j]==nums[j+1])
                          j++;
                      
                      while(k>j && nums[k]==nums[k-1])
                          k--;
                      j++, k--;
                  }
                  
            }
        }
        return ans;
    }
};
// @lc code=end

