#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int l1,l2,l3,b1,b2,b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3 ;
    //first ignroe the rotaiton condition
    int area = (l1*b1) + (l2*b2) + (l3*b3);
    if(sqrt(area) * sqrt(area) != area) 
    {
        //not ps
        cout << "NO" << endl;
        return;
    }

    //now check 2 conditions. 
    if(l1==l2 && l2==l3)
    {
        if((b1+b2+b3) == l1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    else if(b1==b2 && b2==b3)
    {
        if((l1+l2+l3) == b1)
        {
            cout << "YES" << endl;
            return;
        }
    } 
    //figured the line se wala system. now the =| system
    //the longest side among all is the side of the square. 
    //the length of that and one other rect should be added for same.
    // and, the remaining should suffice
    int longest = max(l1,max(l2,l3));
    int broadest = max(b1,max(b2,b3));
    if(longest>broadest)
    {
        if(longest==l3)
    {
        if((b3+b2) == l3 && b2==b1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if(longest==l2)
    {
        if((b2+b1) == l2 && b3==b1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if(longest==l1)
    {
        if((b1+b3) == l1 && b3==b2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    }
    else
    {
        if(broadest==b3)
    {
        if((l3+l2) == b3 && l2==l1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if(broadest==b2)
    {
        if((l2+l1) == b2 && l3==l1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if(broadest==b1)
    {
        if((l1+l3) == b1 && l3==l2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}