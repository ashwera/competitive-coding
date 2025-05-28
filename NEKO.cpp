#include <bits/stdc++.h>
using namespace std;
#define int long long

int conflicts_for(int row, int col, int n, const vector<bool>& xblock, const vector<bool>& yblock) {
    int cnt = 0;
    if (row == 1) {
        if (col >= 0 && col < n && yblock[col]) cnt++; //check bounds and check if it's blocked in the other row.
        if (col - 1 >= 0 && yblock[col - 1]) cnt++; //adj rows 
        if (col + 1 < n && yblock[col + 1]) cnt++;
    } else {
        if (col >= 0 && col < n && xblock[col]) cnt++;
        if (col - 1 >= 0 && xblock[col - 1]) cnt++;
        if (col + 1 < n && xblock[col + 1]) cnt++;
    }
    return cnt;
}


void solve() {
    int n, q;
    cin >> n >> q;

    vector<bool> xblock(n, false), yblock(n, false);
    int conflict = 0;

    while (q--) {
        int x, y;
        cin >> x >> y;
        y--;
    int c = conflicts_for(x, y, n, xblock, yblock);

        if (x == 1) {

            if (xblock[y]) //alr blocked, remove conflicts, unblock
            {
                conflict -= c;
                xblock[y] = false;
            } else {
                xblock[y] = true;
                conflict += c;
            }
        } else {
            if (yblock[y]) {
                // Removing block: reduce conflicts
                conflict -= c;
                yblock[y] = false;
            } else {
                // Adding block: increase conflicts
                yblock[y] = true;
                conflict += c;
            }
        }
        cout << (conflict == 0 ? "Yes\n" : "No\n");
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
