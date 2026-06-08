#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:h) cin >> i;
#define vall v.begin(),v.end()
#define INF 1e18

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector <int> h(n);
    input
    vector<int> ans(n, 0);
    for(int i = 0; i < n; i++){
        vector<int> clockwise(n, 0), anticlockwise(n, 0);
        int run = 0;
        for(int k = 1; k < n; k++){
            run = max(run, h[(i+k-1)%n]);
            clockwise[k] = run;
        }
        run = 0;
        for(int k = 1; k < n; k++){
            run = max(run, h[(i-k+n)%n]);
            anticlockwise[k] = run;
        }
            
        for(int k = 1; k < n; k++){
            ans[i] += min(clockwise[k], anticlockwise[n-k]);
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
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