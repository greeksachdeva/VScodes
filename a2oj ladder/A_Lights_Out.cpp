#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> inp(5,vector<int> (5));
    vector<vector<int>> tmp(5,vector<int> (5));
    for (int i = 1; i < 4;i++)
    {
        for (int j = 1; j < 4;j++)
        {
            cin >> inp[i][j];
            tmp[i][j] = inp[i][j];
        }
    }
    
    for (int i = 1; i < 4;i++)
    {
        for (int j = 1; j < 4;j++)
        {
            if(inp[i][j]!=0)
          {  
            tmp[i][j - 1] += inp[i][j];
            tmp[i][j + 1] += inp[i][j];
            tmp[i - 1][j] += inp[i][j];
            tmp[i + 1][j] += inp[i][j];
            }

        }
    }
    for (int i = 1; i < 4;i++)
    {
        for (int j = 1; j < 4;j++)
        {
            if(tmp[i][j]%2==1)
                cout << "0";
                else
                    cout << "1";
        }
        cout << endl;
    }
}