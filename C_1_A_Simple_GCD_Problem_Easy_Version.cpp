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
    vector<int>b(n);
    for(int &i:b) cin >> i;
    int ans=0;
    for(int i=1;i<n-1;i++){
        int prev = gcd(v[i], v[i-1]);
        int next = gcd(v[i], v[i+1]);
        int val = lcm(prev,next);
        // if(val > b[i]) continue; 
        if(v[i]==val) continue;
        ans++;
    }
    if(gcd(v[0],v[1])!=v[0]) {
        ans++;
    }
    if(n>=2)
    {
        if(gcd(v[n-1],v[n-2])!=v[n-1]) ans++;
    } 
    cout << ans << endl;
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

