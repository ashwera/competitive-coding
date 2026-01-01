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
    vector <int> a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++) cin >> c[i];
    //fix a and rotate b and c to check
    vector<int>goodht, goodtl;
    for(int i=0;i<n;i++){
        bool fine=true;
        for(int t=0;t<n;t++){
            if(a[t] >= b[(t+i)%n]){
                fine = false;
                break;
            }
        }
        if(fine){
            goodht.push_back(i);
        }
    }

    // int maxb = *max_element(b.begin(),b.end());
    for(int i=0;i<n;i++){
        bool fine=true;
        for(int t=0;t<n;t++){
            if(b[t] >= c[(t+i)%n]){
                fine=false; 
                break;
            }
        }
        if(fine){
            goodtl.push_back(i);
        }
    }
    // print(goodht);
    // print(goodtl);
    cout <<( goodtl.size()*goodht.size())*n << endl;
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