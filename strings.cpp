#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s="";
    cin >> s;
    int n = s.length();
    int cnt = 0;
    for (int i = 0 ; i < n ;i++)
    {
        char ch = s[i];
        if(ch=='1')
        cnt++;
    }
    cout << cnt << endl;
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