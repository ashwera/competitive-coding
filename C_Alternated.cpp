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
string s; cin >> s;
int ans=0;
vector<int>a,b;
int count=0;
for(int i=0;i<2*n;i++)
{
    //consider A at odd 
    if(s[i]=='A' && i%2!=0) //even position par A hai
    {
        a.push_back(i+1); //add this to answer later 
        count++;
    }
    else if(s[i]=='B' && i%2==0)//odd p pe b
    {
        b.push_back(i+1);
    }
}
// print(a);
// print(b);
for(int i=0;i<count;i++)
{
    ans += abs(a[i]-b[i]);
}

count=0;
vector<int>newa,newb;
for(int i=0;i<2*n;i++)
{
    //consider A at even 
    if(s[i]=='A' && i%2==0) //odd position par A hai
    {
        newa.push_back(i+1); //add this to answer later 
        count++;
    }
    else if(s[i]=='B' && i%2!=0)//even p pe b
    {
        newb.push_back(i+1);
    }
}
int temp=0;
// print(a);
// print(b);
for(int i=0;i<count;i++)
{
    temp += abs(newa[i]-newb[i]);
}
ans = min(ans,temp);
cout << ans;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}