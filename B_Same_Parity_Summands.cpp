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
    int n,k; cin >> n >> k;
    vector<int>ans;
    int val = n-(k-1);
    int v2 = n-(2*(k-1));
    if(val%2!=0 && (n-val) % 2!=0){
        if(val<=0) {
            no return;
        }
        ans.push_back(val);
        for(int i=1;i<k;i++) ans.push_back(1);
    }
    
    if(v2%2==0 && (n-val)%2==0) {
        if(v2<=0) {
            no return;
        }
        ans.push_back(v2);
        for(int i=1;i<k;i++) ans.push_back(2);
    }

    if(ans.size()){
        yes print(ans);
    } else no;
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