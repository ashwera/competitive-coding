#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0 ;i<n ;i++)
    {
        cin >> v[i];
    }
    int ans=0;
    if(k==1)
    {
        //just two additions needed
        //last painted element is either first or last. no exceptions. 
        ans = v[0] + v[n-1];
        for(int i=1;i<n-1;i++)
        {
            ans = max(ans,v[i]+max(v[0],v[n-1]));
        }
        cout << ans << endl;
        return;
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<=k;i++)
    {
        ans+=v[i];
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}