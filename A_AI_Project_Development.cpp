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
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    int op1 = (n+x+y-1)/(x+y);
    int op2 = (n - x*z + x + y*10 - 1) / (x+y*10);
    op2+=z;
    cout << min(op1,op2) << endl;
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