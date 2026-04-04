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
    vector<int> v;

    int small = 1;
    int large = 3 * n;

    for (int i = 1; i <= n; i++) {
        int median = large - 1;

        v.push_back(small);   
        v.push_back(median);  
        v.push_back(large);  

        small++;
        large -= 2;
    }

    print(v);
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