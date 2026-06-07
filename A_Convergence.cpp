#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    input
    int ans=0;
    sort(vall);
    int median = v[n/2];
    if(n%2){
        for(int i=0;i<n/2;i++){
            if(v[i]!=median || v[n-i-1]!=median){
                ans++;
            }
        }
    }
    else{
        int la=1e9;
        for(int i=0;i<n/2;i++){
            if(v[i]!=median || v[n-i-1]!=median){
                ans++;
            }
        }
        la = min(ans, la);
        median = v[(n-1)/2];
        ans=0;
        for(int i=0;i<=n/2;i++){
            if(v[i]!=median || v[n-i-1]!=median){
                ans++;
            }
        }
        ans = min(ans, la);
    }
    cout << ans << endl;
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