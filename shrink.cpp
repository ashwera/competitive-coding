#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    vector<int> odds, evens;

    for (int i = 1; i <= n; ++i) 
    {
        if (i % 2 == 1) odds.push_back(i);
        else evens.push_back(i);
    }

    int idx = 0;
    for (int i = 0; i < odds.size(); ++i) 
    {
        v[idx++] = odds[i];
    }

    reverse(evens.begin(), evens.end());
    for (int i = 0; i < evens.size(); ++i) 
    {
        v[idx++] = evens[i];
    }

    for (int x : v) 
    {
        cout << x << " ";
    }

    cout << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
