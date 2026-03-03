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

map<int, int> getPrimeFactors(int x) {
map<int, int> factors;
for (int i = 2; i*i <= x; ++i) {
while (x % i == 0) {
factors[i]++;
            x /= i;
 }    }
if (x > 1) factors[x]++;
return factors;}

void solve() {
    int n; cin >> n;
    int ans=0;
    for(int i=1;i<=n;i++){
        map<int,int>mp = getPrimeFactors(i);
        if(mp.size()==2) ans++;
    }
    cout << ans << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    // cin >> t;
    // while (t-- > 0) {
        solve();
    // }
}