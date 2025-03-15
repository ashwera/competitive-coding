#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    //ya toh do 0 se n-2 tak
    //if not reached x then ust make last el x 
    //if reached x just fill rest w 0
    if (x == 0) {
        for (int i = 0; i < n; ++i) {
            a[i] = 0;
        }
    } else {
        int MEX = 0;
        while ((MEX < n) && ((MEX | x) == x)) {
            a[MEX] = MEX;
            MEX++;
        }
        if (MEX < n) {
            a[MEX] = x;
            for (int i = MEX + 1; i < n; ++i) {
                a[i] = 0;
            }
        } else {
            int ORvalue = 0;
            for (int i = 0; i < n; ++i) {
                ORvalue |= a[i];
            }
            if (ORvalue != x) {
                a[n - 1] = x | ORvalue;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

}