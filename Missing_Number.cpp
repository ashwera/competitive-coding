#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
int n; cin >> n;
vector <bool> v(n+1);
for(int i=0;i<n;i++)
{
    int x;
    cin >> x;
    v[x]=true;
}
v[0]=true;
auto it = find(v.begin(),v.end(),false);
cout << it-v.begin() << endl;
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