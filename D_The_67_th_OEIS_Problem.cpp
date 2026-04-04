#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

vector<bool> Sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

void solve() {
    int n; cin >> n;

    const int lt = 200000;
    vector<bool> sieve = Sieve(lt); 

    vector<int> primes;
    for (int i = 2; i < lt && (int)primes.size() <= n; i++)
        if (sieve[i]) primes.push_back(i);

    vector<int> v(n);                   
    for (int i = 0; i < n; i++) {       
        v[i] = primes[i] * primes[i + 1];
    }

    print(v);
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