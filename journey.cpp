#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> day = {a,b,c};
    int days=0;
    //one round, 3 days, minus a+b+c from total
    int rem = n %(a+b+c);
    days = (n / (a+b+c)) * 3;
    // cout << rem << " " << days << endl;
    if(rem)
    {for(int i=0;i<3;i++)
    {
        rem-=day[i];
        days++;
        if(rem<=0) break;
    }}
    cout << days << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}