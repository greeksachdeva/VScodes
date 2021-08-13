/*
 * @lc app=leetcode id=1465 lang=cpp
 *
 * [1465] Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
 */

// @lc code=start
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());

        vector<int> hh;
        for (int i = 1; i < hc.size();i++)
        {
            hh.push_back(hc[i] - hc[i - 1]);
        }
      
        hh.push_back(h - hc[hc.size() - 1]);
        hh.push_back(hc[0]);  // missed 0th element to include 


        vector<int> vv;
        for (int i = 1; i < vc.size();i++)
        {
            vv.push_back(vc[i] - vc[i - 1]);

        }
        
        vv.push_back(w - vc[vc.size() - 1]);
        vv.push_back(vc[0]);   

       long long int h1 = 0, v1 = 0;
        h1 = *max_element(hh.begin(), hh.end());
        v1 = *max_element(vv.begin(), vv.end());
        // for( auto it: hh)
        // {
        //     h1 = max(h1, it);
        // }
        // for( auto it: vv)
        // {
        //     v1 = max(v1, it);
        // }

        return (h1 * v1)%1000000007;
    }
};
// @lc code=end

