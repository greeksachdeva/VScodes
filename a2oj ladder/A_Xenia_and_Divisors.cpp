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
  
        cin >> n;
        vecll v(n);
        ll c1=0, c2=0, c3=0,c4=0, c6=0;
        fo(i, n)
        {
            cin >> v[i];
            if (v[i] == 1)
                c1++;
            if (v[i] == 2)
                c2++;
            if (v[i] == 3)
                c3++;
                if(v[i]==4)
                c4++;
            if (v[i] == 6)
                c6++;

            if (v[i] == 5 || v[i] == 7)
                {cout << -1;
            exit(0);}
        }

                 if(c2>=c4 && c1== c4+c6 && c2+c3==c4+c6)
                 {
                     fo(i,c4)
                     {
                         cout << "1 2 4" << endl;
                     }
                     c2=c2-c4;
                     fo(i,c2)
                     {
                         cout<< "1 2 6" << endl;
                     }
                     fo(i,c3)
                     cout<<"1 3 6"<<endl;

                 }
                 else
                     cout << -1;
             
    

}
// string.find("xyz") !=string::npos  //if xyz is found


