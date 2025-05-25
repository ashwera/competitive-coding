#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    string s;
    cin >> n >> s;
    //intuition; count number of changes, subtract 2
    //never 0 unless all are zero
    //so if its coming 0, check for all zeros 
    int breaks=0;
    int oc=0,zc=0,finaloc=0,finalzc=0;
    if(s[0]=='1')//starting with change
    {breaks++; oc++;}
    for(int i=1;i<n;i++)
    {
        //count and reset 
        if(s[i]=='1')
        {
            if(!oc)
            {
                zc=0; //end stream of zeroes
                breaks++;
                cout << "ajdbsad ";
            }
            oc++
        }
        else
        {
            if(!zc&&oc)
            {
                oc=0;
                cout << "cvbhjn ";
                breaks++;
            }
            zc++;
        }
    }
    cout << breaks << endl;
    // if(oc&&!zc)breaks++;
    // else if(zc&&!oc)breaks++;
    breaks-=2;
    if(breaks<2)
    {
        //can be true if only zeroes are tehre
        if(finaloc==0)
        {
            breaks=0;
            // cout << "here";
        }
        else
        {
            breaks+=2;
        }
    }
    cout << n+breaks << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}