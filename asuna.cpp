#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n , m;
    cin >> n ;
    int bit = log (n) / log (2);
    cout << (1 << bit) -1  << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}