#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb emplace_back
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
    cin>>t;
    while(t--)
    {
        ll a, s;
        cin >> a >> s;
        veci b;
        int fl = 0;

        while(s)
        {
            int flg = 0;
            x = a % 10;
            y = s % 10;
            if(x<=y)
                b.pb(y - x);
            else
            {
                s = s/10;
                y = y + (s % 10) * 10;
                if(x<y && y>=10 && y<=18)
                    b.pb(y - x);
                else
                    {
                        cout << -1 << endl;
                        flg = 1;
                    }
                   
            }
            if(flg)
                {
                    fl = 1;
                    break;
                }
            s = s/10;
            a = a/10;
        }
        if(fl)
            continue;

        if(a)
            cout << -1 << endl;
        else
{
    while (b.back() == 0) b.pop_back();
        reverse(all(b));
        fo(i, b.size()) cout << b[i];
        cout << endl;}
    }
}
// string.find("xyz") !=string::npos  //if xyz is found


