/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:

    int uniquePaths(int m, int n) {
        // easy h!!!!!!! 
        vector<vector<int>> mat(m+1, vector<int>(n+1));
        for (int i = 0; i < m;i++)
            mat[i][0] = 1;
        for (int i = 0; i < n;i++)
            mat[0][i] = 1;
        for (int i = 1; i < m;i++)
        {
            for (int j = 1; j < n;j++)
            {
                int down = mat[i - 1][j];
                int right = mat[i][j - 1];
                mat[i][j] = down + right;
            }
        }
        return mat[m - 1][n - 1];
    }
};
// @lc code=end

