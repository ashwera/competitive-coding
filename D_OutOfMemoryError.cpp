#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n, m , h; 
    cin >> n >> m >> h;
    vector <int> v(n);
    input
    vector<int>copy=v;
    vector<int>last(n,-1);
    int reset=-1;
    for(int i=0;i<m;i++){
        int b,c;
        cin >> b >> c;
        b--;
        if(reset < last[b]){
            copy[b]+=c;
        }
        else copy[b] = v[b]+c;
        if(copy[b] > h){
            // reset
            copy[b] = v[b];
            reset=i;
        }
        last[b]=i;
    }
    for(int i=0;i<n;i++){
        if(last[i]<=reset) cout << v[i] << " ";
        else cout << copy[i]<<" ";
    }
    cout << endl;
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