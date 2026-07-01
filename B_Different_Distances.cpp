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
    vector<int> v(4 * n + 1);
    for (int x = 1; x <= n; x++) {
        v[x] = x;
        v[n + x] = x;
        v[3 * n + 1 - x] = x;
        v[3 * n + x] = x;
    }

    if (n % 2 == 1) {
        int x = (n + 1) / 2;
        swap(v[3 * n + 1 - x], v[3 * n + 2 - x]);
    }

    for (int i = 1; i <= 4 * n; i++) {
        cout << v[i];
        if (i < 4 * n) cout << " ";
    }
    cout << "\n";
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