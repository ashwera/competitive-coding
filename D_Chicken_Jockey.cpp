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
vector <int> v(n);
input
//maximise fall damage

// ans = sum - fall damage
// dp[i] = min number of attacks to kill mobs of height i thru 1 
vector<int>dp(n,LLONG_MAX);
dp[0]=v[0];

for(int i=1;i<n;i++)
{
    dp[i] = dp[i-1] + v[i] - 1; //consider min fall damage of 1
    int healthafterfalldamage = v[i]-i;
    if(i>1)
    {
        int op2 = dp[i-2] + v[i-1] + max(0ll, healthafterfalldamage); 
        dp[i]=min(dp[i],op2);
        //  grandfather and everyone below are already gone
        // then i kill my father by spending his health
        // my father is still alive  and I’m still perched on him. 
        // so my relative drop distance remains same 
    }
}
cout << dp[n-1] << endl;
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