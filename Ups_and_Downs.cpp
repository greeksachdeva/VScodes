//codecheff
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n;i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        for (int i = 0; i < n-1;i++)
        {
            if(i%2==0)
            {
                if(a[i]>a[i+1])
                    swap(a[i], a[i + 1]);
            }
            else
            {
                if(a[i]<a[i+1])
                    swap(a[i], a[i + 1]);
            }
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
