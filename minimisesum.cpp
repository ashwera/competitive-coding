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
//find first irregularity. if descending, ans is either 2v(a) or v(a)+next
//if asc, ans is 2v[a]
//if same, ans is v[a]
//answer only depends on first 3 integers
if(n==2)
{
    if(v[0]<v[1])
    {
        //asc
        cout << 2*v[0] << endl;
        return;
    }
    else
    {
        cout << v[0]+v[1] << endl;
        return;
    }
}
for(int i=1;i<n;i++)
{
    if(v[i]>v[i-1])
    {
        //asc
        cout << 2*v[i-1] << endl;
        return;
    }
    else if(v[i]<v[i-1])
    {
        cout << min(v[i]+v[i-1] , 2*v[i-1]) << endl; 
        return;
    }
    else 
    {
        //all identical
        
            cout << 2*v[i] << endl; return;
        
        return;
    }
}
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