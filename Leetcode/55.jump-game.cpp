/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& num) {
        int n = num.size();
        int last = 0;
        for (int i = 0; i < n;i++)
        {
     if(last<i)
         return false;
            last = max(last, i + num[i]);
        }
        
            return true;

       
    }
};
// @lc code=end

