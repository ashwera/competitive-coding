#include <bits/stdc++.h>
using namespace std;
#define modulo 998244353
#define int long long

int modpow(int base, int exp, int mod)
{
    int result=1;
    base%=mod;
     while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), amax (n), bmax(n), b(n), r(n);
    // map<int,int>amax;
    int maxval= -1e18;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(i==0) {
            amax[i]=0;
            maxval = a[0];
        }
        else{
            //store the index of max value so far 
            if(a[i]>maxval)
            {
                amax[i] = i;
                maxval = a[i];
                // cout << "here\n";
            }else
            {
                amax[i] = amax[i-1];
            }
        }
        // cout << amax[i] << " ";
    }
    // cout << endl;
    maxval=-1e18;
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
        if(i==0) {
            bmax[i]=0;
            maxval = b[0];
        }
        else{
            //store the index of max value so far 
            if(b[i]>maxval)
            {
                bmax[i] = i;
                maxval = b[i];
                // cout << "here\n";
            }else
            {
                bmax[i] = bmax[i-1];
            }
        }
    }
    //for r[k], amax[i] is the max value in a till i.  pick that value and its partner b[j] such that j = i-k 

    //consider max in a 
    for(int i=0;i<n;i++)
    {
        //power of p
        // int p = 1 << a[amax[i]];
        int p = modpow(2, a[amax[i]], modulo);
        // int q = 1 << b[amax[i]-i];
        int q = modpow(2, b[i-amax[i]], modulo);
        // cout << a[amax[i]] << " " << b[i-amax[i]] << " " << p << " " << q << endl;
        r[i] = (p + q) % modulo;
    }
    //condier max in b
    for(int i=0;i<n;i++)
    {
        //power of p
        // int p = 1 << a[amax[i]];
        int p = modpow(2, a[i-bmax[i]], modulo);
        // int q = 1 << b[amax[i]-i];
        int q = modpow(2, b[bmax[i]], modulo);
        // cout << a[amax[i]] << " " << b[i-amax[i]] << " " << p << " " << q << endl;
        r[i] = max(r[i], (p + q) % modulo);
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