#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int l=1;
    int r=999;
    while(r-l > 2){
        int a = (2*l + r)/3;
        int b = (2*r + l)/3;
        cout << "? " << a << " " << b << endl;
        int ans;
        cin >> ans;
        if(ans == (a*b)){
            l=b;
        }
        else if(ans == a*(b+1)){
            l=a;
            r=b;
        }
        else if (ans == (b+1)*(a+1)){
            r=a;
        }
    }

    if(r-l == 2){
        cout << "? 1 " << l + 1 << endl;
		int resp; cin >> resp;
		
		if (resp == l + 1) {l = l + 1;}
		else {r = l + 1;}
    }
    cout << "! "<<r << endl;
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