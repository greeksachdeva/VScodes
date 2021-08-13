/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low<=high)
        {
            int mid = (low + high) / 2;
            if(nums[mid]<target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;

        // int flag = 0;
        // for (int i = 0; i < n;i++)
        // {
        //     if(nums[i]==target)
        //         {flag = 1;
        //         return i;
                
        //         }

        // }
        // if(flag==0)
        // {
        //     for (int i = 0; i < n;i++)
        //     {
        //         if(nums[i]>target)
        //             return i;
        //         if(i==n-1)
        //             return i+1;
        //     }
        // }
        // return 0;
    }
};
// @lc code=end

