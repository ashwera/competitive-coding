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
    int n,k; cin >> n >> k;
    if(k == n*n - 1) {
        no return;
    }
    yes
    //bottom row is rllll
    vector<char>v;
    //rest all is d 
    for(int i=0;i<k;i++){
        v.push_back('U');
    }
    int downs = (n*n)-k-n;
    for(int i=0;i<downs;i++) v.push_back('D');
    v.push_back('R');
    
    for(int i=1;i<n;i++) 
    v.push_back('L');

    // for(char ch: v) cout << ch << endl;
    int a=0;
    while(a<n*n)
        {
            cout << v[a];
            a++;
            if(a%n==0) cout << "\n";
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