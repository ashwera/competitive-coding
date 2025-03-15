#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int length=2;
    int starter=3;
        starter++;
        int sum=0;
        for(int i=0;i<length;i++)
        {
            sum+=starter;
            starter++;
        }
        cout << sum << endl;
}
signed main() {
    int t=1;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}