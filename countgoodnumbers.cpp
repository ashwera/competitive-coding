#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

//set theory. 

int count_div(int l, int r, int x) {
    return r / x - (l - 1) / x;
}
//how many numbers in range l to r are divisible by x?

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}

void solve() {
    int l, r;
    cin >> l >> r;
    l = max(l, 11ll);

    vector<int> primes = {2, 3, 5, 7};
    int total = r - l + 1;
    int bad = 0;

    for (int mask = 1; mask < (1 << 4); ++mask) {
        int div = 1;
        int bits = 0;
        for (int i = 0; i < 4; ++i) {
            if (mask & (1 << i)) {
                div = lcm(div, primes[i]);
                ++bits;
            }
        }
        int cnt = count_div(l, r, div);
        if (bits % 2 == 1) bad += cnt;
        else bad -= cnt;
    }

    int good = total - bad;
    cout << good << '\n';
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