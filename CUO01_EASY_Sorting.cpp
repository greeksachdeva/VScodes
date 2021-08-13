#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tr(it, v) for(auto it = v.begin(); it != v.end(); it++)
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
    cin >> t;
    int tt = t;
    while(t--)
    {
        cin >> n;
        vecll v(n);
        ll cnt = 0;
        for (int i = 0; i < n;i++)
           cin >> v[i];

        for (int i = 0; i < n;i++)
        {
            int mini = i;
            for (int j = i + 1; j < n;j++)
            {
                if(v[j]<v[mini])
                {
                    mini = j;  
                }
            }
            if(mini!=i)
            {
                swap(v[i], v[mini]);
                cnt++;
            }
        }
        cout << "Case " << tt - t  << ": " << cnt << endl;
    }
}


