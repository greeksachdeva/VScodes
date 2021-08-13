/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        for (int i = 0; i < matrix.size();i++) // transpose
        {
            for (int j = 0; j < i;j++)
                swap(matrix[i][j], matrix[j][i]);
        }

        for (int i = 0; i < matrix.size();i++) // reversing each row
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
// @lc code=end

