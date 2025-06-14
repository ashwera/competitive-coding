#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

const double precision = 1e-6;

void solve() {
    int t,r;
    cin >> t>>r;
    while(t--)
    {
        ld TR, Px, Py, Tx, Ty ;
        cin >> TR >> Px >> Py >> Tx >> Ty;

        ld dx = Px - Tx; //dist in x
        ld dy = Py - Ty;
        ld totaldistance = (dx*dx )+ (dy*dy);
        totaldistance = sqrt(totaldistance); ///dist formula;

        ld curradius = r + TR;

        if(totaldistance <= (curradius+precision)) cout << "True" << endl;
        else cout << "False" << endl;
    }
}
signed main() {
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}