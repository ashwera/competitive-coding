#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int l , r , d , u;
    cin >> l >> r >> d >> u;
    if(l==r&&r==u&&u==d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}//fuddu
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}