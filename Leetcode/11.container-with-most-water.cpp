/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n - 1;
        int area = 0;
        while(i<j)
        {
            int h = min(height[i], height[j]);
            area = max(area, h * (j - i));
            while(height[i]<=h && i<j)
                i++;
            while(height[j]<=h && j>i)
                j--;
        }
        return area;
    }
};
// @lc code=end

