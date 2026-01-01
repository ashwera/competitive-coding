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
    if(n<2){
        cout << n << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    cout << (n+1)/2 << endl;
    // int count =  (n+1)/2;
    int start=1, end = n*3;
    while(start<end){
        cout << start << " " << end << endl;
        start+=3;
        end-=3;
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