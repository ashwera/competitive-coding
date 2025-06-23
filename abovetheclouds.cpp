#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin >> s;
    map<char,int>freq;
    for(int i=0;i<n;i++)
    {
        //b is as short as possible.
        //look for any alphabet except for 1st and last that has freq>1
        freq[s[i]]++;
    }

    for(int i=1;i<n-1;i++)
    {
        if(freq[s[i]]>1)
        {cout << "Yes" << endl;
        return;}
    }
    cout << "No" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}