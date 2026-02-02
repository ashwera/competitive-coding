#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    vector<int>b(n);
    input
    for(int &i:b) cin >> i;
    
    int ans=0;
    sort(v.begin(),v.end());
    
    int k = b[0];
    for(int i=0;i<n;i++){
        if(n-k < 0 )break;
        int pow = v[n-k]*(i+1);
        ans = max(ans,pow);
        k += b[i+1];
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