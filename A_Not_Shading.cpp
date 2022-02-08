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
ll t, p, q, r, x, y, u, v, n, m,c,k;
int main() {
    ios_base::sync_with_stdio(0);
    cin >> t;
   
    while (t--)
    {  x = 0;
        cin >> n >> m >> r >> c;
        char v[n+1][m+1];
        int flg = 0;
        fo1(i, n)
        {
            fo1(j,m)
            {
                cin >> v[i][j];
                
            }
        }

        fo1(i, n)
        {
            fo1(j,m)
            {
               
                if(v[i][j]=='B')
                    {flg = 1;
                    if(i==r)
                        x = 1;
                    if(j==c)
                        x = 1;
                    }
            }
        }
        if(v[r][c]=='B')
        {
            cout << "0" << endl;
            continue;
        }
        else if(flg==0)
            {cout << -1 << endl;
             continue;}

        else if(flg==1 && x==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        else
        {
            cout<<"2"<<endl;
            continue;
        }
        }
    }

// string.find("xyz") !=string::npos  //if xyz is found


