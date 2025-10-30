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
    int n, x; cin >> n >> x;
    vector <int> v(n);
    input
    vector<int>prefixsums(n+1,0);
    map<int,int>freq;
    freq[0]=1;
    int ans=0;
    for(int i=1;i<=n;i++){
        prefixsums[i] = prefixsums[i-1]+v[i-1];
        int target = prefixsums[i]-x;
        if(freq[target]>0) ans+=freq[target];
        freq[prefixsums[i]]++;
    }
    cout << ans << endl;
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