#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
string s,t;
cin >> s >> t;
int n = s.length();
int m = t.length();
int l=0,maxlen = 0;
for(int i=0;i<n;i++)
{
    for (int idx = 0; idx < m; idx++) {
    if (t[idx] == s[i]) {
        int a = i, j = idx, l = 0;
        while (a < n && j < m && s[a] == t[j]) {
            l++;
            a++;
            j++;
        }
        maxlen = max(maxlen, l);
    }
    }
}
// cout << maxlen << endl;
//maxlen is the max lenght of s and t after necessary ops 
cout << n+m-(2*maxlen) << endl;
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