#include<bits/stdc++.h>
using namespace std;
#define ll long long 
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
    cin>>t;
    while(t--)
    {
        cin >> x >> n;
        vecll v;
        for (int i = 1; i <= 4; i++)
        {
            if (x % 2 == 0)
            {
                x -= i;
            }
            else
            {
                x += i;
            }
            v.pb(x);
        }
        m = n % 4;
         if( m==0 || m==2)
        {
            if(m==0)  m += 4;
            cout << v[m - 1] << endl;
        }
        else if(m==1)
        {
            n--;
            u = n / 4;
            if(x%2==0)
                cout << v[m - 1] - u * 4 << endl;
                else
                    cout << v[m - 1] + u * 4 << endl;
        }
         else if(m==3)
        {
            n--;
            u = n / 4;
            if(x%2==0)
                cout << v[m - 1] + u * 4 << endl;
                else
                    cout << v[m - 1] - u * 4 << endl;
        }
       
    }
}


