#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
string s;
cin >> s;
int n = s.length();
int longest=0;
int length=1;
char curr=s[0];
for(int i=1;i<n;i++)
{
    if(s[i]==curr){
        length++;
    }
    else{
        curr = s[i];
        longest = max(length,longest);
        length=1;
    }
}
longest = max(length,longest);
cout << longest << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}