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

int rev(int t)
{
    int ans=0;
    while(t>0)
    {
        int dig = t%10;
        ans = ans*10 + dig;
        t/=10;
    }
    return ans;
}

void solve() {
int x,y;
cin >> x>>y;
vector<int>v(10);
v[0]=x;
v[1]=y;
for(int i=2;i<10;i++)
{
    int temp = x+y;
    if(temp>=10)
    {
        int ks = rev(temp);
        temp = ks;
    }
    x = y;
    y = temp;
    v[i]=temp;
}
// print(v);
cout << v[9] << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    {
        solve();
    }
}