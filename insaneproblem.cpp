#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    int count = 0;
    set<pair<int, int>> visited;

    int power = 1;
    while (true) {
        int lowerx = max(l1, (l2 + power - 1) / power);
        int higherx = min(r1, r2 / power);
        if (lowerx <= higherx) //if higher is not more than lower, we have 0 x's
        {
            count += higherx - lowerx + 1;
        }

        if (power > (r2 / k)) break; // avoid overflow
        power *= k; //new kn = k^m*k. intially, m was zero so k was 1 
    }

    cout << count << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) solve();
}
