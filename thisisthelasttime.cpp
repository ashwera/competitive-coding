#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
    int n,k; cin >> n >> k;
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++)
    {
        vector<int>casino;
        for(int i=0;i<3;i++)
        {
            int a;
            cin >> a;
            casino.push_back(a);
        }
        v[i]=casino;
    }
    
    sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b) 
    {
        return a[0] < b[0]; // Sort by the first column 
    });
     
    for (int i = 0; i < n; i++) {
        if (v[i][0] <= k && k <= v[i][1]) 
        {
            k = max(k,v[i][2]); 
        }
    }
    cout << k << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}