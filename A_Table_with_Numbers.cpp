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
    int n, h, k; 
    cin >> n >> h >> k;
    vector <int> v(n);
    input
    sort(v.begin(),v.end());
    int x = min(h,k);
    int y = max(h,k);
    vector<pair<int,int>>ans;
    int l=0;
    int r=n-1;
    while(l<r){
        if(v[l]<=x && v[r]<=y){
            
            ans.push_back({v[l],v[r]});
            l++;
            r--;
        }
        else if(v[r]>y) r--;
        else{
            break;
        }
    }
    cout << ans.size() << endl;
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