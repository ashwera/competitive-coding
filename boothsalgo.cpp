#include <bits/stdc++.h>
using namespace std;

void solve() {
    cout << "Enter value of multiplicand and multiplier, number of bits" << endl;
int m , q,n;
cin >> m >> q >>n;

// int maxval = max(abs(m), abs(q));
// int n = 1;
// while ((1LL << (n - 1)) <= maxval) n++;

if (m < 0) m = (1 << n) + m;
if (q < 0) q = (1 << n) + q;


int accumulator = 0;
int q1 = 0;
int mask_n = (1 << n) - 1; // Mask to keep only n bits
for(int i=0;i<n;i++)
{
    int q0 = q & 1; // Get the least significant bit of q
    if (q0 == 1 && q1 == 0)
    accumulator -= m;
    else if (q0 == 0 && q1 == 1)
    accumulator += m;

    accumulator &= mask_n;

    int combined = (accumulator << (n+1)) | (q << 1) | q1;
    
    bool sign = combined & (1LL << (2*n));
    combined = combined >> 1;
    if (sign) combined |= (1LL << (2*n - 1));

    accumulator = (combined >> (n+1)) & mask_n  ; // Update accumulator . mask_n is used to ensure we only keep the n bits
    q = (combined >> 1) & mask_n; // Update q
    q1 = combined & 1; // Update q1
}
int result = (accumulator << n) | q; // Combine 

int sign_bit = 1LL << (2 * n - 1);
if (result & sign_bit)
    result -= (1LL << (2 * n));
// Adjust for sign bit if necessary
cout << "Result: " << result << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
        int t=0;
        cin >> t;
        while(t-- > 0)
        solve();
    
}