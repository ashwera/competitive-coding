#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, x;
    int count=0;
    cin >> n >> x;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        if(val>=x)
        count++;
        else
        v.push_back(val);
    }
    sort(v.begin(), v.end());  
    int l = v.size();
    int i = 0;
    while(i < l) {
        
    }
    cout << count << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}