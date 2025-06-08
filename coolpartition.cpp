#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    unordered_map<int,int> prevposition;
    vector<int> nextoccurence(n+1, n+1);
    for (int i = n; i >= 1; i--) {
        if (prevposition.count(a[i])) //if a[i] has been seen before 
        {
            nextoccurence[i] = prevposition[a[i]]; //it's next occurence is that position
        } else {
            nextoccurence[i] = n + 1; //else it wont occur again
        }
        prevposition[a[i]] = i; //last position of i is stored
    }
    
    vector<int> p(n+1, 0);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int r = 1; r <= n; r++) {
        if (nextoccurence[r] > r) {
            pq.push(r);
        }
        while (!pq.empty() && nextoccurence[pq.top()] <= r) {
            pq.pop();
        }
        if (!pq.empty()) {
            p[r] = pq.top();
        } else {
            p[r] = 0;
        }
    }
    
    int ans = 0;
    int r1 = n;
    while (r1 > 0) {
        int start = p[r1];
        if (start == 0) break;
        ans++;
        r1 = start - 1;
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}
