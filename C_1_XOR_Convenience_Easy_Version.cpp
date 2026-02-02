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

int largestpoweroftwolessthan(int n){
int res = 0;
for (int i = n; i >= 1; i--) {
 if ((i & (i - 1)) == 0) {
res = i;
break;
  }}
    return res;
}

void solve() {
    int n; cin >> n;
    vector<int>ans(n), used(n+1,0);
    ans[n-1]= 1;
    for(int i=n-2;i>0;i--){
        int val = (i+1) ^ 1;
        if(used[val]==0 && val!=0){
            used[val]=1;
            ans[i] = val;
        }
    }
    for(int i=2;i<=n;i++){
        if(used[i]!=1){
            ans[0]=i;
            break;
        }
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