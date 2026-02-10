#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;

int step=0;

int rec(int n, int k){
    // cout << n <<" " <<k<<endl;
    if(n==k){
        return step;
    }
    if(n<k){
        return -1; 
    }
    if(((n+1)/2)==k ||(n/2)==k) return step+1;
    if((n%4)>0){
        if((n/2)%2==1)
        {
            n = (n/2);
        }
        else{
            n = (n/2) + 1;
        }
    }
    else{
        n/=2;
    }
    step++;
    return rec(n,k);
}

void solve() {
    int n, k;
    cin >> n >> k;
    int ans = rec(n,k);
    cout << ans << endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        step=0;
        solve();
    }
}