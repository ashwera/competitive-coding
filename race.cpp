#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a, x, y;
    cin >> a >> x >> y;

    int disx = abs(a - x);
    int disy = abs(a - y);

    bool found = false;
    for (int b = min(x, y) - 100; b <= max(x, y) + 100; ++b) {
        if (b == a) continue;
        int distx = abs(b - x);
        int disty = abs(b - y);
        if (distx < disx && disty < disy) {
            found = true;
            break;
        }
    }

    if (found) cout << "Yes" << endl;
    else cout << "No" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) solve();
}