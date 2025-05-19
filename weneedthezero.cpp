#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    int val = 0;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        val ^= v[i];
    }
    if(n%2!=0)
    cout << val << endl;
    else
    {
        if(val==0)
        {
            cout << 0 << endl;
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