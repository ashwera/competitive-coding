#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()
#define mod 676767677;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int NOF(int x){
    int ans=0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0) 
        {   
            ans = (ans+1) % mod;
            if(i != x/i) ans = (ans+1) % mod;
        }
    }
    return ans;
}

void solve() {
    int x,y;
    cin >> x >> y;
    if(x==y){
        cout << 1 << endl;
    }
    else
        cout << NOF(abs(x-y)) << endl;
    vector<int>ans;
    while(x--) ans.push_back(1);
    while(y--) ans.push_back(-1);
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