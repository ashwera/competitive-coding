#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int firsthalf = n/100;
    int sh=n%100;
    int sum=sh+firsthalf;
    //a+b = sqroot(n)
    //sqroot is an int 
    int root = sqrt(n);
    if(root*root == n)
    {
        cout << "0 " << root << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}