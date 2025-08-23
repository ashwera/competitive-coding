#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n; cin >> n;
vector <int> v(n);
input
int moves=0;
for(int i=1;i<n;i++)
{
    if(v[i]<v[i-1]) {
        moves +=( v[i-1] - v[i]);
        v[i] = v[i-1];
    }
}
cout << moves;
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