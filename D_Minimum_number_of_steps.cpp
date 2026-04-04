#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()
const int MOD = 1e9+7;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int seen=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(seen==0 && s[i]=='a') continue;
        if(s[i]=='b') {
            seen++;
        }
        else{
            ans = (ans + (seen%MOD))% MOD;
            seen = (seen*2)%MOD;
        }
    }
    cout << ans << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    // int t;
    // cin >> t;
    // while (t-- > 0) {
        solve();
    // }
}