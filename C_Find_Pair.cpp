#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    input
    sort

    vector<pair<int,int>> freq; 
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && v[j] == v[i]) j++;
        freq.push_back({v[i], j - i});
        i = j;
    }

    int m = freq.size();

    for (int i = 0; i < m; i++) {
        int block = freq[i].second * n;
        if (k > block) k -= block;
        else {
            int first = freq[i].first;
            int idx = (k - 1) / freq[i].second;
            cout << first << " " << v[idx];
            return;
        }
    }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}