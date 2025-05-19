#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> health(n);
    for (int i = 0; i < n; ++i) {
        cin >> health[i];
        health[i] = health[i]%k;
        if(health[i]==0) health[i]=k;
    }

    // max-heap: (current_health, -index)
    // Use -index to prioritize smaller index when health is equal (normal heaps prioritise higher index)
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; ++i) {
        pq.push({health[i], -i});
    }

    vector<int> answer;
    while (!pq.empty()) {
        auto [currenthealth, negindex] = pq.top(); //hold the first entity
        pq.pop(); 
        int idx = -negindex;
        currenthealth -= k;

        if (currenthealth > 0) {
            pq.push({currenthealth, -idx});
        } else {
            answer.push_back(idx + 1);  // +1 for 1-based index
        }
    }

    for (int id : answer) {
        cout << id << " ";
    }
    cout << "\n";

}
signed main() {
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
