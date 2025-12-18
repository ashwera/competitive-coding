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
    string s;
    cin >> s;
    int count=0;
    int brack=0;
    for(char ch:s){
        if(ch=='('){
            brack++;
        }
        else{
            brack--;
        }
        if(brack==0){
            count++;
        }
    }
    if(count>1) yes else no
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