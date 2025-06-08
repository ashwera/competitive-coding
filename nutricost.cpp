#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n , c;
    cin >> n >> c;
    
    vector<int>a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    map<int, int> mp; 

    for (int i = 0; i < n; ++i) {
        int x=a[i], y=b[i];
        if (mp.count(x)) {
            mp[x] = min(mp[x], y);
        } else 
        {
            mp[x] = y;
        }
    }
    
    vector<pair<int, int>> v(mp.begin(), mp.end());
    
    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
    {
    return a.second < b.second; // sort by y
    });
    
    // for (auto& [vitamin, cost] : v) 
    // {
    //     cout << vitamin << " " << cost << endl;
    // }
    //go greedy
   int size = 0;    	
int totalCost = 0;
int currentValue=0;
int maxvalue = 0;

for (auto& [vitamin, cost] : v) {
    size++;
    int oldcv = currentValue;
    totalCost+=cost;
    currentValue = c * size - totalCost;
    maxvalue = max(maxvalue,currentValue);
    // cout << currentValue << " " << maxvalue << endl;
}
cout << maxvalue<< "\n";
}

signed main() 
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}