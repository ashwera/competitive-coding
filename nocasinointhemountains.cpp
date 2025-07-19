#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n,k; cin >> n >> k;
vector <int> v(n);
input
int zc=0;
int days=0;
for(int i=0;i<n;i++)
{
    if(v[i]==0)
    {
        zc++;
    }
    else
    {
        zc=0;
    }
    if(zc==k)
    {
        if(i<n-1)
        {
            v[i+1]=1;
        }
        zc=0;
        days++;
    }
}
cout << days << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}