#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s ="";
    cin >> s;
    string t = s + s;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        //find the longest gap between c and g
        auto j = find(t.begin(),t.end(),c);
        auto it = find(j , t.end(),'g'); //after c, find the first occ of g.
        // cout << "index of g: " << it-t.begin() << endl;
        if(j==t.end() || it == t.end()) break;
        int dist = it - j;
        t = t.substr(it-t.begin()); //restart after g
        // cout << "t is now: " <<t << endl;
        ans = max(ans, dist);
    }
    cout << ans << endl;    
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}