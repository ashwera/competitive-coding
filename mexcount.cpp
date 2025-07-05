#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void print(vector<int>a)
{
    for(int x: a)
    {
        cout << x << " ";
    }
    cout << endl;
}
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int>freq;
    for(int &x:v) 
    {
        cin >> x;
        freq[x]++;
    }
    sort(v.begin(),v.end());
    map<int,int>freqoffreq;
    int mex=0;
    for(auto[x,y]:freq)
    {
        if(x>mex) break;
        if(x==mex)mex++;
        freqoffreq[y]++;
    }
    vector<int>a(n+1,0);
    a[n]=1;
    a[0]=1;
    for(int i=n-1;i>n-mex;i--) //fill last mex cells
    {
        a[i] = a[i+1]+1;
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]) break;
        a[i]=a[i-1]+freqoffreq[i];
    }
    print(a);
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}