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
    int a,b;
    cin >> a >> b;
    int dif = abs(a-b);
    for(int i=0;i<1e9;i++)
    {
        int rn = (i*(i+1))/2;
        if(rn>=dif && rn%2==dif%2){
            cout << i << endl;
            return;
        }
    }
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