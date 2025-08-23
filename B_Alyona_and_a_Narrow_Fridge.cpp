#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

bool can_fit(vector<int>& v, int h, int k) {
    vector<int> firstb(v.begin(), v.begin() + k);
    sort(firstb.rbegin(), firstb.rend()); 

    int total_height = 0;
    for (int i = 0; i < k; i += 2) {
        total_height += firstb[i]; 
    }
    return total_height <= h;
}

void solve() {
    int n, h; 
    cin >> n >> h;
    vector<int> v(n);
    input

    int l = 0, r = n, count = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (can_fit(v, h, mid)) {
            count = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}
