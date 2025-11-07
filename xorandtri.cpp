#include <bits/stdc++.h>
using namespace std;
#define int long long
int findval(int in)
{   int k=0;
    while(in>1)
    {
        in /=2;
        k++;
    }
    return k;
}
void solve() {
    int x;
    cin >> x;
    int k = findval(x);
    int y = (1 << k) - 1;
    // cout << x << " " << y << endl;
    int xoris = x xor y;
    // cout << xoris << endl;
    if(xoris == (x+y))
    {
        y = -1;
    }
    if(xoris+y == x)
    {
        y=-1;
    }
    cout << y << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}