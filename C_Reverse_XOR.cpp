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
    int ones=0;
    string s="";
    while(n>0){
        ones += (n%2);
        if(ones>0)
        s.push_back((n % 2 ) + '0');
        n/=2;
    }

    if(ones%2==0){
        //check if binstring without leading lagging zeroes is pal
        string t=s;
        // cout << s << endl;
        reverse(t.begin(),t.end());
        // cout << t << endl;
        if(s==t) yes else no 
    } else no 
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