//redo once

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        total += v[i];
    }

    int mindiff = 1e18;

    for (int mask = 0; mask < (1 << n); ++mask) //runs from 0 to 2^n-1. 
    //why 2n-1? total possible arrangements for n is 2n
    {
        int ss = 0; //subset sum
        for (int i = 0; i < n; ++i) //checks for each bit if its set
        {
            if (mask & (1 << i)) //checks if the ith bits in mask are set
            {
                ss += v[i];
            }
        }
        int os = total - ss;
        mindiff = min(mindiff, abs(ss - os));
    }
    cout << mindiff << endl;
}
signed main() {
    int t;
    t=1;
    while (t-- > 0) {
        solve(); 
    }
}