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
    int neg=0;
    int index;
    for(int i=0;i<n;i++){
        if(v[i]<0) neg++;
        if(v[i]==0){
            cout << 0 << endl;
            return;
        }
        index=i;
    }
    if(neg%2==0){
        cout << 1 << endl;
        cout << index+1 << " " << 0 << endl;
    }
    else{
        cout << 0 << endl;
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