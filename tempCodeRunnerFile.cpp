#include <bits/stdc++.h>
using namespace std;
#define int long long

int highestPowerOf2LessThan(int n) {
    if (n <= 1) return 0;
    int res = 1;
    while (res * 2 < n) {
        res *= 2;
    }
    return res;
}

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int>ans(n);
    //add highest power of 2 in one cell
    //remaining in the rest
    ans[0]=highestPowerOf2LessThan(k);
    ans[1]=k-ans[0];
    for(int i:ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}