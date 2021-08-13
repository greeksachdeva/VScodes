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
char room[1001][1001];
//ll vis[1001][1001];
vector<vector<ll>>vis(1001,vector<ll>(1001,0));
vector<vector<ll>>path(1001,vector<ll>(1001,3000));
ll isvalid(ll x,ll y)
{
    if(x<0 || x>n || y<0 || y>m)
        return 0;
        if(room[x][y]=='#' || vis[x][y]==1)
            return 0;
 
        return 1;
}
 void bfs()
 {
     ll n1, n2;
     queue<pl> q;
     q.push(mp(x, y));
     vis[x][y] = 1;
     path[x][y] = 0;
     while(!q.empty())
     {
          n1 =q.front().F;
          n2 = q.front().S;
         q.pop();
         if(room[n1][n2]=='B')
             break;
 
          if(n1+1<n && room[n1+1][n2]!='#' && !vis[n1+1][n2])
         {
             q.push(mp(n1+1, n2));
             vis[n1+1][n2] = 1;
             path[n1+1][n2] = path[n1][n2]+1;
         }
          if(n2+1<m && room[n1][n2+1]!='#' && !vis[n1][n2+1])
         {
             q.push(mp(n1, n2+1));
             vis[n1][n2+1] = 1;
             path[n1][n2+1] = path[n1][n2]+1;
         }   
         if(n1-1>=0 && room[n1-1][n2]!='#'&&!vis[n1-1][n2])
         {
             q.push(mp(n1 - 1, n2));
             vis[n1 - 1][n2] = 1;
             path[n1 - 1][n2] = path[n1][n2]+1;
         }
         if(n2-1>=0 && room[n1][n2-1]!='#' && !vis[n1][n2-1])
         {
             q.push(mp(n1, n2-1));
             vis[n1][n2-1] = 1;
             path[n1][n2-1] = path[n1][n2]+1;
         }   
     }
     x = n1, y = n2; // assigning B cordinates
    
  }
int main() {
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            cin >> room[i][j];
            if(room[i][j]=='A')
            {
                x = i;
                y = j;
            }
            if(room[i][j] == 'B')
            {
                p = i;
                r = j;
            }
        }
    }

    bfs();
     if(vis[p][r]==0)
    {
        cout << "NO" << endl;
        return 0;
    } 
    cout << "YES" << endl;
    cout << path[x][y] << endl;
    string ans="";
        while(room[x][y]!='A'){
            
           if(x+1<n && path[x][y]==path[x+1][y]+1) ans+='U',x++;
            else if(x-1>=0 && path[x][y]==path[x-1][y]+1) ans+='D',x--;
            else if(y+1<m && path[x][y]==path[x][y+1]+1) ans+='L',y++;
            else if(y-1>=0 && path[x][y]== path[x][y-1]+1) ans+='R',y--;
            
 
        }
     
         reverse(all(ans));
         cout<<ans<<endl;
 
 
}