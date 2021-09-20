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
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<pair<ll, ll>> a(n), b(n);
        fo(i, n) cin >> a[i].first, a[i].second = i;
        fo(i, n) cin >> b[i].first, b[i].second = i;
        if(a[0]<b[0])
           { cout << 0 << '\n'; continue;}

           sortall(a);
           sortall(b);
           ll ans = 1e9;
           vecll mn(n);
           mn[n - 1] = b[n-1].second;
           for (int i = n - 2; i >= 0;i--)
           {
               mn[i] = min(mn[i + 1], b[i].second); // we want min at mn[0]
           }
           fo(i,n) 
           {
               ans = min(ans, a[i].second + mn[i]);
           }
           cout << ans << endl;
    }
}


