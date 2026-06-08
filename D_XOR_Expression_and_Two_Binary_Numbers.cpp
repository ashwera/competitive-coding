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

int ones(const string& s){
    return count(s.begin(), s.end(), '1');
}


int solve() {
    int n; cin >> n;
    int k;
    cin >> k;
    string s;
    string t;
    cin >> s >> t;
    int diff = 0;
    for(int i = 0; i < n; i++){
        diff += (s[i] != t[i]);
    }

    int u,v,w;
    if(k%2==0){
        int rhs = (1ll<<k) + 1;
        int a = (rhs+1)/3;
        u = ones(s) * (n - ones(s));
        v = ones(t) * (n - ones(t));
        w = diff * (n - diff);
        return (a*u + a*v + (a-1)*w);
    }
    int rhs = (1<<k) + 1;
    int a = (rhs)/3;
    u = ones(s) * (n - ones(s));
    v = ones(t) * (n - ones(t));
    w = diff * (n - diff);
    return (a*u + a*v + a*w);
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        cout << solve() << endl;
    }
}