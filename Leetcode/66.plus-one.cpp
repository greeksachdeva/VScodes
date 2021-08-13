/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * 
 * 
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
 vector<int> v;
void add(int i)
{
    if(i==0)
    {
        if(v[i]<9)
        v[i]++;
        else
            {
                v[i] = 1;
        v.push_back(0);
            }
        
    }
    else
    {
     if(v[i]<9)
        v[i]++;
        else
            {
                v[i] = 0;
            
                add(i - 1);
            }
            }

}
    vector<int> plusOne(vector<int>& digits) {
       
        v = digits;
        add(v.size() - 1);
        return v;
        }
};
// @lc code=end

