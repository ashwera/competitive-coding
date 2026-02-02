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
    string s;
    cin >> s;
    int n = s.size();
    int ans=0;
    bool asc=false;
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            if(s[i]=='0' && s[i+1]=='1' && !asc){ 
                asc=true;
            }
            else ans++;
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