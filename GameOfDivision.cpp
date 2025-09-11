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
    int n, k; 
    cin >> n >> k;
    vector <int> v(n);
    input
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<n;j++)
        {
            if(j!=i && abs(v[i]-v[j])%k==0){
                flag = false;
            }
        }
        if(flag){
            yes
            cout << i+1 << endl;
            return;
        }
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