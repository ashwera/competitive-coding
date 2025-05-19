#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    vector<int>b(n);
    int minel=1e18;
    int maxel=-1e18;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        minel = min(a[i],minel);
        maxel = max(a[i],maxel);
    }
    bool allmissing=true;
    int target;
    bool notpossible=false;
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
        if(b[i]!=-1 && allmissing)
        {
            allmissing=false;
            target = b[i] + a[i];
        }
        if(!allmissing && b[i]!=-1) //already found one match
        {
            if(target!=(b[i] + a[i])) //next match does not match.
            {
                notpossible=true;
            }
        }
        // cout << target << " " << i << endl;
    }
    if(notpossible)
    {
        cout << 0 << endl;
        return;
    }
    if(allmissing)
    {
        cout << (k+minel)-maxel+1 << endl;
        return;
    }
    // cout << target << " " << minel << endl;
    //max attainable: 0+k
    if(target<=(minel+k) && target >= maxel)
    {
        cout << 1 << endl;
        return;
    }
    cout << 0 << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}