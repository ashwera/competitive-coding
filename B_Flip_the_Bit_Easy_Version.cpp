#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:x) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n, k; cin >> n >> k;
    vector <int> x(n);
    input
    int ogp;
    cin >> ogp;
    ogp--;
    vector<int> v;
    vector<int> idx(n); 

    v.push_back(x[0]);
    idx[0] = 0;

    for(int i = 1; i < n; i++){
        if(x[i] != x[i-1]){
            v.push_back(x[i]);
        }
        idx[i] = v.size() - 1;
    }
    int  p = idx[ogp];
    int left=-1, right=-1;
    n = v.size();
    // print(v);
    if(n==1){
        cout << 0 << endl;
        return;
    }
    for(int i=n-1;i>p;i--){
        if(v[i]!=v[p]){
            right = i;
            break;
        }
    }
    for(int i=0;i<p;i++){
        if(v[i]!=v[p]){
            left = i;
            break;
        }
    }
    if(right != -1) right = right - p;
    else right = 0;

    if(left != -1) left = p - left;
    else left = 0;
    // cout <<" new p " << p << endl;
    // cout << left << " " << right << endl;
    left = left%2==0 ? left : left+1;
    right = right%2 == 0 ? right : right+1;
    cout << max(left, right) << endl;
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