#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k;
    cin >> n >> k;
    n = n-k;
    //print k ones, print n-k zeroes
    while(k--) cout << 1;
    while(n--) cout << 0;
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}