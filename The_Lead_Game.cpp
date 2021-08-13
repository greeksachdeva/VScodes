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

    cin >> n;
    int ans1, ans2=0;
    int s1 = 0, s2 = 0;
    while(n--)
    {
        int p1, p2;
        cin >> p1 >> p2;
        s1 += p1, s2 += p2;
        if(s1>s2 && (s1-s2)>ans2)
        {
            ans1 = 1;
            ans2 = s1 - s2;
        }
        else if(s2>s1 && (s2-s1)>ans2)
        {
            ans1 = 2;
            ans2 = s2 - s1;

        }

    }
    cout << ans1 << " " << ans2;
}


