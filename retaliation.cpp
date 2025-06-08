#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);//buffer
    //idea is to make the elements become kisi ek constant ka table in either increasing or decreasing
    //format
    //uske baad balle balle
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << "YES" << endl;
        return;
    }
    //    a[i] = x*i + y*(n−i+1)  .
    //    a[i] = (x−y)*i + y*(n+1).
  
    int A = a[2] - a[1];
    int B = a[1] - A;  //  a[1] = A*1 + B  

     for (int i = 1; i <= n; i++) {
        if (A * i + B != a[i]) {
            cout << "NO" << endl;
            return;
        }
    }
   //agar B n+1 ka multiple hai tabhi systum
    if (B < 0 || (B % (n + 1) != 0)) {
        cout << "NO" << endl;
        return;
    }
    int y = B / (n + 1);
    int x = A + y;
    if (x < 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}
