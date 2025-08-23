#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

int powerofthreelessthan(int n) {
    int res = 1;
    int exp=0;
    while (res * 3 <= n) {
        res *= 3;
        exp++;
    }
    return exp;
}

void solve() {
int n; cin >> n;
//check which power of 3 is less than n 
//find x where x = n / powerof3 floor
//n = n - x*power
//repeat till n=0
int cost=0;
while(n>0)
{
    int exp = powerofthreelessthan(n);
    int power = pow(3,exp);
    int x = n/power; 
    n = n - (x*power);
    cost += x* (pow(3,exp+1) + (exp*pow(3,exp-1)));
//     cout << "exp: " << exp << endl;
//     cout << "power: " << power << endl;
//     cout << "x: " << x << endl;
//     cout << "cost: " << cost << endl;
//     cout << "updated N: " << n << endl;
}
cout << cost << endl;
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