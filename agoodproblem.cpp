#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;

int smallestpowerof2morethan(int x) {
    int p = 1;
    while (p <= x) p <<= 1;
    return p;
}

void solve() {
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    if(n==2) {
        cout << -1 << endl;
        return;
    }
    if(n%2!=0)
    {
        cout << l << endl;
        return;

        //xor-ing same number odd times gives same number
        //anding all together wont change it either
        //lex smallest is l repeatedly
    }
    
    // for even n, can i make and and xor zero 
    // xor zero ke liye toh just write any lexo numbers in pairs 
    // check for and
    // 6 and 7 = 111 & 110 , not zero 
    // 6 and 8 = 110 & 1000, zero 
    // both numbers should occur in pairs, not valid if n=2. always -1 if n is 2
    // also -1 if no pairs and to give zero

    // so first number more than L that ands with it to give 0 is 2^k > l
    int power = smallestpowerof2morethan(l);
    if(power<=r)
    {
        //occupies last 2 indices: n-2 and n-1
        if(k>(n-2))
        {
            cout << power << endl;
        }
        else cout << l << endl;
    }    
    else cout << -1 << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}