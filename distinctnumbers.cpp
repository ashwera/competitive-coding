#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n; cin >> n;
set <int> v;
while(n--) {
    int x; cin >> x;
    v.insert(x);
}
cout << v.size() << endl;
}
signed main() {
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}