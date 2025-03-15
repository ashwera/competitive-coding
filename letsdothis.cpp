#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n , k ,p ;
    cin >> n >> k >> p;
    k = abs(k);
    if((n*p)<k)
    {
        cout << -1 << endl;
        return;
    }
    else 
    {
        int output = (k+p-1)/p;
        if(output<=n)
        {
            cout << output << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}