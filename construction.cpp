#include <bits/stdc++.h>
using namespace std;
#define int long long

//very basic idea actually
//max number of ones can be attained at 2k-1 only
//smallest number less than k of that order lelo 
//rest mein kuch bhi ho dozen matter since normal OR hai not XOR
//ezpz baaki me add anything to 
//fulfil the summation wala rule
//slay 

int highestTwoPowerMinusOne(int n) {
    int res = 0;
    for (int k = 1; (1 << k) - 1 <= n; k++) {
        res = (1 << k) - 1;
    }
    return res;
}

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int>ans(n);
    //add highest power of 2 in one cell
    //remaining in the rest
    if(n==1){
        cout << k << endl;
        return;
    }
    ans[0]=highestTwoPowerMinusOne(k);
    ans[1]=max(0ll,(k-ans[0]));
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