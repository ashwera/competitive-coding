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
    int s=0;
    for(int i=n;i>0;i/=10){
        s = max(s, i%10);
    }
    
    vector<int>ans(s,0);
    cout << s << endl;
    string t = to_string(n);
    for(char ch: t){
        for(int &i:ans) i*=10;
        int x = ch-'0';
        for(int i=0;i<x;i++){
            ans[i] += 1;
        }
    }
    print(ans);
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    solve();
}