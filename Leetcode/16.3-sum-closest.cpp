/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int minn = 1005;
        for (int i = 0; i < nums.size()-2;i++)
        {
            

            int j = i + 1, k = nums.size() - 1;
            while(j<k)
            {
              int s = nums[i]+nums[j] + nums[k];
              if(abs(target-s)<abs(target-minn))
                    minn = s;
              if(s==target)
                  return s;
                if(s<target)
                      j++;
                else if(s>target)
                      k--;
                
            }
        }
        return minn;
    }
};
// @lc code=end

