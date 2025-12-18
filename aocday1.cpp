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
    int x=50;
    int c=0;
    while(n--){
        string s;
        cin >> s;
        int l = s.size();
        int v = stoll(s.substr(1,l-1));
        if(s[0]=='R'){
            while(v--){
                x++;
                if(x==100){
                    x=0;
                    c++;
                }
            }
        }
        else{
            while(v--){
                x--;
                if(x==0){
                    c++;
                }
                else if(x<0){
                    x=99;
                }
            }
        }
        // cout << "x is " << x << endl;
        // cout << c << endl;
    }
    cout << c << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    solve();
}