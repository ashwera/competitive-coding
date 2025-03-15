#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    multiset <int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.insert(a);
    }
    if(n==1)
    {
        cout << *v.begin() << endl;
        return;
    }
    while (v.size() > 1) {
        auto it = v.begin();
        auto next_it = next(it);
        
        int val = *it + *next_it - 1;
        v.erase(it);
        v.erase(next_it);
        
        v.insert(val);
    }

    for(int val:v)
    cout << val << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}