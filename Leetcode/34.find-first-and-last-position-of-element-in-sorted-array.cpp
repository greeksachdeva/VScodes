/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=starts
class Solution {
public:
    vector<int> searchRange(vector<int>& num, int tar) {
        // WORST SOLUTION FULL BRUTE FORCE
        int l=0,h=num.size()-1;
        int n = num.size();
        vector<int> v;
        while(l<=h)
        {
            int mid = (l + h) / 2;
            if(num[mid]>tar)
               { h = mid - 1;
               if(h>0 && h<n && num[h]==tar )
                   v.push_back(h);
               }
            else if(num[mid]<tar)
               { l = mid + 1;
               if(l>=0 && l<n && num[l]==tar )
                   v.push_back(l);
               }
         
            else{
                v.push_back(mid);
                if(n!=1 && (v[0]!=mid-1 ) && mid>0 && num[mid-1]==tar)
                {
                     v.push_back(mid - 1);
                     int i = 2;
                     while(mid-i>=0 && num[mid-i]==tar)
                     {
                          v.push_back(mid - i);
                          i++;
                     }
                }
                   
                for (int i = mid + 1; i < num.size();i++)
                {
                    if(num[i]==tar)
                       v.push_back(i);
                    else 
                    break;
                }
                if(v.size()==1)
                    v.push_back(v[0]);
                 sort(v.begin(),v.end());
                 vector<int> ans(2);
                 ans[0] = v[0], ans[1] = v[v.size() - 1];
                 return ans;
            }    


        }
        return vector<int>(2, -1);
        }
};
// @lc code=end

