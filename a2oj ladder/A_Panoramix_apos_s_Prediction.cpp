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
    vector<int> v;
    for (int i = 2; i <= 50;i++)
    {
        int flag = 0;
        int x = 2;
        while(x<=i/2)
        {
            if(i%x==0)
                {flag = 1;
                    break;
                }
            x++;
        }
        if(flag==0)
            v.pb(i);
    }
    cin >> n >> m;
    int lb = lower_bound(v.begin(), v.end(), n) - v.begin();
    if(v[lb+1]==m) 
     cout << "YES";
                else
                    cout << "NO";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if(v[i]==n) 
    //     {
    //         if(i+1==lb)
    //             cout << "YES"<<v[i+1];
    //             else
    //                 cout << "NO";
    //     }
    // }
}
