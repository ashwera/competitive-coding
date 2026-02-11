#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int fact(int &x, int div){
    int ans=0;
    while(x%div==0){
        ans++;
        x/=div;
    }
    return ans;
}

int findGCD(vector<int>v){
    int g=0;
    for (int x : v) {
            g = gcd(g, x);
            if (g == 1) break;
        }
       return g;
}

int solve() {
    int n; cin >> n;
    vector <int> v(n);
    input
    int target = findGCD(v);
    
    int ans=0;
    for(int i:v){
        i = i/target;
        if(i==1) continue;
        int x = fact(i,3);
        int y = fact(i,2);
        if(i>1) return -1;
        ans+=x+y;
    }
    return ans;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        cout << solve();
    }
}