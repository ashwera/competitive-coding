#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >>n;
    n-=1;
    //2nd and 3rd khelega
    //5th 6th khelega
    //so on
    //1 2 4 5 and so on. ye sab khelega 
    if(n%3==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}