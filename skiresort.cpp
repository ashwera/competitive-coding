#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
//i figured that the ans is combinations' sum for each segment. 
//but how to do it without wrecking the system
//convert to binary string.
//take size of all 1 strings. 
//calculate as size-k+1 ka sum till 0.
//sum of first n natural numbers=n/2(a1+al)
int n,k,q;
cin >> n >> k >> q;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin >> v[i];
    if(v[i]>q) v[i]=0;
    else v[i] = 1;
}
int count=0;
int result=0;
for(int num:v)
{
    if(num==1)
    {
        count++;
    }
    else
    {
        int sum = count - k + 1;
        if(sum>0)
        result += (sum/2.0)*(1+sum);
        count  = 0;
    }
}
if(count!=0)
{
    int sum = count - k + 1;
    if(sum>0)
    result += (sum/2.0)*(1+sum);
}

cout << result << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}