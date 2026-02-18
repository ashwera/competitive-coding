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
    string s;
    cin >> s;
    map<string,int>freq;
    int maxfreq=0; 
    string mostfreq="";
    for(int i=1;i<n;i++){
        string t = "";
        t+=s[i-1];
        t+=s[i];
        freq[t]++;
        if(freq[t]>maxfreq){
            maxfreq=freq[t];
            mostfreq=t;
        }
    }
    cout << mostfreq << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}