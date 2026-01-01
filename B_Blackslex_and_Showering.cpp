#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    input

    if(n <= 2){
        cout << 0 << endl;
        return;
    }

    vector<int> effect(n, 0);

    // base sum
    int base = 0;
    for(int i = 1; i < n; i++){
        base += abs(v[i] - v[i-1]);
    }

    effect[0] = abs(v[1] - v[0]);
    effect[n-1] = abs(v[n-1] - v[n-2]);

    for(int i = 1; i <= n-2; i++){
        effect[i] = abs(v[i] - v[i-1]) + abs(v[i+1] - v[i]) - abs(v[i+1] - v[i-1]);
    }

    int max_reduction = *max_element(effect.begin(), effect.end());
    cout << base - max_reduction << endl;
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