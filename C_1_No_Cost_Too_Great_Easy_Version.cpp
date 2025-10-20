#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:a) cin >> i;
#define inputb for(int &i:b) cin >> i;
#define sort sort(a.begin(),a.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

set<int> getPrimeFactors(int x) {
    set<int> factors;
    for (int i = 2; i*i <= x; ++i) {
        while (x % i == 0) {
            factors.insert(i);
            x /= i;
        }    
    }
    if (x > 1) factors.insert(x);
    return factors;
}

void solve() {
    int n; cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    int even=0;
    input
    inputb
    map<int,int>factors;
    for(int x:a){
        set<int>s=getPrimeFactors(x);
        for(int l:s){
            factors[l]++;
            if(factors[l]==2){
                cout << 0 << endl;
                return;
            }
        }
    }

    //ans is one
    //increaes each element by 1 and check one by one if it makes a pair
    for(int i=0;i<n;i++){
        set<int>old = getPrimeFactors(a[i]);
        set<int>newset = getPrimeFactors(a[i]+1);
        for(int l:old){
            factors[l]--;
        }
        for(int m:newset){
            factors[m]++;
            if(factors[m]==2)
            {
                cout << 1 << endl;
                return;
            }
        }
        for(int l:old){
            factors[l]++;
        }
        for(int m:newset){
            factors[m]--;
        }
    }
    cout << 2 << endl;
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