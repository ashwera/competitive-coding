#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

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
    sort
    int r=n-1,l=0;
    int gondola=0;
    while(l<r){
        if(v[l]+v[r] <= k){
            gondola++;
            l++;
            r--;
        }
        else{
            gondola++;
            r--;
        }
    }
    if(l==r)
    gondola++;
    cout << gondola << endl;
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