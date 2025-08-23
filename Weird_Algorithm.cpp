#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n; cin >> n;
cout << n << " ";
while(n>1)
{
    if(n%2!=0){
        n = n*3 + 1;
        cout << n << " ";
    }
    else{
        n/=2;
        cout << n << " ";
    }
}
cout << endl;
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