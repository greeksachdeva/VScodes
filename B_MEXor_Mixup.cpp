// ******acha Question h*******



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
const int N = 3e5 + 5;
int pow(int base, int exp) {base %= mod;int result = 1;while (exp > 0) {if (exp & 1) result = ((ll)result * base) % mod;base = ((ll)base * base) % mod;exp >>= 1;}return result;}
int T, P, Q, R, U, V,M;
ll t, p, q, r, u, v, n,a,b, m,k;
int main() {
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        ll x;
        if(a%4==0)
            x = 0;
        else if(a%4==1)
            x = a-1;
            else if(a%4==2)
                x =  1;
                else if(a%4==3)
                    x = a;
        if(x==b)
            cout << a << endl;
        else if( (x^b)!=a)
        {
            // Case 2: x!=b and x^b!=a. Then we can add the element x^b to the array since x^b!=a, so the MEX will still be a. The XOR of the array will then be x^x^b=b. The answer is a+1.
            cout << a + 1<<endl;
        }
        else if((x^b)==a)
        {
            //  We can just add x^b^1 and 1, so the XOR of the array will be x^x^b^1^1=b. The answer is a+2.
            cout << a + 2 << endl;
        }
    }
}


