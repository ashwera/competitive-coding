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
    vector<bool>v(n);
    for(int i=0;i<n;i++){
        v[i] = false;
    }
    vector<int>ans(n);
    if(n%2==0){
        ans[n-1] = n;
    v[ans[n-1]] = true;
    for(int i=n-2;i>0;i--){
        if((i+1)%2!=0)
        ans[i] = abs(ans[i+1] - i - 1);
        else
        ans[i] = ans[i+1]+i+1;

        ans[i] = ans[i]%n;
        v[ans[i]-1] = true;
    }
    for(int i=0;i<n;i++){
        if(v[i]==false){
            ans[0]=i+1;
            break;
        }
    }
    }
    else{
        ans[n-1] = n;
    v[ans[n-1]] = true;
    for(int i=n-2;i>0;i--){
        if((i+1)%2==0)
        ans[i] = abs(ans[i+1] - i - 1);
        else
        ans[i] = ans[i+1]+i+1;

        ans[i] = ans[i]%n;
        v[ans[i]-1] = true;
    }
    for(int i=0;i<n;i++){
        if(v[i]==false){
            ans[0]=i+1;
            break;
        }
    }
    }
    print(ans);
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