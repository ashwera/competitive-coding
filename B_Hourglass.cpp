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
    int s,k,m; cin>>s>>k>>m;
    
    if(s<=k){
        return max(0ll, s - m % k);
    }
    else{
        if(m%(2*k)<k){
           return s-m%k;
        }
        else{
            return k-m%k ;
        }
    }
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        cout <<solve()<<endl;
    }
}