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
    cin>>t;
    while(t--)
    {
        ll x=1, y=1,z=-1;
        cin >> n;
        vecll v(n+1);
        fo1(i, n) cin >> v[i];

        fo1(i,n)
        {
            if(i!=v[i])
            {
                x = i;
                z = i;
                break;
            }
        }
        if(z ==-1)
        {
            fo1(i,n)
            cout<<v[i]<<" ";
            cout<<endl;

        }   
        else
        {
            fo1(i,n)
            {
                if(v[i]==z)
                {
                    y = i;
                    break;
                }
            }

            reverse(v.begin()+x , v.begin()+y+1);
            fo1(i,n)
                cout<<v[i]<<" ";
                cout << endl;
            
        }
    }
}
// string.find("xyz") !=string::npos  //if xyz is found


