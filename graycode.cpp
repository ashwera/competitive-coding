#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<string> grey = {"0","1"}; //primary greycode

    for(int i = 2 ; i <= n ; i++) //1 tak hogaya
    {
        vector <string> rev = grey;
        reverse(rev.begin(),rev.end()); //store reverse of greycode in rev
        //to maintain hammer diff, add 0 and 1 before grey and rev respectively
        for(string& s : grey) s = "0" + s;
        for(string& s : rev) s = "1" + s;
        //update grey for next iteration
        grey.insert(grey.end(), rev.begin(), rev.end()); //in the end of grey, add rev from start to end.
    }
    //print greycode for n bits
    for(string s : grey) cout << s << endl;
}

signed main() {
        solve(); 
    return 0;
}