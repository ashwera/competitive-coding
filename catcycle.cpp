#include <bits/stdc++.h>
using namespace std;
#define int long long

int mod(int a, int m) {
    return (a % m + m) % m;
}

void solve() {
    int n,k;
    cin >> n >> k;
    int hrs=k;
    int bumps = 0;
    //first bump happens at n+1/2 and 2nd onwards it happens at next n/2th
    //no bumps if n is even
    if (n%2==0)
    {
        bumps=0;
    }
    else
    {
        k -= (n + 1) / 2;
        if (k >= 0)
        bumps = 1 + (k / (n / 2)); // integer division
        else
        bumps = 0;
    }
    int b = (bumps+hrs)%n;
    if (b==0) b=n;
    cout << b << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}