#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector <int> v(n);
    cin >> v[0];
    long finalmax = LONG_MAX;
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        long localmax = max(v[i],v[i-1]);
        finalmax = min(finalmax,localmax);         
    }
    cout << finalmax-1 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t-->0)
    solve();
}