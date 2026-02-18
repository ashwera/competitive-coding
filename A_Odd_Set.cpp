#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes"  << endl;
#define no cout << "No" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    n*=2;
    vector <int> v(n);
    input
    int odd=0;
    for(int i:v){if(i%2)odd++;}
    if(odd == n/2) {
        yes 
    }
    else no 
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