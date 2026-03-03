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
    string s; cin >> s;
    stack<char>st;
    for(char c:s){
        if(st.empty()){
            st.push(c);
            continue;
        } 
        char o = st.top();
        if(c==o){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    if(st.size()==0) yes else no
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