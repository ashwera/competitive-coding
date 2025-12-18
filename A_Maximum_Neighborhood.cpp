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
    if(n==1) {
        cout << 1 << endl;
        return;
    }
    if(n==2) {
        cout << 9 << endl;
        return;
    }
   
    int a = (4*n*n - n - 4);
    int b = 3*(n*n-n-1) + (n*n- 2*n -1) +(n*n -1) ;

        cout << max(a,b)<< endl;
    
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