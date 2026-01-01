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
    int twon = 1 << n;
    twon--;
    int maxval=twon;
    set<int>s;
    for(int i=0;i<twon;i++)
    {
        s.insert(i);
    }
    //print twon
    //reduce twon by right shift
    //print new twon and all vals twon + 2^n+1
    int power=n;
    vector<int>v;
    v.push_back(twon);
    s.erase(twon);
    twon = twon >> 1;
    while(twon > 0){
        int add = 1 << power; //2^3;
        int count=0;
        while((add*count)+twon < maxval){
            v.push_back((add*count)+twon);
            s.erase((add*count)+twon);
            count++;
        }
        twon >>=1;
        power--;
    }
    for(int i:s){
        v.push_back(i);
    }
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