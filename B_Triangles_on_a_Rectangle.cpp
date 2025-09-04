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
int width,height;
cin >> width >> height;
int maxw=0,maxh=0; //difference max in longitude and latitude 
for(int i=0;i<2;i++)
{
    int freq;
    cin >> freq;
    int maxvalue=0;
    int minvalue=1e9;
    while(freq--)
    {
        int x;
        cin >> x;
        maxvalue = max(maxvalue,x);
        minvalue = min(minvalue,x);
    }
    maxh = max(maxh,maxvalue-minvalue);
}

for(int i=0;i<2;i++)
{
    int freq;
    cin >> freq;
    int maxvalue=0;
    int minvalue=1e9;
    while(freq--)
    {
        int x;
        cin >> x;
        maxvalue = max(maxvalue,x);
        minvalue = min(minvalue,x);
    }
    maxw = max(maxw,maxvalue-minvalue);
}
cout << max(height*maxh, width*maxw) << endl;
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