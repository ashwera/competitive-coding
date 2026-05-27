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
    int n, c, k; cin >> n >> c >> k;
    vector <int> v(n);
    input
    sort(vall);
    for(int i=0;i<n;i++){
        if(v[i]<=c){
            if(k >= c-v[i]){
                k-=(c-v[i]);
                v[i]=c;
            }
            else{
                v[i] += k;
                k=0;
            }
            c += v[i];
        }
    }
    cout << c << endl;
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