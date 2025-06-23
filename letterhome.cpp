    #include <bits/stdc++.h>
    using namespace std;
    #define int long long

    void solve() {
        int n,s;
        cin >> n >> s;
        vector<int>v(n);
        for(int &x:v) cin >> x;
        int a = s-v[0];
        int b = v[n-1]-s;
        if(v[n-1]<s)
        {
            //rhs is empty, 
            b=0;
        }
        if(v[0]>s) a=0;
        int ans = min(a,b)*2 + max(a,b);
        cout << ans << endl;
    }
    signed main() {
        int t;
        cin >> t;
        while (t-- > 0) {
            solve();
        }
    }