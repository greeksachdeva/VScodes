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
bool pq(long double x)
{

    if (x >= 0) {
 
        long long sr = sqrt(x);
         
      
        return (sr * sr == x);
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(0);
    long double p, q, r;
    cin >> p >> q >> r;
    ll s1, s2, s3;
    s1 = sqrt((p * r) / q);
    s2 = sqrt((p * q) / r);
    s3 = sqrt((q * r) / p);
    cout << 4 * (s1 + s2 + s3);



    
}
