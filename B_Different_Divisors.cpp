#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            primes.push_back(i);
    }

    return primes;
}


void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    vector<int>v = sieve(10000000); //given as constraint 
    // print(v);
    while (t-- > 0) {
        int n; cin >> n;
        
            int a = *upper_bound(v.begin(),v.end(),n);
            int b = *upper_bound(v.begin(),v.end(),a+n-1);
            // cout << a << " " << b << endl;
            if (a == b) {
                auto it = upper_bound(v.begin(), v.end(), a);
                a = *it;
                b = *upper_bound(v.begin(), v.end(), a + n - 1);
            }
            
                cout << a*b << endl;
            
        
    }
}