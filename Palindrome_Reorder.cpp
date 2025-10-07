#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
    string s;
    cin >> s;
    unordered_map<char,int>mp;
    char solo = '0';
    for(char ch:s){
        mp[ch]++;
    }
    string output="";
    int rep=0;
    output.reserve(s.size()/2);
    for(auto[key,value]:mp)
    {
        if(value%2==1){
            if(solo!='0'){
                cout << "NO SOLUTION" << endl;
                return;
            }
            solo = key;
            rep = value;
            continue;
        }
        output += string(value/2, key);
    }

    if(mp.size()==1) {
        cout << s << endl;
        return;
    }
    string safe = output;
    reverse(output.begin(),output.end());
    if(solo!='0')
    {
        safe += string(rep,solo);
    }

    cout << safe;
    cout << output;

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