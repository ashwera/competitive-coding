#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
string s,t="";
cin >> s;
int n=s.length();
int f=0,nc=0,tc=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='F')
    {
        f++;
    }
    else if(s[i]=='N')
    {
        nc++;
    }
    else if(s[i]=='T')
    {
        tc++;
    }
    else
    {
        t = t+s[i];
    }
}
while(tc--) t = t+'T';
while(nc--) t = t+'N';
while(f--) t = t+'F';
cout << t << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}