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
    vector <int> v(n);
    input
    vector<int>v2=v;
    int el=-1;
    int index=0;
    sort(v2.rbegin(),v2.rend());
    for(int i=0;i<n;i++){
        if(v[i]!=v2[i]){
            index=i;
            el=v2[i];
            break;
        }
    }
    if(el==-1){
        print(v);
        return;
    }
    auto it = find(v.begin(),v.end(),el);
    reverse(v.begin()+index,it+1);
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