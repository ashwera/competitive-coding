#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(vector <int>& c)
{
    for(int i:c) cout << i << " ";
    cout << endl;
} 

int powerofthreelessthan(int n) 
{
    int res = 1;
    int exp=0;
    while (res * 3 <= n) {
        res *= 3;
        exp++;
    }
    return exp;
}

void solve() {
int n;
int k;
 cin >> n >> k;
int cost=0;
int deals = 0;
vector<int>possible(19,0); // powers of 3 possible for constraints
while(n>0)
{
    int exp = powerofthreelessthan(n);
    int power = pow(3,exp);
    int x = n/power; 
    n = n - (x*power);
    cost += x* (pow(3,exp+1) + (exp*pow(3,exp-1)));
    deals+=x;
    possible[exp]+=x;
}
// cout << cost << endl;
// cout << deals << endl;

//copied code from c1, just added deal counter and input K

//aim: make a smaller deal to reduce cost. with each split, increase k by 3. 
//with each split, save 3^smaller money on cost. use cost and deals from C1 solution. 
//but yu will prlly need a freq map of the powers u used earlier for c1
if(k<deals) {cout << -1 << endl; return; }
else if(k==deals) {cout << cost << endl; return;}

vector<int> powerofthree(19,1);
for(int i=1;i<19;i++) powerofthree[i]=powerofthree[i-1]*3;

// print(possible);
int a=18;
while(deals+2<=k && a>0)
{
    if(possible[a]>0)
    {
        // cout << "here: " << a << endl;
        int maxsplit = (k-deals)/2;
        int use = min(possible[a], maxsplit);
        deals += 2*use; // subtract 1 add 3 
        cost = cost - use*powerofthree[a-1];
        possible[a]-=use;
        possible[a-1]+=use*3;
    }
    else a--;
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