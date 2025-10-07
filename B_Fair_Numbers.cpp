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

bool isFair(string s){
    int sum=0;
    vector<bool>mp(10,false);
    int n = s.length();
    if(n<2) return true;
    for(char ch:s){
        sum += (ch-'0');
        mp[ch-'0'] = true;
    }
    if(mp[2]==true && s[n-1]%2!=0) return false;
    //check for 2
    if(sum%3!=0 && mp[3]==true) return false;
    if(mp[6]==true && (sum%3!=0 || s[n-1]%2!=0)) return false;
    if(sum%9!=0 && mp[9]==true) return false;
    if(mp[4]==true)
    {
        //last two digits must be div by 2
        int num = (s[n-2]-'0')*10 + s[n-1];
        if(num%4!=0) return false;
    }
    if(mp[8]==true)
    {
        //last two digits must be div by 2
        int num;
        if(n>3)
        num = (s[n-3]-'0')*100 + (s[n-2]-'0')*10 + s[n-1];
        else
        num = stoll(s);
        if(num%8!=0) return false;
    }
    if(mp[5]==true){
        if(s[n-1]!='5' && s[n-1]!='0') return false;
    }
    if(mp[7]==true)
    {
        int x = stoll(s);
        if(x%7!=0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    for(int i=n;i<=(2600+n);i++)
    {
        if(isFair(to_string(i)))
        {
            cout << i << endl;
            return;
        }
    }
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