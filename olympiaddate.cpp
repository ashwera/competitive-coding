#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    int two = 2;
    int zero = 3;
    int one = 1;
    int three = 1;
    int five =1;
    bool fl=false;
    // cout << zero << one << two << three << five << endl;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i]==2) two--;
        else if(v[i]==1)one--;
        else if (v[i]==3)three--;
        else if(v[i]==5)five--;
        else if(v[i]==0) zero--;
        
        // cout << zero << one << two << three << five << endl;
        if (!fl && zero <= 0 && two <= 0 && one <= 0 && three <= 0 && five <= 0) {
            cout << i+1 << endl;
            fl=true;
            // break;
        }
    }
    // else
    // {
    if(!fl)
        cout << 0 << endl;
    // }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}