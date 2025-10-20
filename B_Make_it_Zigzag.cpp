#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

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
    //keep track of local maxima and make all even i's that number.
    //then whenever failure happens, change
    int ops=0;
    int localmaxima=0;
    for(int i=0;i<n;i++){
        localmaxima=max(localmaxima, v[i]);
        if(i&1){
            v[i]=localmaxima;
        }
    }
    for(int i=1;i<n;i+=2){
        if(v[i]<=v[i-1]){
            ops+=abs(v[i]-v[i-1]);
            ops++;
            v[i-1] = v[i]-1;
        }
        if(v[i]<=v[i+1] && (i<(n-1))){
            ops+=abs(v[i]-v[i+1]);
            ops++;
            v[i+1]=v[i]-1;
        }
    }
    cout << ops << endl;
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