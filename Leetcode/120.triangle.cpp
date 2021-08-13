/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {

        vector<int> minn = tri.back();
        for (int i = tri.size() - 2; i >= 0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                minn[j] = tri[i][j] + min(minn[j], minn[j + 1]);
            }
        }
        return minn[0];
    }
};
// @lc code=end

