#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n , p;
    cin >> n >> p;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(),v.rend());
    int count=0;
    for(int i=0;i<n;i++)
    {
        int number = (p+v[i])/v[i]; //ceil division
        n=n-number+1; //now the loop doesnt run over last "x" elements 
        if(n>i)
        count++;
    }
    cout << count << endl;
}
signed main() {
    int t;
    // cin >> t; 
    t=1;
    while (t-- > 0) {
        solve(); 
    }
}