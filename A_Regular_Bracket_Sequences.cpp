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

void generate(vector<string> &ans,ll n){
       vector<string> result;
       ll i = 0;
       stack<pair<string, pair<int, int>>> st;
       st.push({"", {0, 0}});
       int l, r;
       string s;
       while (!st.empty())
       {
           pair<string, pair<int, int>> p;
           p = st.top();
           st.pop();
           l = p.second.first;
           r = p.second.second;
           s = p.first;
           if (l < r || l > n || r > n)
               continue; // exceed the bundary -> skip the process below
           if (l == n && r == n)
               {result.push_back(s);
                   i++;
               }
           st.push({s + "(", {l + 1, r}});
           st.push({s + ")", {l, r + 1}});
           if(i==n)
               break;
       }
        ans =  result;
}
       

int main() {
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<string> ans;
        
        generate(ans,n);
        ll x = n;
        for (auto it : ans)
        {
            if(x==0)
                break;
            cout << it << endl;
            x--;
        }
    }
}


