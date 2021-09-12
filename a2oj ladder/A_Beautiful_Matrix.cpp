#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(6, vector<int> (6));
    int x, y;

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6;j++)
           { cin >> v[i][j];
           if(v[i][j]==1)
               {x = i;
           y = j;}
           }
    }

    cout << abs(x - 3) + abs(y - 3);
}