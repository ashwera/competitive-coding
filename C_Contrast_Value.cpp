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
    vector <int> v(n);
    input
    set<int>s(v.begin(),v.end());
    if(s.size()==1){
        cout << 1 << endl;
        return;
    }
    int ans=0;
    int prev = v[0];
    for(int i=1;i<n-1;i++){
        if(prev <= v[i] && v[i] <= v[i+1]){
            // cout << v[i] << " ";
            ans++;
        }
        else if(prev >= v[i] && v[i]>= v[i+1]){
            // cout << v[i] << " ";
            ans++;
        }
        else{
            prev = v[i];
        }
    }
    if(prev==v[n-1]) ans++;
    cout << n-ans << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
        // cout << "\nNEW TEST\n";
    }
}