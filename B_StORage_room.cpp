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
    int val = (1 << 30);
    vector<vector<int>>matrix(n, vector<int>(n));
    val--;
    vector <int> v(n,val);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
            if(i!=j)
            v[j] = v[j] & matrix[i][j];
        }
    }    
        // print(v);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j) 
            {
                if(matrix[i][j]!=(v[i]|v[j])){
                    // cout << matrix[i][j] << " " << i << " " << j << endl;
                    no return;
                }
            }
        }
    }  
    yes
    print(v);
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