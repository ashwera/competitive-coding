#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int deficit =0 ;
    vector <int> A (n);
    vector <int> B (n);
    bool found = false;
    bool possible = true;
    int exception = -1;
    for(int i=0;i<n;i++) cin >> A[i];
    for(int i=0;i<n;i++) 
    {
        cin >> B[i];
        if(A[i]<B[i] && !found)
        {
            deficit = B[i]-A[i];
            found = true;
            exception = i;
        }
        else if(A[i]<B[i] && found)
        {
            possible = false; 
            //there are more than 1 deficits.
        }
    }
    // cout << deficit << " is the deficit" << endl;
    // cout << exception << " is the exception."<<endl;
    if(possible && found)
    {
        for(int i=0;i<n;i++)
        {
        if((A[i]-deficit) < B[i] && i!=exception)
        {
            possible = false;
            break;
        }
        }
    }
    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t-->0)
    solve();
}