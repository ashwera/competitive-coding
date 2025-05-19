#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            count += (n-1);
        }
        else 
        {
            count+=1;
        }
    }
    cout << count << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}