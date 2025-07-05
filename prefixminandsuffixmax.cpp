#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> pmin(n);
        pmin[0] = a[0];
        for (int i = 1; i < n; i++) {
            pmin[i] = min(pmin[i-1], a[i]);
        }
        
        vector<int> smax(n);
        smax[n-1] = a[n-1];
        for (int i = n-2; i >= 0; i--) {
            smax[i] = max(smax[i+1], a[i]);
        }

        string ans(n, '0');
        for (int i = 0; i < n; i++) {
            if (a[i] == pmin[i] || a[i] == smax[i]) {
                ans[i] = '1';
            }
        }

        cout << ans << endl;
}

signed main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
}
}
