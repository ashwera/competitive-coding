#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    input
    vector<int>ans(n),fac(n,1);
    ans[0]=1;
    for(int i=1;i<n;i++){
        v[i] = v[i]*v[i-1];
        fac[i] = fac[i-1]*(i+1);
        ans[i] = v[i] / fac[i];
    }
    print(ans);
    // print(v);
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