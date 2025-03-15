#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    string A, B;
    cin >> N >> A >> B;

    vector<tuple<int, int, int>> operations; // store res

    string tempA = A;
    for (int i = 0; i < N; i++) {
        if (tempA[i] != B[i]) {
            operations.push_back({1, i + 1, i + 1});
            tempA[i] = B[i]; 
        }
    }

    if (operations.size() <= (N + 1) / 2) {
        cout << operations.size() << endl;
        for (auto& op : operations) {
            cout << get<0>(op) << " " << get<1>(op) << " " << get<2>(op) << endl;
        }
        return;
    }

    
    operations.clear();
    tempA = A;

    for (int i = 0; i < (N + 1) / 2; i++) {
        int j = N - i - 1; 

        if (tempA[i] != B[i] && tempA[j] != B[j]) {

            operations.push_back({2, i + 1, j + 1});
            tempA[i] = B[i];
            tempA[j] = B[j];
        } else if (tempA[i] != B[i]) {
            operations.push_back({1, i + 1, i + 1});
            tempA[i] = B[i];
        } else if (tempA[j] != B[j]) {
            operations.push_back({1, j + 1, j + 1});
            tempA[j] = B[j];
        }
    }

    cout << operations.size() << endl;
    for (auto& op : operations) {
        cout << get<0>(op) << " " << get<1>(op) << " " << get<2>(op) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}