#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "0"  << endl;
#define no cout << "-1" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int a,b;
    cin >> a >> b;
    if(a==b) {
        yes return;
    }
    if(a>b){
        swap(a,b);
    }
    if(b%a!=0){
        no
        return;
    }
    int n = b/a;
    int power=0;
    while(n>0){
        if(n==1){
            break;
        }
        if(n%2!=0 && n!=1){
            no return;
        }
        power++;
        n/=2;
    }
    if(power%3==0) cout << power/3 << endl;
    else cout << power/3 + 1 << endl;
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