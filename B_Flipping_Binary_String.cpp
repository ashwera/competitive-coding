#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << 0  << endl;
#define no cout << -1 << endl;
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
    string s; cin >>s;
    int oc=0,zc=0;
    vector<int>ans,z;
    for(int i=0;i<n;i++){
        char ch =s[i];
        if(ch=='1') {
            oc++; 
            ans.push_back(i+1);
        }
        else {
            zc++;
            z.push_back(i+1);
        }
    }
    if(oc==0){
        yes return;
    }
    if(zc==1){
        cout << 1 << endl;
        cout << z[0] << endl;
    }
    if(oc>=zc){
        cout << ans.size() << endl;
        print(ans);
    }
    else no
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