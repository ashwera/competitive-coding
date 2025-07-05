#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    int n,j,k;
    cin >> n >> j >> k;
    int maxel=0;
    int maxelcount=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    maxel = *max_element(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]==maxel)maxelcount++;
    }
    if(v[j-1]<maxel && k>1) yes
    else if(v[j-1]==maxel) yes 
    else no
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}