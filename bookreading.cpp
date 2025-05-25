#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int>v;
    int dest=0;
    int a;
    while(n-->0)
    {
        cin >> a;
        if(a==2)
        {v.pop_back();}
        else if(a==1)
        { 
           int x;
           cin >> x;
           v.push_back(x);
           dest = max(dest,x); //max itni books to padh li
        }
    }
    int sum=0;
    for(int no:v)
    {
        sum+=no;
    }
    dest = max(dest,sum); 
    // for(int num:v)
    // {
    //     cout << num <<" ";
    // }
    cout << dest << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}