#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int solve() {
    int n; cin >> n;
    if(n<3) return 4;
    int sum=0;
    if(n%2==0)
    {
        return ((n/2)+1)*((n/2)+1);
    }
    else{
        for(int i=2;i<n+2;i+=2)
        {
            sum += i;
        }
        return 2*sum;
    }
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
       cout <<  solve() << endl;
    }
}