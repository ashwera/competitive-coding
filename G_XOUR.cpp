#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
// #define input 

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {

    // / make graph
    // only nodes that have xor less thn4 are connected
    // count number of connected components and sort those elements in place. 

    int n; cin >> n;
    vector <int> v(n);
    map<int,vector<int>>bucket;
    map<int,set<int>>indices;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        bucket[(v[i] >> 2)].push_back(v[i]); //holds elements 
        indices[v[i] >> 2].insert(i);
    }
    for(auto [k,val]:bucket){
        sort(val.begin(),val.end());
        int i=0;
        for(int idx:indices[k]){
            v[idx] = val[i];
            i++;
        }
    }
    print(v);
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