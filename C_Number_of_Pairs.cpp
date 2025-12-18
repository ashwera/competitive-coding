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
    int n,l,r; cin >> n >> l >> r;
    vector <int> v(n);
    input
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        auto lo = lower_bound(v.begin()+i+1, v.end(), l - v[i]);
        auto hi = upper_bound(v.begin()+i+1, v.end(), r - v[i]);
        count += (hi - lo);
        // cout << "for " << v[i] << " the count is " << count << endl;
    }
    cout << count << endl;
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