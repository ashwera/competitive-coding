#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    string s;
    cin >> s;
    string t=s;
    sort(t.begin(),t.end());
    if(s==t){
        cout << "Bob\n";
        return;
    }

    vector<int>ans;
    cout << "Alice" << endl;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            ans.push_back(i+1);
        }
    }
    cout << ans.size() << endl;
    print(ans);
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
