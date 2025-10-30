#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<pair<int,int>>& v) {
    for (auto i : v) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    map<int,int>da;
    while(n--){
        int a,b;
        cin >> a >> b;
        da[a]++;
        da[b+1]--;
    } 
    //sort by time
    int curr = 0, ans = 0;
    for (auto [x, time] : da) {
        curr += time;
        ans = max(ans, curr);
    }
    cout << ans << "\n";
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