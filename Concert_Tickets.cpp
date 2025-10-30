#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define inputb for(int &i:b) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n,m; cin >> n >> m;
    multiset <int> v;
    while(n--){
        int x; cin >> x;
        v.insert(x);
    }
    while(m--){
        int price;
        cin >> price;
        auto it = v.upper_bound(price);
        if (it == v.begin()) 
        cout << -1 << endl;
        else {
            --it;
            cout << *it << endl;
            v.erase(it);
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