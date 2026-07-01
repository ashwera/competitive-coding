#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n), ans(n), prefix(n);
    input
    
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
        a.push_back({v[i], i});

    sort(a.begin(), a.end());

    for(int i=0;i<n;i++)
        v[i] = a[i].first;
    prefix[0] = v[0];
    for(int i=1;i<n;i++) prefix[i] = prefix[i-1] + v[i];
    // pri/nt(prefix);
    vector<int> reach(n);

    for(int i=0;i<n;i++){
        reach[i] = upper_bound(v.begin(), v.end(), prefix[i]) - v.begin() - 1;
    }

    for(int i=n-2;i>=0;i--){
        if(reach[i] > i)
            reach[i] = reach[reach[i]];
    }
    for(int i=0;i<n;i++)
    ans[a[i].second] = reach[i];
    print(ans);
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}