#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isprime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

void solve() {
    int n,k;
    cin>>n>>k;
    if(k>1 && n!=1)
    {
        //any number repeated more than once is not prime
        cout << "NO" << endl;
    }
    else if(isprime(n)) cout << "Yes" << endl;
    else if(k == 2 && n == 1) cout << "YES" << endl; //exception
    else cout << "NO" << endl; 
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}