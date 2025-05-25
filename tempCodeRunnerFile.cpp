#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<double> v(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        double sqroot = sqrt(v[i]);
        if(sqroot*sqroot == v[i])
        count++;
    }
    cout << count << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}