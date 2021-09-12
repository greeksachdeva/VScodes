/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& n, int tar) {
        int l, h;
        l = 0, h = n.size() - 1;
        while(l<=h)
        {
            int mid = (l + h) / 2;
            if(n[mid]==tar)
                {
                    return mid;
                }
                else if(n[mid]>=n[0])
                {
                    if(tar<n[0] || tar>n[mid])
                    {
                        l = mid + 1;
                    }
                    else
                        h = mid - 1;
                }
                else
                {
                    if(tar>=n[0] || tar<n[mid])
                        h = mid-1;
                    else
                       l = mid+1;
                }
        }
        return -1;
    }
};
// @lc code=end

