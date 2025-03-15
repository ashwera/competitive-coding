#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector < int > v(n);
    // int minval = INT_MAX;
    bool flag = true;
    for (int i = 0 ;i<n; i++)
    {
        cin >> v[i];
        if(v[i]<2)
        {
            flag = false;
        }
        if(v[i]<(2*n-2-(i)))
        {
            flag = false;
        }
    }
    
    //entire path takes 2n-2 seconds
    //if an element exists less than 2n-2 at extreme indices, fails
    //an element less than 2n-2 can exist middle of the path
    //element cant be less than 2n-2-(n/2)

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        solve();
    }
}