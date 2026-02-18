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
    int n,k; cin >> n >> k;
    vector <int> v(n);
    int peak=0;
    input
    // peak is the count of all numbers in between the sorted sub sequence 
    int need = 1;
    for(int x : v){
        if(x == need)
            need++;
    }
    peak=need-1;
    peak = n-peak;
    if(peak==0) {
        cout << 0 << endl;
        return;
    }
    cout << (peak+k-1)/k << endl;
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