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
    string s;
    cin >> s;
    ll c1 = 0, c2 = 0, c3 = 0;
    fo(i, s.size())
    {
  
        if(s[i]=='1')
            c1++;
            if(s[i]=='2')
                c2++;
                if(s[i]=='3')
                    c3++;

    }
    while(c1>0)
    {
      if(c1==1)
        {
            if(c2==0 && c3==0)
               { cout << 1;
                   break;
               }
        }
        cout << 1 << '+';
        c1--;

    }
    while(c2>0)
    {
        if(c2==1)
        {
            if(c3==0)
               { cout << 2;
                   break;
               }
        }
        cout << 2 << '+';
        c2--;
        
    }
    while(c3>0)
    { 
        if(c3==1) {
            cout << 3;
            break;
        }
        cout << 3 << '+';
        c3--;
        
    }
}
