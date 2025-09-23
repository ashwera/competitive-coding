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
    vector <int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k;
    if(n % 2 != 0)
    {
        k=4;
        cout << k << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
        cout << 2 << " " << n << endl;
        cout << 2 << " " << n << endl;
    }
    else{
        k=2;
        cout << k << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    } 
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