#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }

    int arrcount=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1] < 2)
        {
            v[i] = v[i-1]; //effect of removal
        }
        else
        {
            arrcount++;
        }
    }
    cout << arrcount << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}