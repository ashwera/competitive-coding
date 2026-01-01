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
    map<string, int>mp;
    while(n--){
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s]>1) yes else no 
    }
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    solve();
}