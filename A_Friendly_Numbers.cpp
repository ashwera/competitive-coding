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

int f(int x){
    int s=0;
    while(x>0){
        s += (x%10);
        x/=10;
    }
    return s;
}

int solve() {
    int n; cin >> n;
    int ans=0;
    for(int i=n;i<n+162;i++){
        if( i - f(i) == n) ans++;
    }
    return ans;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        cout << solve() << endl;
    }
}