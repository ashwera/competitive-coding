#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
    int n;
    cin >> n;
    int minx=1e18,miny=1e18;
    int maxx=-1,maxy=-1;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        minx = min(x,minx);
        miny = min(y,miny);
        maxx = max(x,maxx);
        maxy = max(y,maxy);
    }
    int ans = max(abs(maxy-miny),abs(minx-maxx));
    cout << ((ans+1)/2) << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    solve();
}