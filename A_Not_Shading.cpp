#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(vector<int>&j:v){for(int &i:j) cin >> i;}
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n,m,r,c; cin >> n >> m >> r >> c; 
        r--;c--;

    vector <vector<char>> v(n,vector<char>(m));
    bool allwhite=true;
    bool samerc=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
            if(v[i][j]=='B') {
                allwhite=false;
                if(i==r || j==c){
                    samerc=true;
                }
            }
        }
    }
    if(v[r][c]=='B'){
        cout << 0 << endl;
    }
    else if(allwhite){
        cout << -1 << endl;
    }
    else if(samerc){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
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