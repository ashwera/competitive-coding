#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

int largestpoweroftwolessthan(int n)
{
    int res = 0;
    for (int i = n; i >= 1; i--) {
        // If i is a power of 2
        if ((i & (i - 1)) == 0) {
            res = i;
            break;
        }
    }
    return res;
}


int largestpoweroffivelessthan(int n)
{
    int res = 1;
    while (res * 5 <= n) {
        res *= 5;
    }
    return res;
}


signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    //largest power of 5 and 2 less than t?
    int two = largestpoweroftwolessthan(t);
    int five= largestpoweroffivelessthan(t);
    cout << min(two,five) << endl;
}