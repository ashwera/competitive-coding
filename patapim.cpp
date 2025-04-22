#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n ;
    vector<vector<int>> v(n);
    vector<int>result;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        // int s;
        vector<int> v1(n);
        for(int j=0;j<n;j++)
        {
            cin >> v1[j];
            if(i==0 || j==n-1) {
                result.push_back(v1[j]); //all entries of row 1, col 1
                sum+=v1[j];   
            }
        }
        v[i] = v1;
    }
    int y = n+n;
    int sum2=0;
    for(int i=0;i<=y;i++)
    {
        sum2+=i;
    }
    if(n!=1)
    {cout << abs(sum2-sum) << " ";
    for(int num:result) cout << num << " ";
    cout << endl;}
    else
    {
        if(result[0]==1)
        cout << "2 1" << endl;
        else
        cout << "1 2" << endl;
    }
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}   