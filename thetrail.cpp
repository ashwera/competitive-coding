#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    // intuition: make all sums=0;
    //first, alter rowwise to make all sums=0
    //then adjust column
    int n,m;
    cin >> n >> m;
    string s ;
    cin >> s;
    vector<vector<int>>v(n);
    for(int i=0;i<m;i++)
    {
        vector<int>v1(m);
        for(int j=0;j<m;j++)
        {
            cin >> v1[j];
        }
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}