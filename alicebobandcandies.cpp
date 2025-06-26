#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int ogn=n;
    vector<int>v(n);
    vector<int>prefixsum(n+1);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        prefixsum[i+1]=prefixsum[i]+v[i];
    }

    if(n==1)
    {
        cout << 1 << " " << v[0] << " " << 0 << endl;
        return;
    }
    else if (n==2)
    {
        cout << 2 << " " << v[0] << " " << v[1] << endl;
        return;
    }
    //two pointer
    int moves=1;
    int alice=v[0];
    int bob=0;
    int alicelast=0;
    // cout << alice << " ";
    for(int i=1;i<n;)
    {
        while(bob<=alice)
        {
            bob += v[n-1];
            n--;
            if(n<=i)
            {
                // moves++/;
                break;
            }
        }
        // cout << "bob just ate: " << bob << endl;
        // cout << i << " " << n << endl;
        if(n>i) {
            moves++;
            alice=0;
            // cout << "start for alice at " << i << endl;
        } else break;

        while(alice<=bob)
        {
            alice+=v[i];
            alicelast=i;
            i++;
            if(i>=n) 
            {
                // moves++;
                 break;
            }
        }
        // cout << "alice just ate:7 " << alice << endl;
        // cout << alice <<endl;
        // cout << "round one ends" << endl;
        if(n>i){
            moves++;
            bob=0;
        // cout << "start for bob at " << n << endl;
        }else break;
    }
    moves++; //accomodate last move
    // cout << alicelast << endl;
    cout << moves << " " << prefixsum[alicelast+1] << " " << prefixsum[ogn]-prefixsum[alicelast+1] << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}