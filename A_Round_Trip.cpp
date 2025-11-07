#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int cur, highest, increment, n;
    cin >> cur >> highest >> increment >> n;
    string v;
    cin >> v;

    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]=='1'){
            ans++;
            cur = max(0ll, cur-increment);
        }
        else{
            if(cur<highest)
            ans++;
        }
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