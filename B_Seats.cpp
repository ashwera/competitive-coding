#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; 
    cin >> n;
    string s; 
    cin >> s;

    int existing = 0;
    for(char c : s) if(c == '1') existing++;

    int add = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] != '0') continue;

        int j = i;
        while(j < n && s[j] == '0') j++;

        int len = j - i;
        bool left = (i > 0 && s[i-1] == '1');
        bool right = (j < n && s[j] == '1');

        if(!left && !right) {
            add += (len + 2) / 3;
        }
        else if(left && right) {
            add += max(0LL, (len / 3));
        }
        else {
            add += (len + 1) / 3;
        }

        i = j - 1;
    }

    cout << existing + add << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}