#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tr(it, s) for(auto it = s.begin(); it != s.end(); it++)
#define fo(i,n) for(ll i=0;i<n;i++)
#define fo1(i,n) for(ll i=1;i<=n;i++)
#define all(s) s.begin(), s.end()
#define sortall(s) sort(all(s))
#define sortalld(s) sort(all(s),greater<ll>())
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int> veci;
typedef vector<ll>  vecll;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
const int mod = 1000000007;
int pow(int base, int exp) {base %= mod;int result = 1;while (exp > 0) {if (exp & 1) result = ((ll)result * base) % mod;base = ((ll)base * base) % mod;exp >>= 1;}return result;}
int T, P, Q, R, X, Y, U , N,M;
ll t, p, q, r, x, y, u, n, m,k;
int main() {
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
        string s;
        cin >> n;
        cin >> s;
        if (n == 1)
        {
            if (s[0] == '?')
                cout << 'B' << endl;
            else
                cout << s << endl;
            continue;
        }
        if (s[1] == 'R' && s[0] == '?')
            s[0] = 'B';
        else if (s[1] == 'B' && s[0] == '?')
            s[0] = 'R';
        if (s[n - 2] == 'R' && s[n - 1] == '?')
            s[n - 1] = 'B';
        else if (s[n - 2] == 'B' && s[n - 1] == '?')
            s[n - 1] = 'R';
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '?' && (s[i + 1] == 'B' || s[i - 1] == 'B'))
                s[i] = 'R';
            if (s[i] == '?' && (s[i + 1] == 'R' || s[i - 1] == 'R'))
                s[i] = 'B';
            if ((s[i] == 'B' || s[i] == 'R') && s[i - 1] == '?')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] == '?' && (s[j + 1] == 'B' || s[j - 1] == 'B'))
                        s[j] = 'R';
                    if (s[j] == '?' && (s[j + 1] == 'R' || s[j - 1] == 'R'))
                        s[j] = 'B';
                }
            }
        }
        if (s[n - 1] == '?' && s[n - 2] == 'B')
            s[n - 1] = 'R';
        if (s[n - 1] == '?' && s[n - 2] == 'R')
            s[n - 1] = 'B';
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                if (k == 1)
                    s[i] = 'B';
                else
                    s[i] = 'R';
            k *= -1;
        }

        cout << s << endl;
        // if(s[n-1]=='?' && s[n-2]=='B')
        //     s[n-1] = 'R';
        // if(s[n-1]=='?' && s[n-2]=='R')
        //     s[n-1] = 'B';
        // if(s[n-1]=='?' && s[n-2]=='?')
        //     s[n-1] = 'R';
        // for (int i = 1; i < n;i++)
        // {
        //     if(s[i]=='?')
        //     {
        //         if(s[i-1]=='B')
        //             s[i] = 'R';
        //         else
        //             s[i] = 'B';
        //     }
            
        // }
        // cout << s << endl;
    }
}


