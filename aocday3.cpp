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

int solve(string s) {

    int mxdig=-1, loc=-1, smxdig=-1;
    for(char ch:s){
        int dig = ch - '0';
        if(dig>mxdig){
            mxdig=dig;
            loc = &ch - &s[0];
        }
    }
    if(loc!=s.size()-1){
        smxdig=-1;
        for(int i=loc;i<s.size();i++){
            int dig = s[i]-'0';
            if(dig>smxdig){
                smxdig=dig;
            }
        }
        cout << mxdig << " " << smxdig << endl;

        return mxdig*10 + smxdig;
    }
    else{
        smxdig=-1;
        for(int i=loc-1;i>=0;i--){
            int dig = s[i]-'0';
            if(dig>smxdig){
                smxdig=dig;
            }
    }
    cout << smxdig << " " << mxdig << endl;

    return smxdig*10 + mxdig;
}
return mxdig*10 + smxdig;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=200;
    // cin >> t;
    int sum=0;
    while (t-- > 0) {
        string s;
        cin >> s;
        sum+=solve(s);
    }
    cout << sum << endl;
}