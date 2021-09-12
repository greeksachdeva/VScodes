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
ll t, p, q, r, y, u, v, n, m,k;
string x;
ll prime[100];
int isprime(ll n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
  
    return 1;

}



void solve()
{
     for (int i = 0; i < k;i++)
            {
                if(x[i]=='1' || x[i]=='4' || x[i]=='6' || x[i]=='8' || x[i]=='9')
                    {cout << 1 << endl;
                cout << x[i] << endl;
                return;
                    }
            }
          
            for (int i = 0; i < k;i++)
            {
                
                for (int j = i + 1; j < k;j++)
                {
                    
                    if(!prime[(x[i]-'0')*10+(x[j]-'0')])
                    {
                        cout << 2 << endl;
                        cout << x[i] << x[j] << endl;
                        
                        return;
                    }
                }
               
            }
}
int main() {
    ios_base::sync_with_stdio(0);
    for (int i = 1; i < 100;i++)
        prime[i] = isprime(i);
        cin >> t;
        
        while (t--)
        {
           
            cin >> k;
            cin >> x;
            solve();
        }
}


