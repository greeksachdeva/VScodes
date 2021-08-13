/*
 * @lc app=leetcode id=1423 lang=cpp
 *
 * [1423] Maximum Points You Can Obtain from Cards
 */

// @lc code=start
class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        // sliding window
        int n = c.size();
        int i = 0;
        int j = n - k;
        int total = 0;
        for (int i = n - k; i < n;i++)
            total += c[i];

        int newt = total;
        while(k--)
        {
            newt = max(newt, total += c[i] - c[j]);
            i++, j++;
        }
        return newt;
    }
};
// @lc code=end

