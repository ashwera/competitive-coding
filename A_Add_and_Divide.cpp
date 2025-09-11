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
    int a,b;
    cin >> a >> b;
    if(a==b) {
        cout << 2 << endl;
        return;
    }
    if(b>a)
    {
        cout << 1 << endl;
        return;
    }
    bool flag = false;
    if(b==1) {
        b++;
        flag = true;
    }
    int ans = a-b+2; //make b = a+1, take a-b+1 operations then divide so one more op
    int B=b, A;
    while(true)
    {
        //find smallest power of b more than a 
        A = a;
        int power=1;
        while(A>=B)
        {
            A/=B;
            power++;
        }
        int tempans = power + (B-b); 
        if(tempans > ans){
            break;
        }
        else{
            ans = tempans;
            B++;
        }
    }
    if(flag) ans++;
    cout << ans << endl;
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