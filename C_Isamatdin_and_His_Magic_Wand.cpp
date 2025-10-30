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
    int n; cin >> n;
    vector <int> v(n);
    input
    
    bool hasEven = false, hasOdd = false;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) hasEven = true;
        else hasOdd = true;
    }
    
    if (hasEven && hasOdd) {
        sort(v.begin(), v.end());
    }
    
    print(v);
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