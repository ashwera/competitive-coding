#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int>v(n);
    int zeros=0,size=0,sum=0;
    int minel = 120;
    for(int i=0;i<n;i++)
    {
        vector<int>rows(m);
        int neg = 0;
        for(int j=0;j<m;j++)
        {
            cin >> rows[j];
            if(rows[j]<0)
            {
                neg++;
            }
            if(rows[j]==0)
            {
                zeros++;
            }
            minel = min(minel, abs(rows[j]));
            sum+=abs(rows[j]);
        }
        //if even number of negatives, their effect is null. else not null. 
        if(neg%2!=0)
        size++;
    }

    // cout << minel << endl;
    // cout << sum << endl;
    if(size%2==0)
    {
        cout << sum << endl;
    }
    else{
        if(zeros>0)
        {
            cout << sum << endl;
        }
        else{
            sum = sum - (2*abs(minel));
            cout << sum << endl;
        }
    }
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}