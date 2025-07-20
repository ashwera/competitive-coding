#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes"  << endl;
#define no cout << "No" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n,k; cin >> n >> k;
vector <int> v(n);
input
int cur = v[k-1]; 
//only care about after cur element 
sort(v.begin(),v.end());
auto it = find(v.begin(),v.end(),cur);
int idx = it - v.begin();
auto lb = lower_bound(v.begin(),v.end(),v[n-1]);
int lbi = lb - v.begin();
// int maxel = *max_element(v.begin(),v.end());
int x=0;
int time = 0;
for (int i = idx + 1; i < n; ++i) {
    int next = v[i];
    int d = abs(next - cur);
    if (time + d > cur) {
        no
        return;
    }
    time += d;
    cur = next;
}
yes
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}