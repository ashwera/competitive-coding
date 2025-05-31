#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    int bd = min(b,d);
    int ac = min(a,c);
    if(bd==ac || ac > bd)
    cout << "Gellyfish" << endl;
    else
    cout << "Flower" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}