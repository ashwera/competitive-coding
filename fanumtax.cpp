#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;
    cin >> n >> m;
    vector <int> a(n),b(m);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < m;i++) cin >> b[i];

    int prev = -1e18;
    
    for(int i=0;i<n;i++)
    {
        int op1 = a[i];
        int op2 = b[0]-a[i]; //only two options hain
        if(op1 >= prev && op2 >= prev)
        {
            //both satisfy ascending order, choose smaller one to have more room for next vals
            prev = min(op1,op2);
        }
        else if(op1>=prev)
        {
            prev = op1;
        }
        else if(op2>=prev)
        {
            prev = op2;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() 
{
	int t;
    cin >> t;
    while(t-->0)
    {   
        solve();
    }    	
}