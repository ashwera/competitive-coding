#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define alice cout << "ALICE"  << endl;
#define bob cout << "BOB" << endl;

void solve() {
    int n,k,one=0;
    string s;
    cin >> n >> k >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') one++;
    }
    if(k >= one || k >=(n/2)+1)
    alice
    else bob
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}