#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n; cin >> n;
map <int,int> freq;
// input
for(int i=0;i<n;i++)
{
    int x;
    cin >> x;
    freq[x]++;
}
for(auto it:freq)
{
    if(it.second > 1) {
        yes return;
    }
}
no
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