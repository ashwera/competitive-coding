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
    string s;
    cin >> s;
    string t = s;
    sort(s.begin(),s.end());
    string u=t;
    sort(t.rbegin(),t.rend());
    if(s==t){
        no return;
    }
    yes
    if(s==u){
        cout << t << endl;
    }
    else cout<< s <<endl;
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