#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n),a,b,c,d;
    input

    for(int i:v){
        if(i%6==0) a.push_back(i);
        else if(i%2==0) b.push_back(i);
        else if(i%3==0) c.push_back(i);
        else d.push_back(i);
    }
    vector<int>ans;
    for(int i:a){
        ans.push_back(i);
    }
    for(int i:b){
        ans.push_back(i);
    }
    for(int i:d){
        ans.push_back(i);
    }
    for(int i:c){
        ans.push_back(i);
    }
    print(ans);
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
