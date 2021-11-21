#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define fo(i,n) for(ll i=0;i<n;i++)
#define fo1(i,n) for(ll i=1;i<=n;i++)
#define all(v) v.begin(), v.end()
#define sortall(v) sort(all(v))
#define sortalld(v) sort(all(v),greater<ll>())
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int> veci;
typedef vector<ll>  vecll;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
const int mod = 1000000007;
int pow(int base, int exp) {base %= mod;int result = 1;while (exp > 0) {if (exp & 1) result = ((ll)result * base) % mod;base = ((ll)base * base) % mod;exp >>= 1;}return result;}
int T, P, Q, R, X, Y, U, V, N,M;
ll t, p, q, r, x, y, u, v, n, m,k;
int main() {
    ios_base::sync_with_stdio(0);
    cin>>n;
    vecll v[100001];
    fo(i,n)
    {
        cin>>x;
        v[x].pb(i);
    }
    vpii ans;
    for (int i = 0; i < 100001;i++)
    {
        if(v[i].size()==0) continue;
        else if(v[i].size()==1)
        {
            ans.pb({i,0});
        }
        else 
        {
            ll d = v[i][1]-v[i][0];
            int flag = 1;
            for (int j = 1;j<v[i].size();j++)
            {
                if(v[i][j]-v[i][j-1]!=d)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                ans.pb({i,d});
            }
        }
        
    }
    cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size();i++)
    {
        cout<<ans[i].F<<" "<<ans[i].S<<endl;
    }
}
// string.find("xyz") !=string::npos  //if xyz is found


