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
    int n, x; cin >> n >> x;
    vector <pair<int,int>> v;
    for(int i=0;i<n;i++){
        int c;
        cin >> c;
        v.push_back({c,i+1});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int val = v[i].first;
        int target = x-val;
        auto it = lower_bound(v.begin(), v.end(), make_pair(target, 0LL));
        if(it != v.end() && it->first == target && it->second != v[i].second){
            cout << v[i].second << " " << it->second << "\n";
            return;
        }        
    }
    cout << "IMPOSSIBLE\n";
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