#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    {
        cin >> v[i];
    }
    int idx = find(v.begin(), v.end(), 1) - v.begin();//first occ
    auto rit = find(v.rbegin(), v.rend(), 1);
    auto it = rit.base() - 1; // convert to normal iterator
    int idx2 = it - v.begin();
    int counter = idx2 - idx + 1;
    if(counter<=x)
    cout << "Yes" << endl;
    else cout << "No" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}