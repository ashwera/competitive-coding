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
    int n; cin >> n;
    int r = n%12;
    // b = n-a
    if(n==10) {
        cout << -1 << endl; return;
    }
    int p[12] = {0,1,2,3,4,5,6,7,8,9,22,11};
    int a = p[r];
    int b = n - a;
    cout << a << " " << b << endl   ;
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