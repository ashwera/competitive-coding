#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(i%3 == i%5)
        {
            count++;
        }
    }
    cout << count << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}