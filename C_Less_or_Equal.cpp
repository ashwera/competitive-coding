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
    int n,k; cin >> n >> k;
    vector <int> v(n);
    input
    if(k==0){
        int x=*min_element(vall)-1;
        if(x<1) x=-1;
        cout << x << endl;
        return;
    }
    sort(vall);
    int x = v[k-1];
    if(v[k]==x) {
        cout << -1 << endl;
    }
    else cout << x << endl;
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