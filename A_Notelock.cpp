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
    int n, k; cin >> n >> k;
    string s="";
    cin >> s;
    int protect=0,effect=0;
    //protect the first 1. then skip to i+k+1
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(effect==0)
            {
                protect++;
            }
            effect=k;
        }
        if(effect>0)
        effect--;
    }
    cout << protect << endl;
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