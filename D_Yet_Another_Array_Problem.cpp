#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void print(queue<int> v) {
    while(!v.empty()) {
        cout << v.front() << " ";
        v.pop();
    }
    cout << endl;
}

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= n; ++i) {
        if(isPrime[i]) {
            for(int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    vector<int>x;
    for(int i=0;i<n+1;i++){
        if(isPrime[i]){
            x.push_back(i);
        }
    }
    return x;
}

queue<int> getPrimeFactors(int x) {
    queue<int> factors;

    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            factors.push(i);
            while (x % i == 0)
                x /= i;
        }
    }

    if (x > 1)
        factors.push(x);

    return factors;
}

void solve() {
    int n; cin >> n;
    set <int> v;
    while(n--){
        int x;
        cin >> x;
        v.insert(x);
    }
    // print(v);
    // observation: the product of first few primes till 60 exceeds limits 
    // only check for these 53 values 
    vector<int>primes=sieve(60);
    // print(primes);
    for(int prime : primes){
        bool dividesAll = true;
        for(int x : v){
            if(x % prime != 0){
                dividesAll = false;
                break;
            }
        }
        if(!dividesAll){
            cout << prime << endl;
            return;
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