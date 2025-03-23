#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k;
    cin >> n >> k;
    if(n%2!=0 && k&2!=0)
    {
        //both odd
        //n-k then n minus k-1 some number of times
        n-=k;
        int x=0;
        if(n%(k-1)!=0)
        {
            x = (n+k-1)/(k-1); //ceil value 
        }
        else
        {
            x = n/(k-1);
            // cout << "here";
        }
        cout << (x+1) << endl;
    }
    else if(n%2!=0 && k%2==0)
    {
        // subtract k-1 first and make it even, then repeat
        n-=(k-1);
        int x = (n+k-1)/k; //ceil value 
        cout << x+1 << endl;
    }
    else if(n%2==0 && k%2==0)
    {
        int x = n/k;
        cout << x << endl;
    }
    else
    {   int x;
        // n is even but k is odd
        if(n%(k-1)!=0)
        {
            x = (n+k-1)/(k-1); //ceil value 
        }
        else
        {
            x = n/(k-1);
            // cout << "here";
        }
        cout << x << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}