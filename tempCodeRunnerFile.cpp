#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    cin>>v[0];
    int result = v[0];
    for(int i=1;i<n;i++)
    {
        cin >> v[i];
        result = gcd(result,v[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        v[i]/=result;
        if(v[i]==1)
        {
            count++;
        }
    }
    if(count)
    {
        cout << n-count << endl;
        return;
    }

    int mincount=1e18;
    //else 
    //calculate min operations to make any element as 1  
    for(int i=0;i<n;i++)
    {
        count=0; //count nubmer of ops to make i as 1
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
                v[i] = gcd(v[i],v[j]); 
                count++;
                if(v[i]==1)
                {
                    mincount=min(mincount,count);
                    break;
                }
            }
        }
    }
    // cout << mincount << endl;
    //ans = mincount + n - 1
    //6 10 15
    //1 10 15
    //1 1 15
    // 1 1 1 
    //four ops because 
    //mincount=1 and n=3, ans is mc+n-1, 1+2? and add counts if any 
    int ans = mincount + n - 1;
    if(result!=1) ans++;
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}