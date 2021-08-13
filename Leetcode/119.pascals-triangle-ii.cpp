/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
         int n = rowIndex+1;
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
        return ans[rowIndex];
    }
};
// @lc code=end

