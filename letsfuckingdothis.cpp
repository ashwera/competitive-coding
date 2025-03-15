#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n ,x;
    cin >> n >> x;
    vector<int> v(n);
    if(n==1)
    {
        // cout << "here";
        // v.push_back(x);
        cout << x << endl;
        return;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            //populate till n-2 then check
            v[i] = i;
        }
        int val = v[n-2];//last populated ccell
        int secval = !(x&(n-2)); // this is the value jisse last cell ko or karne par you get x
        if(secval < val) //if it's already in the array, you've already achieved x
        {
            cout << secval;
            v[n-1] = n-1;
        }
        else
        {
            cout << secval ;
            v[n-1] = secval;
        }
    }
    int orval = 0;
    for(int num:v)
    {
        cout << num << " ";
        orval = orval | num;
    }
    cout << "\n" << orval <<  endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}