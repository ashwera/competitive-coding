#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,x,y;
    cin >> n >> x >> y;
    vector<int>b(n+1), dp(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin >> b[i];
    }
    for(int i=1;i<=n;i++)
    {
        dp[i]=b[i];
        for(int j=1;j<i;++j)
        {
            dp[i]=min(dp[i],dp[j]+dp[i-j]+x);
        }
    }
    cout << dp[n]+1 << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}