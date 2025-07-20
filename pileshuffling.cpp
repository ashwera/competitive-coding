#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n; cin >> n;
// vector <int> v(n);
int ops=0;
for(int i=0;i<n;i++)
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    //first remove zeroes 
    if(a>c)
    {
        ops += (a-c);
        a=c;
    }
    //deal with remaining ones
    if(b>d)
    {
        int extraones = (b-d);
        ops += (extraones+a);
    }
    //upar ke zeroes have to go neeche to help remove one
}
cout << ops << endl;
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