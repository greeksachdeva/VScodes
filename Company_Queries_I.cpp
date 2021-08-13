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

vector<int> adj[200001];
int up[200001][20];
 
void binary_lift(int strt, int par)
{
    up[strt][0] = par;
    for(int i = 1; i < 20; i++)
    {
        if(up[strt][i-1] != -1)
            up[strt][i] = up[up[strt][i-1]][i-1];
        else up[strt][i] = -1;
    }
 
    for(int it : adj[strt])
    {
        if(it != par)
            binary_lift(it, strt);
    }
}
 
int query(int node, int k)
{                                                          
    // if(node == -1 || k == 0)                  // recursive lift node code  
    //     return node;
 
    // for(int i = 19; i >= 0; i--){
    //     if(k >= (1<<i)){
    //         return query(up[node][i], k - (1<<i));
    //     }
    for(int i = 19; i >= 0; i--)   /* i is the powers of 2 of jumps,there can be max log n jumps
                                      so here n is max 2e5 hence log2e5 is approx 19                                     */   
    {                              // iterative lift_node code
        if(node == -1 || k == 0)
            break;
        if(k >= (1<<i)){
            k = k - (1 << i);
            node = up[node][i];
        }
    }
    return node;
}
 
int main() {
        cin >> n >> q;
        for (int i = 2; i < n + 1;i++)
        {
            cin >> x;
            adj[x].push_back(i);
            adj[i].push_back(x);
        }
        binary_lift(1, -1);
        while(q--){
            int n, k;
            cin >> n >> k;
            cout << query(n, k) << '\n';
        }
   return 0;
}


