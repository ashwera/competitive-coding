#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:q) cin >> i;
#define inputr for(int &i:r) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n, k; cin >> n >>k;
    vector <int> q(n), r(n);
    input
    inputr
    multiset<int>st(q.begin(),q.end());
    sort(r.begin(),r.end());
    int count=0;
    for(int i=0;i<n;i++){
        int d = r[i]+1;
        int x = (k-r[i]) / d;
        auto it = st.upper_bound(x);
        if(it==st.begin()){
            continue; //not found 
        }
        it--;
        count++;
        st.erase(it);
    }
    cout << count << endl;
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