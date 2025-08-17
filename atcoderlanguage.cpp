#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
string s;
cin >> s;
if(s=="red")
{
    cout << "SSS" << endl;
}
else if(s=="green")
{
    cout << "MMM" << endl;
}
else if(s=="blue")
{
    cout << "FFF" << endl;
}
else cout << "Unknown" << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}