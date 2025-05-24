#include <bits/stdc++.h>
using namespace std;
#define int long long

int smallestprimedivisor(int x)
{
    for (int i = 3; i * i <= x; i += 2) {
        if(x%i==0){
            return i;
        }
    }
    return -1;
}

void solve() {
    int n;
    cin >> n;
    if(n%2==0)
    {
        cout << n/2 << " " << n/2 << endl;
    }
    //if number is divisible by a prime
    else
    {
        //number/smallest prime divisor is the first thing
        int smallestprime = smallestprimedivisor(n);
        if(smallestprime!=-1)
        {
            cout << n-(n/smallestprime) << " " << n/smallestprime << endl;
        }
        else
        {
            cout << 1 << " " << n-1 << endl;
        }
    }
    // else
    // {
    //     cout << n-1 << " " << 1 << endl;
    // }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}