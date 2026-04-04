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
    int ans=1;
    vector<bool>m(n,false);
    m[v[0]-1] = true;
    for(int i=1;i<n;i++){
        if(m[i]){
            m[v[i]-1] = true;
        }
        else{
            ans++;
            m[v[i]-1] = true;
        }
    }
    cout << ans << endl;
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