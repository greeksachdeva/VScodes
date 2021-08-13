/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size();i++)
        {
            if(k<2 || nums[i]>nums[k-2])
                nums[k++] = nums[i];
        }
        return k;
        
    }
};
// @lc code=end

