#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int s;
    cin >> s;
    int n = s-2;
    bool allones,allzeroes = true;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i]!=1) allones=false;
        else if(v[i]!=0) allzeroes=false;
    }
    bool foundone=false;
    bool found1 = false;
    int howmany=0;
    if(allones || allzeroes) 
    {
        cout << "YEs" <<endl; 
        return;
    }
    for(int i=0;i<n;i++) //ignore last elements 
    {
        if(v[i]==0)
        {
            foundone = true;
            howmany++;
        }
        else
        {
            if(howmany == 1 && found1) //break if u find a single zero in between
            {
                cout << "NO" << endl;
                return;
            }
            howmany = 0;
            foundone = false;
            found1 = true;
        }
    }
    cout << "YES" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}