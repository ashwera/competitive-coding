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
    int ans=s.size();
    stack<char>st;
    for(char ch:s){
        if(ch=='('){
            st.push('(');
        }
        else{
            if(st.empty()) ans--;
            else st.pop();
        }
    }
    ans -= st.size();
    cout << ans;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    solve();
}