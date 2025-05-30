#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int total = (n-1)*n/2;//sum of first n-1 natural numbers
    // cout << total <<endl ;//debug
    if(n%2==0) //we will have n-1 ties. each tie happens after n-2, n-3, n-4...
    {
        int column=1;
        while(total>0)
        {
            int counter = n-column-1;
            while(counter>1)
            {
                cout  << "1 -1 ";
                total-=2;
                counter-=2;
            }
            if(counter==1)
            {
                cout << 1 << " ";
                total--;
                counter--;
            }
            cout << 0 << " ";
            total--;
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