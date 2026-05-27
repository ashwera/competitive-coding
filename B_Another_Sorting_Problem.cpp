    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define yes cout << "YES"  << endl;
    #define no cout << "NO" << endl;
    #define input for(int &i:v) cin >> i;
    #define vall v.begin(),v.end()

    void print(const vector<int>& v) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    bool solve() {
        int n; cin >> n;
        vector <int> v(n);
        input
        int k=0;
        for(int i=1;i<n;i++){
            k = max(k, v[i-1]-v[i]);
        }
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                v[i]+=k;
            }
        }
        return is_sorted(v.begin(),v.end());
    }
    signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
        int t;
        cin >> t;
        while (t-- > 0) {
            if (solve()) yes else no
        }
    }