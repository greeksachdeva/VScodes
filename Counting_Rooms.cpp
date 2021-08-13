#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define fo(i,n) for(ll i=1;i<=n;i++)
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
ll vis[1001][1001];
char ma[1001][1001];
ll isvalid(ll x,ll y)
{
    if(x<=0 || x>n || y<=0 || y>m)
    return 0;
     if(vis[x][y]==1|| ma[x][y]== '#' )
     return 0;

    return 1;
}
void dfs(ll x,ll y)
{
    vis[x][y] = 1;
    if(isvalid(x-1,y))
        dfs(x - 1, y);
    if(isvalid(x,y-1))
    dfs(x, y - 1);
    if(isvalid(x+1,y))
        dfs(x + 1, y);
    if(isvalid(x,y+1))
        dfs(x, y + 1);

}

int main() {
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    
    fo(i,n)
    {
        fo(j,m)
        {
            cin >> ma[i][j];

        }
    }
    memset(vis, 0, sizeof vis);
    ll cnt = 0;
    fo(i,n)
    {
        fo(j,m)
        { 
            if(ma[i][j]=='.' && vis[i][j] == 0)
                {
                    
                    dfs(i, j);
                    cnt++;

                    }

        }
    }
    cout << cnt;
}


 
