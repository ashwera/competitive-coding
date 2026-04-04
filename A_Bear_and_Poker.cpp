#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes"  << endl;
#define no cout << "No" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const map<int,int>& v) {
    for (auto i : v) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
}

int reduce(int x){
    while(x % 2 == 0) x /= 2;
    while(x % 3 == 0) x /= 3;
    return x;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    input
    // express in terms of factors
    // non 3,2 factor counts should be equal in all
    int ref = reduce(v[0]);
    for(int i:v){
        if(ref!=reduce(i)) {
            no return;
        }
    }
    yes
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