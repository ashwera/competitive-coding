#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i+1 << " ";
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>ones;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ones.push_back(i);
        }
    }

    cout << ones.size() << endl;
    print(ones);

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