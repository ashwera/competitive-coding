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
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int ans=-1;
    for(int x=1;x<=a;x++){
        for(int y=1;y<=b;y++){
            if(k % (x*y)!=0) continue;
            int z = k/(x*y);
            int ways = (a-x+1)*(b-y+1)*(c-z+1);
            ans = max(ans,ways);
        }
    }
    if(ans<0) ans=0;
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