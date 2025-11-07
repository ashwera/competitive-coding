#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

const int MOD = 1e9+7;
const int MAX = 200005; 

long long fact[MAX+1], invfact[MAX+1];

long long modpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }   
    return res;
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= MAX; i++)
        fact[i] = fact[i-1] * i % MOD;

    invfact[MAX] = modpow(fact[MAX], MOD-2);  // inverse via Fermat
    for (int i = MAX-1; i >= 0; i--)
        invfact[i] = invfact[i+1] * (i+1) % MOD;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n-r] % MOD;
}

void solve() {
    int n, k; cin >> n >> k;
    int oc=0,zc=0;
    vector <int> v(n);
    for(int &i:v){
        cin >> i;
        if(i==1) oc++; else zc++;
    }
    int ans=0;
    int t = (k+1)/2;
    //initially start with itne ones, then increase
    while(t<=oc){
        int needzero = k-t;
        ans = (ans + nCr(zc,needzero) * nCr(oc, t)) % MOD;
        t++;
    }
    // at most n/2 zeroes can be taken 
    // at min n/2 ceil ones are taken 
    // ans is oCt where o = total ones, t= taking rn
    //ans is also multiplied by number of zeroes in consideration
    // you can take 0 zeroes till n/2, and the remaining (k-z) ones. 
    // go from 0 to n/2 zeroes and update one too

    cout << ans << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    precompute();
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}