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
    int n, s, x;
    cin >> n >> s >> x;
    vector<int>v(n);
    input
    int sum=0;
    for(int i:v){
        sum+=i;
    }
    if(sum>s){
        no
        return;
    }
    int need = s-sum;
    if(need%x==0){
        yes return;
    }
    no
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