/*
 * @lc app=leetcode id=289 lang=cpp
 *
 * [289] Game of Life
 */

// @lc code=start
class Solution {
public:
    int live(int i,int j,int m,int n,vector<vector<int>>& edit)
    {
        int cnt = 0;
        if (i > 0)
            if (edit[i - 1][j] == 1)
                cnt++;

        if(i<m-1) 
            if(edit[i+1][j]==1) 
                cnt++;

        if(j>0) 
            if(edit[i][j-1])
                cnt++;
        if(j<n-1) 
            if(edit[i][j+1]==1)
                cnt++;
        if(i>0 && j>0)
            if(edit[i-1][j-1])
                cnt++;
        if(i>0 && j<n-1)
            if(edit[i-1][j+1])
                cnt++;
        if(i<m-1 && j>0)
            if(edit[i+1][j-1])
                cnt++;        
        if(i<m-1 && j<n-1)
            if(edit[i+1][j+1])
                cnt++;
        

        return cnt;
    }
    void gameOfLife(vector<vector<int>>& b) {
        vector<vector<int>> edit = b;
        int m = b.size(), n = b[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                 if(b[i][j] ==0 && live(i,j,m,n,edit)==3)
                    b[i][j] = 1;
                else if(b[i][j] ==1 && live(i,j,m,n,edit)<2 )
                    b[i][j] = 0;
                else if(b[i][j]==1 && (live(i,j,m,n,edit)==2 || live(i,j,m,n,edit)==3))
                    b[i][j] = 1;
                else if(b[i][j]==1 && live(i,j,m,n,edit)>3)
                    b[i][j] = 0;
               
            }
            
        }
    }
};

// @lc code=end

