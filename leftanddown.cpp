#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int x,y,k;
cin >> x >> y >> k;
int hcf = gcd(x,y);
if(x==0 && y==0) cout <<0<< endl;
else if(k>hcf && hcf!=1)
cout << 1 << endl;
else if(k>x && k>y)
cout << 1 << endl;
else cout << 2 << endl;
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