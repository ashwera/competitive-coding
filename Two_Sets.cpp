#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(vector<int>&v)
{
    for(int i:v) cout << i << " ";
    cout << endl;
}

void solve() {
int n; cin >> n;
int sum = (n*(n+1)) / 2;
if(sum%2!=0) {
    no return;
}
else{
    yes
    vector<int>v,w;
    int i=1;
    if(n%2!=0)
    {while(i<=n)
    {
        v.push_back(i++);
        if(i<=n)v.push_back(i++);
        if(i<=n)w.push_back(i++);
        if(i<=n)w.push_back(i++);
    }

    cout << v.size() << endl;
    print(v);
    cout << w.size() << endl;
    print(w);
    }
    else{
    {
        w.push_back(i++);
        while(i<=n)
    {
        v.push_back(i++);
        if(i<=n)v.push_back(i++);
        if(i<=n)w.push_back(i++);
        if(i<=n)w.push_back(i++);
    }

    cout << v.size() << endl;
    print(v);
    cout << w.size() << endl;
    print(w);
    }
}
}
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}