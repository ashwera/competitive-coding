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
    string s;
    cin >> s;
    int n = s.size();
    string t = "CODEFORCES";
    if(n<10) {
        no return;
    }
    int a=0;
    for(int i=0;i<n;i++){
        if(a>=n) break;
        if(s[i] == t[a]){
            a++;
        }
        else{
            break;
        }
    }
    int b=9;
    int let = a;    
    if(let==10) {
        yes return;
    }
    for(int i=n-1;i>=0;i--){
        if(let==10) {
            yes return;
        }
        if(s[i] == t[b]){
            b--;
            let++;
        }
        else{
            break;
        }
    }
    if(let==10) yes else no
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    // cin >> t;
    // while (t-- > 0) {
        solve();
    // }
}