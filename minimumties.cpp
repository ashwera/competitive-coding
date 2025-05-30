#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int total = (n-1)*n/2;//sum of first n-1 natural numbers
    // cout << total <<endl ;//debug
    if(n%2==0) //we have one diagonal of ties
    {
        //except for ties, alternate win lose.
        //every col starts with win.
        //after n-2/2 lines, add tie
        int column=1;
        while(column<n)
        {
            //each column has n-col elements.
            bool win=true;
            int counter=0;
            int diag = (n-2)/2;
            while(counter < (n-column))
            {
                if(counter==diag)
                {
                    cout << "0 ";
                }
                else if(win)
                {
                    cout << "1 ";
                    win=false;
                }
                else
                {
                    cout << "-1 ";
                    win=true;
                }
                counter++;
            }
            column++;
        }
    }
    else
    {
        //no ties. alternate win lose win lose 
        while(total>1)
        {
            cout << "1 -1 ";
            total-=2;
        }
        if(total) cout << 1;
    }
    cout  << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}