#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int x, y;
        cin >> x >> y;

        bool valid = false;

        // Case 1: y = x + 1 (no carry-over)
        if (y == x + 1) {
            valid = true;
        }
        // Case 2: x = y + 1 (no carry-over, swapped)
        else if (x == y + 1) {
            valid = true;
        }
        // Case 3: (x - y + 1) is divisible by 9 and non-negative (carry-over)
        else if (x - y + 1 >= 0 && (x - y + 1) % 9 == 0) {
            valid = true;
        }
        // Case 4: (y - x + 1) is divisible by 9 and non-negative (carry-over, swapped)
        else if (y - x + 1 >= 0 && (y - x + 1) % 9 == 0) {
            valid = true;
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}