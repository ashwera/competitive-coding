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

int computeXOR(int n)
{
  
  if (n % 4 == 0)
    return n;

  if (n % 4 == 1)
    return 1;

  if (n % 4 == 2)
    return n + 1;

  return 0;
}


void solve() {
int a,b;
cin >> a >> b;
int x = computeXOR(a-1);
// cout << "xor " << x << endl;
if(x==b) cout << a << endl;
else
{
    if((x ^ b) == a) //cannot add this to array bec itll increase the mex 
    {
        cout << a+2 << endl;
    }
    else{
        cout << a+1 << endl;
    }
} 
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