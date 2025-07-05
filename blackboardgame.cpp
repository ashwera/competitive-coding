#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    int n;
    cin >> n;
    if(n%2==0)
    {
        if(n%4==2)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    else
    {
        cout << "Alice" << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}