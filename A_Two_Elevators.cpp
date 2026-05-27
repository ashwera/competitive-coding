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
    int a,b,c;
    cin >> a >> b >> c;
    int t1 = a - 1;
    int t2 = abs(b - c) + (c - 1);

    if(t1 < t2) cout << 1;
    else if(t2 < t1) cout << 2;
    else cout << 3;
    cout << endl;
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