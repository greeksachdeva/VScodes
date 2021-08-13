/*
 * @lc app=leetcode id=1010 lang=cpp
 *
 * [1010] Pairs of Songs With Total Durations Divisible by 60
 */

// @lc code=start
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> rem(60, 0);
        int cnt = 0;
        for (int i = 0; i < time.size();i++)
        {
            int x = time[i] % 60;
            if(x==0)
                cnt += rem[x];
            else
                cnt += rem[60 - x];

            rem[x]++;
        }
        return cnt;
    }
};
// @lc code=end

