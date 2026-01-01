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
    int n; cin>>n;
    string s; cin>>s;
    const string a="2026", b="2025";
    int op1=1e18, op2=0;
    for(int i=0;i+4<=n;i++){
        int c=0;
        for(int j=0;j<4;j++){
            c += (s[i+j]!=a[j]);
        }
        op1=min(op1,(long long)c);
    }
    for(int i=0;i+4<=n;i++){
        if(s.substr(i,4)==b) {
        op2++;
        }
    }
    cout<<min(op1,op2)<<endl;
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
