#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n, k; cin >> n >> k;
    set <int> v;
    int freq=0;
    int count=0;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x==k) freq++;
        v.insert(x);
    }
    for(int x:v)
    {
        if(x<k) count++;
    }
    cout << max(k-count, freq) << endl;
    // max between freq of k and number of missing unique elements less than n
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