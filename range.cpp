#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> prefix(n + 1, 0); //size n+1, all set to 0
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        long long result = prefix[b] - prefix[a - 1];
        cout << result << "\n";
    }

    return 0;
}