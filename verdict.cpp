#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum/n==k)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
} 
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}