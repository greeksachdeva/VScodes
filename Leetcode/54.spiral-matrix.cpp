/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int up=0,d=m-1,l = 0,r=n-1;
        vector<int> ans(m*n);
        int s = 0;
        while(up<=d)
        {
            for (int i = l; i <= r;i++)
            {
                ans[s] = mat[up][i];
                s++;
            }
            if(++up>d)
                break;
            for (int i = up; i <= d;i++)
            {
                ans[s] = mat[i][r];
                s++;
            }
            if(--r<l)
                break;
            for (int i = r; i >= l;i--)
            {
                ans[s] = mat[d][i];
                s++;
            }
            if(--d<up)
                break;
            for (int i = d; i >= up;i--)
            {
                ans[s] = mat[i][l];
                s++;
            }
            if(++l>r)
                break;
        }
        return ans;
    }
};
// @lc code=end

