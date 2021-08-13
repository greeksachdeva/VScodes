/*
 * @lc app=leetcode id=621 lang=cpp
 *
 * [621] Task Scheduler
 */

// @lc code=start
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v(26, 0);

        for (int i = 0; i < tasks.size();i++)
        {
            v[task[i] - 'A']++;
        }
        sort(v.begin(), v.end());
        int maxv = v.back();
        int t = (maxv - 1) * n;
        for (int i = v.size() - 2; i >= 0 && t > 0;i--)
        {
            t = t - min(maxv - 1, v[i]);
            if(t<=0)
            {
                t = 0;
                break;
            }

        }
        return t + tasks.size();
        
    }
};
// @lc code=end

