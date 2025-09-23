#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
// #define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int gcd(int n, int m)
{
    if (m == 0)
        return n;
    return gcd(m, n % m);
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        v[i] = abs((i+1) - v[i]);
    }
    int ans = 0;
    for (int x : v) ans = gcd(ans, x);
    cout << ans << endl;
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