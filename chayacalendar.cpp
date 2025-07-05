#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void print(vector<int>v)
{
    for(int x:v)
    {cout << x << " ";
    }
    cout << endl;
}
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }

    // 3 2 4 5 9 18
    // so 2x > 3
    // x > 2/3 
    // x = ceil 2/3 or if rem 0, 2/3 + 1
    // and replace 2 by the output 2x 
    for(int i=1;i<n;i++)
    {
        int x = (v[i] + v[i-1] - 1) / v[i];
        if((v[i-1] % v[i]) == 0)
        {
            x++;
        }
        v[i]*=x;
        // print(v);
    }
    cout << v[n-1] << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}