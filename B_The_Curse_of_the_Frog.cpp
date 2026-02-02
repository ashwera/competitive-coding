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

void solve() {
    int n,x; cin >> n >> x;
    int cur=0;
    int ans=0;
    int maxProfit=-1;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        cur+= (a*(b-1));
        int profit = (a*b)-c;
        if(profit>0){
            maxProfit = max(profit,maxProfit);
        }
    }
    if(cur>=x){
        cout << 0 << endl;
        return;
    }
    if(cur < x){
        int need = x-cur;
        ans = (need+maxProfit-1)/maxProfit;
    }
    if(maxProfit==-1) {
        cout << maxProfit << endl;
        return;
    }
    cout << ans << endl;
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