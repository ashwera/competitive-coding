#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    //fill n with max beauty first
    int sum=s;
    vector<int>v(n,0);
    int beautifulcell = (k*(b+1))-1; //all beauty in one cell
    int minrange = b*k;
    int maxrange = minrange + n*(k-1);
    if(s>maxrange || s<minrange)
    {
        cout << -1 << endl;
        return;
    }
    v[0] = min(s,beautifulcell);
    // cout << v[0];/
    s-=v[0];
    int a=1;
    while(s)
    {
        //fill up with all beauty first
        v[a] = min(s,k-1); //so that beauty remians 0 for all cells
        int remain = s - v[a];
        s = remain;
        a++;
        // cout << v[a] << endl;
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=v[i];
    }
    for(int num:v)
    {
        cout << num <<" ";
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