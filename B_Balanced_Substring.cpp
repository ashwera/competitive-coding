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

void solve() {
    int n; cin >> n;
    string s;
    cin >> s;
    map<int,int>c;
    int count=0;
    int ans=0;
    c[0]=-1;
    for(int i=0;i<n;i++){
        char ch = s[i];
        if(ch=='0') count--;
        else count++;
        if(c.count(count)==0){
            c[count]=i;
        }
        else{
            ans = max(ans, i-c[count]);
        }
    }
    cout << ans << endl;
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