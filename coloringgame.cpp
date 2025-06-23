#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin >> v[i];

    sort(v.begin(),v.end());

    //brute> 5000>yes>>no. 
    //triple loop.
    //condition;sum>max of array
    // sum-maxof3 > maxof3
    int ways=0;
    int maxVal = v[n-1];
    int maxIndex = find(v.begin(), v.end(), maxVal) - v.begin();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum = v[i] + v[j];
            int lo = upper_bound(v.begin() + j + 1, v.end(), maxVal - sum) - v.begin();
            int hi = lower_bound(v.begin() + j + 1, v.end(), sum) - v.begin();

            //find smallest k that satisfies 
            //all beyond satisfy too 
            //sum>v[last]
            //but, always check if element at maxindex is less than sum of first two
            ways += max(0LL, hi - lo);
        }
    }
    cout << ways << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}