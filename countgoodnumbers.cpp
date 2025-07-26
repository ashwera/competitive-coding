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

    for (int mask = 1; mask < (1 << 4); ++mask) 
    {
        //mask represents binary numbers. starts at 0001. should be less than 1<<4, i.e. 2^4. 
        //whicever bit of mask is set, consider that element in primes[]

        int div = 1;
        int bits = 0;
        for (int i = 0; i < 4; ++i) //each bit of mask 
        {
            if (mask & (1 << i))  //if bit is set (check if mask&2^i)
            {
                div = lcm(div, primes[i]); //update lcm of all numbers in subset 
                ++bits;//increase number of set bits
            }
        }
        int cnt = count_div(l, r, div); 
        if (bits % 2 == 1) bad += cnt;
        else bad -= cnt;
    }

    int good = total - bad;
    cout << good << endl;
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