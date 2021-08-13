/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size();i++)
        {
           // if(i>0 && nums[i]==nums[i-1]) //cant put it here for a case like[2,2,2,2,2]
            //     continue;

            int tar = target-nums[i];
            for (int j = i + 1; j < nums.size();j++)
            {
                // if(j>0 && nums[j]==nums[j-1]) //cant put it here for a case like[2,2,2,2,2]
                //     continue;

                int tar2 = tar - nums[j];
                int l = j + 1, h = nums.size() - 1;
                while(l<h)
                {
                    int tarr = nums[l] + nums[h];
                    if(tarr<tar2)
                        l++;
                    else if(tarr>tar2)
                        h--;
                    else if(tarr == tar2)
                    {
                        vector<int> v{nums[i], nums[j], nums[l], nums[h]};
                        ans.push_back(v);
                        while(l<h && nums[l]==nums[l+1])
                            l++;
                        while(h>l && nums[h]==nums[h-1])
                            h--;

                        l++, h--;
                    }    
                }
                while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
               // if(j>0 && nums[j]==nums[j-1])
                //    continue;
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
            // if(i>0 && nums[i]==nums[i-1])
            //         continue;
        }
        return ans;
        }
};
// @lc code=end

