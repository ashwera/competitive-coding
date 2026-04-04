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
    int n,m; cin >> n >>m;
    string s,t;
    cin >> s >> t;
    int j=0;
    for(int i=0;i<m;i++){
        if(j>=n){
            no return;
        }
        while(s[j]!=t[i]){
            j++;
        }
        j++;
    }
    yes
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