#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int hi=999; //y
    int lo=2;
    while(hi>=lo){
        int mid = (hi+lo)/2;
        cout << "? 1 " << mid << endl;
        int val;
        cin >> val;
        if(val>mid){
            //go smaller
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    cout << "! "<< hi+1 << endl;
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