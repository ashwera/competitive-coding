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

int msbfind(int n){
    int ans=1;
    while(n>0){
        if(n&1){
            return ans;
        }
        n = n >> 1;
        ans*=2;
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    vector<int>ans(n), used(n+1,0);
    if((n&(n-1))==0){
        cout << -1 << endl;
        return;
    }

    ans[n-1]= 1;
    for(int i=n-2;i>0;i--){
        int val = (i+1) ^ 1;
        if(used[val]==0 && val!=0){
            used[val]=1;
            ans[i] = val;
        }
    }

    if(n%2){
        for(int i=2;i<=n;i++){
            if(used[i]!=1){
                ans[0]=i;
                break;
            }
        }
    }
    else{
        int msb = msbfind(n);
        ans[0] = msb;
        ans[msb] = n;
    }
    print(ans);
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