#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) cout << i << " ";
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector<int> v(n), c(n);
    int sum = 0;
    input
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        sum += c[i];
    }

    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++) {
        dp[i] = c[i];
        for (int j = 0; j < i; j++) {
            if (v[j] <= v[i]){
                dp[i] = max(dp[i], dp[j] + c[i]);
            }
        }
    }

    int best = *max_element(dp.begin(), dp.end());
    cout << sum - best << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}
