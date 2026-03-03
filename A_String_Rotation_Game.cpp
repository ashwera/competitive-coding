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
    int maxlen=0;
    int blocks=0;
    for(int i=0;i<n;i++){
        int j=i+1;
        while(j<n && s[i]==s[j]){
            j++;
        }
        // cout << s[i] << " " << blocks+1 << " " << j-i+1 << endl;
        maxlen = max(maxlen,j-i);
        i=j-1;
        blocks++;
    }
    if(maxlen>1 && blocks>1) {
        if(s[0]!=s[n-1])
        blocks++;
    }
    cout << blocks << endl;
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