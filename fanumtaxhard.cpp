#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        sort(b.begin(), b.end());
        bool possible = true;
        int prev = -1e18; 
        for(int i=0;i<n;i++)
        {
            int perhaps = 1e18;
            auto it = lower_bound(b.begin(),b.end(),prev+a[i]);
            if(it!=b.end())
            {
                perhaps = *it-a[i];
                //new possible value of a[i]
            }
            if(a[i]>=prev)
            {
                perhaps = min(perhaps, a[i]);
                //you have two different options!
            }

            prev = perhaps;
            
            if(perhaps == 1e18) //none of the if blocks got executed
            {
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