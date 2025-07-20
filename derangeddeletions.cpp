#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n; cin >> n;
vector <int> v(n);
input
for(int i=1;i<n;i++)
{
    //spot a desc order
    if(v[i]<v[i-1])
    {
        yes 
        cout << 2 << endl;
        cout << v[i-1] <<" " << v[i] << endl; 
        return;
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