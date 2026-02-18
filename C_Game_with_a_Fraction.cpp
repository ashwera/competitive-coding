    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define yes cout << "Bob"  << endl;
    #define no cout << "Alice" << endl;
    #define input for(int &i:v) cin >> i;

    void print(const vector<int>& v) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    void solve() {
        int a,b;
        cin >> a >> b;
        int x = b-a;
        if(x<=0 || a < 2*x || b < 3*x) no
        else if(a-2*x == b- 3*x) yes
        else no
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