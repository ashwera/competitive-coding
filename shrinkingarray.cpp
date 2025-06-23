#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int count = 1e18;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(i > 0) {
            if(v[i] == v[i - 1] || abs(v[i] - v[i - 1]) == 1)
                count = 0;
        }
    }

    if(count == 0) {
        cout << 0 << endl;
        return;
    }

    if(n == 2) {
        cout << -1 << endl;
        return;
    }

    int prev, next;
    for(int i = 0; i < n - 1; i++) {
        int a = v[i];
        int b = v[i + 1];

        prev = (i > 0) ? v[i - 1] : 1e18;
        next = (i < n - 2) ? v[i + 2] : 1e18;

        int low = min(a, b), high = max(a, b);
        for(int x : {prev, prev + 1, prev - 1, next, next + 1, next - 1}) {
            if(x >= low && x <= high) {
                cout << low <<" " << high;
                count = 1;
                break;
            }
        }

        if(count == 1) break;
    }

    if(count==1)
    cout << 1 << endl;
    else cout << -1 << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}
