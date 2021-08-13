/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n);
        //ans[0] = 0;
        ans.push_back(0);
        if(n==0)
            return ans;

        for (int i = 1; i<=n;i++)
        {
            if(i%2==0)       //every even no n has same no of 1 as in n/2
                ans[i] = ans[i / 2];
            else            // odd has below 1's
                ans[i] = ans[i - 1] + 1;
        }
        return ans;
    }
};
// @lc code=end

