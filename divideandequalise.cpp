#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

map<int, int> getPrimeFactors(int x) {
map<int, int> factors;
for (int i = 2; i*i <= x; ++i) {
while (x % i == 0) {
factors[i]++;
            x /= i;
 }    }
if (x > 1) factors[x]++;
return factors;}

void solve() {
int n; cin >> n;
vector <int> v(n);
input

unordered_map<int, int> totalfactors;
//intuition, 
//prime factors=n for all prime factors 
for(int x:v)
{
    auto factors = getPrimeFactors(x);
    for(auto[prime,count]:factors)
    {
        // cout << prime << " " << count << endl;
        totalfactors[prime]+=count; 
    }
}
    for(auto[p,c]:totalfactors)
    {
        if(totalfactors[p]%n!=0) {
            no 
            return;
        }
    }
    yes
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}