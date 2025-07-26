#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "1"  << endl;
#define no cout << "2" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int a,b,k;
cin >> a >> b >> k;
int hcf = gcd(a,b);
if(k>=max(a,b)) yes
else if(a==b) yes
else if(max(a,b)/hcf <=k)yes
else
no
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