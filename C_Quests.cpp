#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define inputb for(int &i:b) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n, k; cin >> n >> k;
    vector <int> v(n), b(n), prefix(n), msf(n), dp(n);
    input
    inputb
    prefix[0]=v[0];
    msf[0]=b[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+v[i];
    }
    for(int i=1;i<n;i++){
        msf[i] = max(b[i], msf[i-1]);
    }
    // print(msf);
    // print(prefix);
    for(int i=0;i<min(k,n);i++){
        dp[i] = prefix[i] + msf[i]*(k-i-1);
    }
    // print(dp);
    cout << *max_element(dp.begin(),dp.end()) << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}