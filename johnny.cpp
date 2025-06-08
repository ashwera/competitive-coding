#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    
    //check each bit rtl
    //precompute
    map<int,int>m;
    m[1]=1;
    for(int i=2;i<1e18+10;i*=2)
    {
        //preocmute till higihest 
        m[i] = (2*i) - 1; //observation
    }

    int t;
    cin >> t;
    while(t--)
    {
        int n;
    cin >> n;
    int ans=0;
    int i=0;
    while(n)
    {
        if(n%2==1)
        {
            //if the bit is 1 
            ans += m[pow(2,i)];//use its map
            //basically, if this is true, the ith bit on then right is set 
        }
        n/=2; //move to the next
        i++;
    }
cout << ans << endl;
}
}
signed main() {
    solve();
}