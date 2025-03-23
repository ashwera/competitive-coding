#include <bits/stdc++.h>
using namespace std;
#define int long long
//question: https://codeforces.com/contest/2078/problem/B

void solve() {
    int n,k;
    cin >> n >> k;
    for(int i=2;i<=n;i++)
    {
        cout << i << " ";
    }
    cout << n-1 << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}