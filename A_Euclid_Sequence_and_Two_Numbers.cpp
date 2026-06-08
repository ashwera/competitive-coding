#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.rbegin(),v.rend()

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
    sort(vall);
    if(n==2)
    {
        cout << max(v[0],v[1]) << " " << min(v[0],v[1]) << endl;
        return;
    }
    else{
        for(int i=2;i<n;i++){
            if(v[i]!=(v[i-2]%v[i-1])){
                cout << -1 << endl;
                return;
            }
        }
    }
    cout << v[0] << " " << v[1] << endl;
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