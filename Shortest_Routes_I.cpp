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
    cin >> n >> m;
    vector<pair<ll, ll>> adj[n + 1];
    for (int i = 0; i < m;i++)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        adj[u].pb(mp(v, c));
    }
    ll source = 1;
    priority_queue<pl, vector<pl>, greater<pl>> pq;
    vecll dist(n + 1, 1e17); // source to every is infinty(not INT_MAX) so 1e17 at first
    dist[source] = 0;
    pq.push(mp(dist[source], source));
    while(!pq.empty()) // bfs like implementstion
    {
        ll currdist = pq.top().F;
        ll prevnode = pq.top().S;
        pq.pop();
       if(dist[prevnode]<currdist)
           continue;
        for(auto it : adj[prevnode])
        {
            ll nextnode = it.F;
            ll nextdist = it.S;
            if(currdist + nextdist<dist[nextnode])
            {
                dist[nextnode] = dist[prevnode] + nextdist; //////////////
                pq.push(mp(dist[nextnode], nextnode));
            }
        }
    }
    fo1(i,n) cout << dist[i] << " ";    
}


