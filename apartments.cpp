#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void solve() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>applicant(n) , apartment(m);
    for(int &i:applicant) cin>>i;
    for(int &i:apartment) cin>>i;
    sort(apartment.begin(),apartment.end());
    sort(applicant.begin(),applicant.end());
    //for each applicant, find first number that's more than it. 
    //check if one index before this suffices,
    //accordingly increase
    int count=0;
    cout << count << endl;
}
signed main() {
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}