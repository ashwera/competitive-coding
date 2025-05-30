#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    //iterate over all possibilities
    int change = 0;
    int L=0,R=0;
    for(int i=0;i<n;i++) //L variable
    {
        int inv=0;
        for(int j = i+1 ; j<n; j++)
        {
            //R variable
            if(v[i] > v[j])
            {
                inv--;
            }
            else if(v[i] < v[j])
            {
                inv++;
            }
        if(inv < change)
        {
            change = inv;
            L = i;
            R = j;
        }
        }
    }
    cout << ++L << " " << ++R << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}