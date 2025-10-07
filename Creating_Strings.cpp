#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<string> ans;
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout << ans.size() << endl;
    for(string x:ans){
        cout << x << endl;
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