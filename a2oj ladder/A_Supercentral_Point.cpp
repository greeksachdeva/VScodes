#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define fo(i,n) for(ll i=0;i<n;i++)
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
    t = n;
    vector<pair<ll, ll>> v;
    while (t--)
    {
        cin >> x >> y;
        v.push_back(mp(x, y));
    }
    // fo(i,n) 
    // {
    //     cout << v[i].F << " " << v[i].S << " ";
    // }

    ll c = 0;
    for (int i = 0; i < n; i++)
    {
         ll cnt1 = 0,cnt2=0,cnt3=0,cnt =0;
        for (int j = 0; j < n;j++)
        {
            
            if (v[j].first < v[i].first && v[j].S == v[i].S)
                cnt1++;
                    if(v[j].first>v[i].first && v[j].S==v[i].S)
                cnt2++;
        }
        for (int j = 0; j < n;j++){
                    if(v[j].first==v[i].first && v[j].S>v[i].S)
                cnt3++;
                if(v[j].first==v[i].first && v[j].S<v[i].S)
                cnt++;
        }
      // cout << cnt << " ";
        if (cnt > 0 && cnt1>0 && cnt2 > 0 && cnt3>0)
            c++;
    }
    cout << c;
}
