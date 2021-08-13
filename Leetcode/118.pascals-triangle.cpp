/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> ans;

        for (int i = 0; i <n;i++)
        {
            vector<int> v(i+1, 1);
            for (int j = 1; j < i;j++)
            {                                                        // 1   1
                v[j] = ans[i - 1][j] + ans[i - 1][j - 1];            // 1  2  1
            }
            ans.push_back(v);
        }
        return ans;
        }
};
// @lc code=end

