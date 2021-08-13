/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // using same traversing method as spiral matrix I and putting value 1 to n^2
        vector<vector<int>> mat(n,vector<int> (n));
        int up=0,d=n-1,l = 0,r=n-1;
       // vector<int> ans(n*n);
        int s = 1;
        while(up<=d)
        {
            for (int i = l; i <= r;i++)
            {
                mat[up][i] = s;
                s++;
                        }
            if(++up>d)
                break;
            for (int i = up; i <= d;i++)
            {
                 mat[i][r] = s;
                s++;
            }
            if(--r<l)
                break;
            for (int i = r; i >= l;i--)
            {
                mat[d][i] = s;
                s++;
            }
            if(--d<up)
                break;
            for (int i = d; i >= up;i--)
            {
                mat[i][l] = s;
                s++;
            }
            if(++l>r)
                break;
        }
        return mat;
    }
};
// @lc code=end

