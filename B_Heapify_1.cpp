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
    vector <int> v(n+1);
    for(int i=1;i<=n;i++)
    {
      cin>>v[i];
    }

    for(int i=1;i<=n;i+=2){
        for(int j=i;j<=n;j*=2){
            for(int k=i*2;k<=n;k*=2){
                if(v[k/2]>v[k]) swap(v[k/2],v[k]);
            }
        }
    }
    // print(v);
    if(is_sorted(v.begin(),v.end())) {
        yes
    }
    else no

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