#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int>v(m),prefixsum(m+1);
    int ways=0;
    for(int i=0;i<m;i++)
    {
        cin >> v[i];
        if(v[i]>n-1) v[i] = n-1;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++)
    {
        prefixsum[i+1] = prefixsum[i]+v[i];
    }

    //for each element, ways = 
    // t + et + sum - nt  where t is number of terms
    for(int i=0;i<m;i++)
    {
        auto it = upper_bound(v.begin()+i+1,v.end(),max(v[i],(n-v[i]-1)));
        int index = it-v.begin();
        if(v[i] > (n-v[i]-1))
        {
            if(i < m-1 && v[i+1]==v[i]) 
                index = i+1;
        }
        int k = m-index;
        // cout << "element: " << v[i] << endl;
        // cout << "k.a: " << k*v[i] << endl;
        // cout << "n-1 . k : " << (n-1)*k << endl;
        // cout << "ps's: " << prefixsum[m] << " " << prefixsum[index] << endl;
        int newways = (k*v[i]) - ((n-1)*k) + prefixsum[m] - prefixsum[index];
        // cout << "new ways: " << newways << endl;
        ways+=newways;
    }
    cout << (ways*2) << endl;
}  
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}