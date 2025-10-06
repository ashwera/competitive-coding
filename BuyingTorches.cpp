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
    int x,y,k;
    cin >> x >> y >> k;
    if(abs(k-x) >= (y*k)){
        cout << 1+k << endl;
        return;
    }
    int v = (k + (y*k) - x) / (x-1); //ceil div
    if((k + (y*k) - x)%(x-1)!=0) v++;
    cout << k + v + 1<< endl; 
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