#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
int n;
cin >> n;
vector<int> a(n),b(n);
for(int i=0;i<n;i++)
{
    cin >> a[i];
}
for(int i=0;i<n;i++)
{
    cin >> b[i];
}
map<int,int>M;
int currentval=a[0],currentvalcount=1;
for(int i=1;i<n;i++)
{
    if(a[i]==currentval)
    {
        currentvalcount++;
    }
    else
    {
        M[currentval] = max(M[currentval],currentvalcount);
        currentvalcount = 1;
        currentval = a[i];
    }
}
M[currentval] = max(M[currentval], currentvalcount); 

map<int,int>M2;
currentval=b[0],currentvalcount=1;
for(int i=1;i<n;i++)
{
    if(b[i]==currentval)
    {
        currentvalcount++;
    }
    else
    {
        M2[currentval] = max(M2[currentval],currentvalcount);
        currentvalcount = 1;
        currentval = b[i];
    }
}
M2[currentval] = max(M2[currentval], currentvalcount); 

vector<int> result;
set<int> all_keys;

for (auto& p : M) all_keys.insert(p.first);
for (auto& p : M2) all_keys.insert(p.first);

for (int key : all_keys) {
    int sum = M[key] + M2[key]; 
    result.push_back(sum);
}
cout << *max_element(result.begin(),result.end()) << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}