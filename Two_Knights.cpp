#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

vector<int> precompute(){
    vector<int> series(10000);
    series[0] = 0ll;
    for(int i=1ll;i<10000;i++)
    {
        series[i] = series[i-1] + i;
    }
    return series;
}

void solve() {
    int n; cin >> n;
    vector<int> series = precompute();
    cout << 0 << endl;
    for(int i=2;i<=n;i++)
    {
        int numberofways = ((i*i) * ((i*i)-1))/ 2;
        //pnc
        numberofways = numberofways - (8*series[i-2]);
        cout << numberofways << endl;
    }
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