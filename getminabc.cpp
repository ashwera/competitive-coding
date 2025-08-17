#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
multiset<int>s;
int t;
cin >> t;
while(t--)
{int n;
cin >> n;
if(n==1)
{
    int x;
    cin >> x;
    s.insert(x);
}
else
{
    cout << *s.begin() << endl;
    s.erase(s.begin());
}
}
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    
        solve();
    }
