#include <bits/stdc++.h>
using namespace std;
#define modulo 998244353
#define int long long

int modpow(int a, int b)
{
    if (b == 0)
        return 1;
    int res = modpow(a, b / 2) % 998244353;
    if (b % 2)
        return res * res * a % 998244353;
    else
        return res * res % 998244353;
}
 

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), r(n);
    // map<int,int>amax;
    int maxina=0,maxinb=0;
    
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
   
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] > a[maxina])
        {
            maxina=i;
        }

        if(b[i] > b[maxinb])
        {
            maxinb=i;
        }

        if(a[maxina] > b[maxinb])
        {
            r[i] = (modpow(2,a[maxina]) + modpow(2,b[i-maxina]))%modulo;
        }
        else if(a[maxina] < b[maxinb])
        {
            r[i] = (modpow(2,b[maxinb]) + modpow(2,a[i-maxinb]))%modulo;
        } //if they're equal, choose the next big option.
        else if(b[i-maxina] > a[i-maxinb])
        {
            r[i] = (modpow(2,a[maxina]) + modpow(2,b[i-maxina]))%modulo;
        }
        else
        {
            r[i] = (modpow(2,b[maxinb]) + modpow(2,a[i-maxinb]))%modulo;  
        }
    }
    for(int num:r)
    {
        cout << num << " ";
    }
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}