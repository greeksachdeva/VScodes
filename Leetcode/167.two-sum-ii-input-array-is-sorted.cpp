/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> v;
        int l = 0, h = num.size()-1;
        while(l<h)
        {
            if(num[l]+num[h]>target)
            {
                h--;
            }
            else if(num[l]+num[h]<target)
                l++;
            else
            {
                v.push_back(l+1);
                v.push_back(h+1);
                break;
            }    
        }
        return v;
    }
};
// @lc code=end

