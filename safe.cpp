#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s="";
    cin >> s;
    int oc=0,zc=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==1){
            oc++;
        }
        else 
        {
            zc++;
        }
    }
   
    int pair = min(oc,zc);
    cout << pair << endl;
    if(pair==0)
    {
        cout << "ramos" << endl;
        return;
    }
    if(pair%2==0) cout << "ramos" << endl;
    else cout << "zlatan" << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}