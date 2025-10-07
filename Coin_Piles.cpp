#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;


void solve() {
    int l,r;
    cin >> l >> r;
    bool valid = false;
    if(min(l,r)*2 >= max(l,r)) valid = true;
    if((l+r) % 3 == 0 && valid) yes
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