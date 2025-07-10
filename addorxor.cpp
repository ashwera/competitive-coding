#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (b < a) {
        if ((a % 2 == 1) && (b == a - 1)) {
            cout << y << "\n";
        } else {
            cout << -1 << "\n";
        }
        return;
    }
    int d = b - a;
    if (d == 0) {
        cout << 0 << "\n";
        return;
    }
    int p = a % 2;
    int even = (p == 0) ? (d + 1) / 2 : d / 2;
    int odd  = d - even;
    int cost = even * min(x, y) + odd * x;
    cout << cost << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}
