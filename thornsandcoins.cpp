#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    //collect all before two or more **
    int n;string s;
    cin >> n >> s;
    int coins=0;
    bool thorn = false;
    for(int i=0;i<n;i++)
    {
        char ch = s[i];
        if(ch=='@')
        {
            coins++;
            thorn = false;
        }
        else if(ch=='.')
        {
            thorn = false;
        }
        else if(ch=='*')
        {
            if(thorn)
            {
                cout << coins << endl;
                return;
            }
            else
            {
                thorn=true;
            }
        }
    }
    cout << coins << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}