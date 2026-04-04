#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Bob"  << endl;
#define no cout << "Alice" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

bool sorted(vector<int>&v){
    int n = v.size();
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]) return false;
    }
    return true;
}

bool prime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}

int check(int x){
    // get all prime factors of x 
    map<int, int> factors;
    for (int i = 2; i*i <= x; ++i) {
    while (x % i == 0) {
    factors[i]++;
                x /= i;
     }    }
    if (x > 1) factors[x]++;
    if(factors.size()==1){
        auto i = factors.begin();
        return i->first;
    }
    return 0;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    input
    if(sorted(v)){
        yes return;
    }
    bool flag=true;
    // for alice to win: all numbers are either primes or at least one number exists with two diff prime factors
    for(int i=0;i<n;i++){
            // print(v);
        if(prime(v[i])||v[i]==1){
            continue;
        }
        flag = false;
        int val = check(v[i]);
        if(val==0){
            no return;
        }
        else{
            v[i] = val;
        }
    }
    // print(v);
    if(sorted(v)){
        yes return;
    }
    no 
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