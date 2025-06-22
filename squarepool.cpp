#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,s;
    cin >> n >> s;
    int count=0;
    while(n--)
    {
        int d1,d2,x,y;
        cin >> d1 >> d2 >> x >> y;
        if(x==y)
        {
            // / diagonal
            //should be 1 1 or -1 -1
            if(d1==d2)
            {
                count++;
            }            
        }
        if(x+y == s)
        {
            if(d1!=d2)
            {
                count++;
            }
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