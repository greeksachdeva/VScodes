/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
   void calc(vector<vector<int>> &ans,int pt,vector<int> nums)
    {
        if(pt== nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i =pt;i<nums.size();i++)
        {
            swap(nums[i],nums[pt]);
            calc(ans,pt+1,nums);
            
            swap(nums[i],nums[pt]); // backtrack ki condition
            
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        calc(ans,0,nums);
        return ans;
        
    }
};
// @lc code=end

