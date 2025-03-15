#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        int b0 = b[0];

        bool possible = true;
        int prev = -1e18; 

        for(int i = 0; i < n; i++) {
            int option1 = a[i];
            int option2 = b0 - a[i];
            if (option1 >= prev && option2 >= prev) {
                prev = min(option1, option2);
            } else if (option1 >= prev) {
                prev = option1;
            } else if (option2 >= prev) {
                prev = option2;
            } else {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}