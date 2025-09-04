#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
int n; cin >> n;
vector <int> l(n),r(n);
for(int i=0;i<n;i++)
{
    cin >> l[i] >> r[i];
}

int lo=0, hi=1e9;
while(lo<hi)
{
    int k = (lo + hi) / 2;
    cout << k << endl;
    int f = 0;
    int pl = 0, pr = k;
    for(int i=0;i<n;i++)
    {
        if(pr < l[i] || pl > r[i])
        {
            f=1;
            break;
        }
        pl = max(pl,l[i]);
        pl = max(0ll, pl-k);
        pr = min(pr,r[i]) + k; //reachable spot for r and l
    }
    if(f==1)
        {
            lo = k + 1;  //k is too small
        } 
    else
        {
            hi = k; // k is too big 
        }
}
cout << lo << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}