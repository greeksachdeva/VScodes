/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& n, int tar) {
        int l = 0, h = n.size() - 1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            double c = n[mid];

            if((n[mid]>=n[0]) && (tar>=n[0]) || (n[mid]<n[0]) && (tar<n[0]))
            {
                c = n[mid];
            }
            else
            {
                if(tar<n[0])
                 c = -INFINITY;
                else
                c = INFINITY;
            }

            if(tar == c)
                return mid;
            if(tar>c)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return -1;
    }
};
// @lc code=end

