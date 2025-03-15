#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    n*=2;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(), v.end(), greater<int>());
    int val = 0;
    for(int i=0;i<n;i++)
    {
        val += (v[i] * (pow(-1,i)));
    }
    int j=0;
    label:
    if (find(v.begin(), v.end(), val) != v.end()) 
    {
        val = val - v[j] + 2*v[j];
        int temp = val;
        val = v[j];
        j++;
        goto label;
    }
    val = abs(val);
    cout << val << " ";
    for(auto i: v)
    {
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}