#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    int n,px,py,qx,qy;
    cin >> n >> px >> py >> qx >> qy;
    vector<int>v(n);
    for(int &i:v) cin >> i;

    long double dx = px - qx;
    long double dy = py - qy;
    long double d = sqrt(dx*dx + dy*dy);
    int s = accumulate(v.begin(),v.end(),0ll);
    int m = *max_element(v.begin(),v.end());
    //it's always possible if d<=s
    //and no step is so big that it cant be undone by the rest
    if(d<=s && d >= ((2*m)-s))
    yes
    else no
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}