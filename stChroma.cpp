#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,x;
    cin >> n >> x;
    for(int i=0;i<n;i++)
    {
        if(i!=x)
        {
            cout << i << " ";
        }
    }
    if(x!=n) 
    cout << x << endl;
    else 
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}