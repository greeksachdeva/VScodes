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
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<string> s;
        fo(i,n)
        {
            string str;
            cin >> str;
            s.pb(str);
        }
        if(s[0].size()%2==0)
        {
            s[0][0] -= 32;
            cout<<s[0];
        }
        else{
            reverse(s[0].begin(),s[0].end());
             s[0][0] -= 32;
             cout<<s[0];
        }

        for (int i = 1; i < s.size();i++)
        {
            if(s[i].size()%2 ==0)
            {
                cout<<" "<<s[i];

            }
            else
            {
                reverse(s[i].begin(),s[i].end());
                cout<<" "<<s[i];
            }
        }

        cout << endl;
    }
}
// string.find("xyz") !=string::npos  //if xyz is found


