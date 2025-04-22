#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int l,r;
    cin >> l >> r;
    int x = log(r+1)/log(2);
    int ans;
    int res = (1ll << x)-1; // 2 to the power x minus 1
    int res2 = (1ll << x+1)-1; // 2 to the power x+1 minus 1
    //how many set bits does res have? x
    ans = res;
    while(true)
    {if(l<=ans && ans<=r) 
    { 
        cout << ans << endl;
        return;
    }
    else{//still not in range, try again
        //keep averaging ans and res
        if(ans>r)//ans needs to be reduced
        {
            res2=ans;
            ans = (ans+res)/2;
        }
        else{//increase it
            res=ans;
            ans = (ans+res2)/2;
        }
    }}
}

signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}