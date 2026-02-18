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
    vector <int> v(n),ans(n);
    input
    for(int i=1;i<n-1;i++){
        ans[i] = (v[i-1]+v[i+1]-2*v[i]) / 2;
    }
    int sum=0;
    for(int i=1;i<n-1;i++){
        sum += (i*ans[i]);
    }
    sum = v[0]-sum;
    sum/=(n-1);
    ans[n-1] = sum;

    sum=0;
    for(int i=n-2;i>0;i--){
        sum += ((n-i-1)*ans[i]);
    }
    sum = v[n-1]-sum;
    sum/=(n-1);
    ans[0] = sum;
    print(ans);
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