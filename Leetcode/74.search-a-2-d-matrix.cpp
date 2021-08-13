/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size(), n = mat[0].size();

        int l = 0, h = m * n - 1;
        while(l<=h)
        {
            int mid = (l + h) / 2;
            if(tar>mat[mid/n][mid%n])
            {
                l = mid + 1;
            }
            else if(tar<mat[mid/n][mid%n])
            {
                h = mid - 1;
            }
            else
            {
                return true;
            }
        }
        return false;
        }
};
// @lc code=end

