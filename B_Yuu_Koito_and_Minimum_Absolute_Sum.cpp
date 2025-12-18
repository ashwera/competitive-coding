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
    int n; cin >> n;
    vector <int> v(n);
    input
    if(v[0]==-1 && v[n-1]==0){
        //set all to zero 
    }
    else if(v[0]==-1){
        v[0]=v[n-1];
    }
    else if(v[n-1]==-1){
        v[n-1]=v[0];
    }
    for(int i=0;i<n;i++){
        if(v[i]==-1){
            v[i]=0;
        }
    }
    cout << abs(v[n-1]-v[0]) << endl;
    print(v);
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}