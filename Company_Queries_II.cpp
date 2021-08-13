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
vecll adj[200001];
ll up[200001][20];
int lvl[200001];
void dfs(ll strt,ll par,ll level)           // traversing and storing level of each node 
{
    lvl[strt] = level;
    for(auto it: adj[strt])
    {
        if(it!=par)
            dfs(it, strt, level + 1);
    }
}
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

int k_jumps(int node, int k)
{                                                          
    // if(node == -1 || k == 0)                  // recursive lift node code  
    //     return node;
 
    // for(int i = 19; i >= 0; i--){
    //     if(k >= (1<<i)){
    //         return k_jumps(up[node][i], k - (1<<i));
    //     }
   //}
    for(int i = 19; i >= 0; i--)   /* i is the powers of 2 of jumps,there can be max log n jumps
                                      so here n is max 2e5 hence log2e5 is approx 19                                     */
    {              // iterative lift_node code
        if(node == -1 || k == 0)
            break;
        if(k >= (1<<i)){
            k = k - (1 << i);
            node = up[node][i];
        }
    }
    return node;

}


ll LCA(ll n1,ll n2)
{
    if(lvl[n1]<lvl[n2])     
        swap(n1, n2);     // since we write generic code to lift n1 to n2 so lvl[n1] >lvl[n2] so that we can lift n1 to n2 level

    n1 = k_jumps(n1, lvl[n1] - lvl[n2]);  //lifting n1 to the n2 level by k jumps, k= diff in lvl
    if(n1==n2)
        return n1;

    for (int i = 19; i >= 0;i--)     /* i is the powers of 2 of jumps,there can be max log n jumps
                                      so here n is max 2e5 hence log2e5 is approx 19                                     */
    {
        if(up[n1][i]!=up[n2][i])
        {
            n1 = up[n1][i];
            n2 = up[n2][i];
        }
    }
    return k_jumps(n1, 1);
}



int main() {
    ios_base::sync_with_stdio(0);
    cin >> n >> q;
    for (int i = 2; i <= n;i++)
    {
        cin >>x;
        adj[x].pb(i);
        adj[i].pb(x);
    }
    dfs(1, -1, 0);
    binary_lift(1, -1);
    while(q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << LCA(x, y) << endl;
    }
}


