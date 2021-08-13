/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int pro = 0, buy = INT_MAX;
         vector<int> v;
         for (int i = 0; i < prices.size(); i++)
         {
             buy = min(buy, prices[i]);
              if((prices[i] - buy)>0)
              {
                  pro = prices[i] - buy;
                  v.push_back(pro);
                  buy = prices[i];
              }
             
        }
        int proo = 0;
        for (int i = 0; i < v.size();i++)
        {
            if(v[i]>0)
                proo += v[i];
        }
        return proo;
    }
};
// @lc code=end

