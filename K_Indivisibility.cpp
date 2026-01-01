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
    int n; cin >> n;
    int ans=0;
    ans += ((n/2) + (n/3) + (n/5) + (n/7));
    ans -= ((n/6) + (n/15) + (n/35) + (n/14) + (n/21)+(n/10));
    ans += ((n/30)+(n/42)+(n/105)+(n/70));
    ans -= (n/210);
    // cout<<ans << endl;
    ans = n-ans;
    cout << ans;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}