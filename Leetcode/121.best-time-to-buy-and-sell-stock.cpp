/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro = 0, buy = INT_MAX;
        for (int i = 0; i < prices.size();i++)
        {
            buy = min(buy, prices[i]);
            pro = max(pro, prices[i] - buy);
        }
        return pro;
    }
};
// @lc code=end

