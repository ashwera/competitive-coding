#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

//amazing question. new concpe.t loved it. 

void solve() {
int n,m; cin >> n >> m;
if(m<n || m>(n*(n+1)/2))
{
    cout << -1 << endl;
    return;
}

set<int>numbers;
for(int i=0;i<n;i++)
{
    numbers.insert(i+1);
}//all numbers in the answer we will probably have

vector<int>tree; //we will have a degenerate tree represented by a vector
bool flag=false;
int dupe=n;
int places=n-1;
while(dupe)
{
    // cout << "iteration" << endl;
    if(m - dupe >= places)
    {
        m-=dupe;
        // cout << m << endl;
        tree.push_back(dupe);
        // cout << dupe << endl;
        places--;
        numbers.erase(dupe);
        if(flag)
        {
            break;
        }
    }
    else
    {
        // cout << "flagged\n";
        flag=true;
    }
    dupe--;
}
for(int i:numbers)
{
    tree.push_back(i);
}
int s = tree.size();
cout << tree[0] << endl;
//print in correct format
for(int i=0;i<s-1;i++)
{
    cout << tree[i] << " " << tree[i+1] << endl;
}
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}