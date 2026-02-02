#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:a) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n, q; cin >> n >> q;
    vector <int> a(n),b(n);
    for(int &i:a) cin >> i;
    for(int &i:b) cin >> i;
    a[n-1] = max(a[n-1],b[n-1]);
    for(int i=n-2;i>=0;i--){
        a[i] = max(max(a[i],a[i+1]),b[i]);
    }
    vector<int>prefix(n+1,0);
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1]+a[i-1];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << prefix[r]-prefix[l-1] << " ";
    }
    cout << endl;
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