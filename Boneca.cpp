#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
    int n,t;
    cin >>   t;
    int sum=0;
    cin >>n;
    while(t--)
    {
        int s; cin>>s;
        cout << (s^n) << endl;
        sum+=s^n;
    }
    cout << sum << endl;
}