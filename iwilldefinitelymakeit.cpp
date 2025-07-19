#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes"  << endl;
#define no cout << "No" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
int n,k; cin >> n >> k;
vector <int> v(n);
input
int cur = v[k-1];
//only care about after cur element 
sort(v.begin(),v.end());
auto it = find(v.begin(),v.end(),cur);
int idx = it - v.begin();
auto lb = lower_bound(v.begin(),v.end(),v[n-1]);
int lbi = lb - v.begin();
// int maxel = *max_element(v.begin(),v.end());
int x=0;
for(int i=idx+1;i<=lbi;i++)
{
    //next element should be in range e+1, 2e
    int next = v[i];
    // cout << cur << " " << next << endl;
    if(next==cur) continue;
    if((next+x)<cur+1 || (next+x)>(2*cur))
    {
        // cout << v[i] << " " << cur << " " << next << endl;
        // if(v[i]==v[n-1])break;

        no
        return;
    }
    else  
    {
        x = next-cur;
        cur = next;
        if(cur==v[n-1])
        {
            // cout <<"her";
            break;
        }
    }
}
yes
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}