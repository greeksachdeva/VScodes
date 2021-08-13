/*
 * @lc app=leetcode id=123 lang=cpp
 *
 * [123] Best Time to Buy and Sell Stock III
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int tr =2;
        if(tr == 0) return 0;
        int buy[tr][prices.size()];
        int sell[tr][prices.size()];
        memset(buy,0,sizeof(buy));
        memset(sell,0,sizeof(sell));
        for(int i=0; i<tr;i++) buy[i][0] = -prices[0];
        for(int i=1; i<prices.size(); i++) {
            int pre = 0;
            for(int j=0; j<tr; j++) {
                buy[j][i] = max(buy[j][i-1], -prices[i] + pre);
                sell[j][i] = max(sell[j][i-1], buy[j][i-1] + prices[i]);
                pre = sell[j][i];
            }
        }
        int ret = 0;
        for(int i=0; i<tr; i++) {
            ret = max(ret,sell[i][prices.size()-1]);
        }
        return ret;
    }
};
// @lc code=end

