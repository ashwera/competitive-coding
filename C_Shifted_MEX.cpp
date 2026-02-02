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

int findmex(vector<int>& v){
    int mex = 0;
    for(int x : v){
        if(x == mex) mex++;
        else if(x > mex) break;
    }
    return mex;
}
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &x: v) cin >> x;

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int best = 0, cur = 0;

    for(int i = 0; i < v.size(); i++){
        if(i == 0 || v[i] != v[i-1] + 1)
            cur = 1;
        else
            cur++;

        best = max(best, cur);
    }

    cout << best << endl;
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