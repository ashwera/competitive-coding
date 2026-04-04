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
    // aa
    // aab
    // aabb
    // aabba
    // aabbaa and so on 
    string s;
    bool a=false;
    for(int i=0;i<n;i+=2){
        if(a) {
            s.push_back('a');
            s.push_back('a');
        }
        else{
            s.push_back('b');
            s.push_back('b');
        }
        a = !a;
    }
    if(n%2) s.pop_back();
    cout << s << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    // int t;
    // cin >> t;
    // while (t-- > 0) {
        solve();
    // }
}