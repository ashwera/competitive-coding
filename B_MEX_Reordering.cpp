#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()
// #define xall x.begin(),x.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int f(vector<int>&v, int l, int r){
    int ans=0;
    for(int i=l;i<r;i++){
        if(v[i]==ans)ans++;
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    input
    sort(vall);
    for (int i = 0; i < n - 1; i++) {
        int prefixMEX = f(v, 0, i + 1);   
        int suffixMEX = f(v, i + 1, n);   
        
        if (prefixMEX == suffixMEX) {
            no
            return;
        }
    }yes
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