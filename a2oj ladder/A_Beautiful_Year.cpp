#include<bits/stdc++.h>
using namespace std;
int check(long long int n)
{
    vector<int> v;
    while(n>0)
    {
        v.push_back(n % 10);
        n = n / 10;
    }
    for (int i = 0; i < 4;i++)
    {
        for (int j = i + 1; j < 4;j++)
        if(v[i]==v[j])
            return 0;
    }
    return 1;
}
int main()
{
    long long int n;
    cin >> n;
    int flag = 0;
    while(!flag)
    {
        if(check(++n))
            {
                cout << n;
                flag = 1;
            }
    }
}