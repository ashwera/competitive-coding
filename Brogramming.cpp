#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    string s,t="";
    cin >> n >> s;
    int count1,count0=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            t.push_back(s[i]);
        }
        if(s[i]=='0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    t.push_back(s[n-1]);

    
    // cout << t << endl;
    int tn = t.length();
    if(t[0]=='0'&&t[tn-1]=='0')
    {
        cout << tn-1 << endl;
    }
    else if(t[0]=='1' && t[tn-1]=='0')
    {
        cout << tn << endl;
    }
    else if(t[0]=='1' && t[tn-1]=='1')
    {
        cout << tn << endl;
    }
    else if(t[0]=='0' && t[tn-1]=='1')
    {
        cout << tn-1 << endl;
    }
    else
    {
        cout <<"hat"<<endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}