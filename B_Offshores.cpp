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

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector <int> v(n);
    input
    int ans=0;
    vector<int>eff(n);
    for(int i=0;i<n;i++){
        int val = v[i]/x;
        eff[i] = v[i] - (val*y);
        ans+=val*y;
    }
    auto it = max_element(eff.begin(),eff.end());
    int index = it-eff.begin();
    ans -= (v[index]/x) * y;
    ans += v[index];
    cout << ans << endl;
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