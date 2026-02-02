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
    string s="";
    cin >> s;
    int l = s.size();
    if(l<=10){
        cout << s << endl;
    }
    else{
        string t="";
        t = s[0] + to_string(l-2) + s[l-1];
        cout << t << endl;
    }
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