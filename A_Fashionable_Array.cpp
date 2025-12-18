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
    sort(v.begin(),v.end());
    if(v[0]%2==v[n-1]%2){
        cout << 0 << endl;
        return;
    }
    else{
        //find matching parity in beginning 
        int beg=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==v[n-1]%2){
                beg=i;
                break;
            }
        }
        int end=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]%2==v[0]%2){
                end=i;
                break;
            }
        }
        cout << min(n-end-1,beg) << endl;
    }
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