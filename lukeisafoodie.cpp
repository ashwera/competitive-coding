#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    vector<int> upper(n), lower(n);
    //upper is a+x and lower is a-x
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        upper[i] = v[i]+x;
        lower[i] = v[i]-x; //debug: see if this gets negative
    }
    //keep track of ranges where min and max are satisfied.
    int minvalue = min(lower[0],upper[0]);
    int maxvalue = max(lower[0],upper[0]);
    int count=0;
    for(int i=1;i<n;i++)
    {
        //minimum u can go is minvalue. usse zyada lower aaya to ja sakte
        //max u can go is maxvalue.
        int a = lower[i]; //new minimum value
        int b = upper[i]; //new max value
        //as long as a is less than maxvalue and b is more than min val, you are good to go
        if(a <= maxvalue && b >= minvalue)
        {
            //our new ranges are defined
            minvalue = max(a,minvalue);
            maxvalue = min(b,maxvalue);
        }
        else{
            //change value
            count++;
            minvalue = a;
            maxvalue = b;
        }
    }
    cout << count << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}