#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    string s = "";
    cin >> n >> s;
    //let the - denote 1
    //let the _ denote 0 for simplicity because wtf
    int onecounts = 0 ;
    int zerocounts= 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-')
        onecounts++;
        else
        zerocounts++;
    }
    int output = zerocounts*(onecounts/2);
    if(onecounts%2==0)
    {
        output *= onecounts/2;
    }
    else
    {
        output *= (onecounts/2)+1;
    }
    cout << output << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}