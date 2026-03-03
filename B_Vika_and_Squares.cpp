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
    int n; cin >> n;
    vector <int> v(n);
    input
    // ans = min*n + x;
    // x = max distance between two least elements circular
    int minel = *min_element(vall);
    int x = 0;
    for(int i=0;i<n;i++){
        if(v[i] == minel){
            int j=i+1;
            while(v[j]!=minel && j<n) j++;
            x = max(x,j-i-1);
            i=j-1;
        }
    }
    // cout << x << endl;
    int st=0,end=0;
    for(int i=0;i<n;i++){
        if(v[i]!=minel) st++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]!=minel)end++;
        else break;
    }
    x = max(x,st+end);
    // cout << x << endl;
    cout << (n*minel) + x << endl;
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