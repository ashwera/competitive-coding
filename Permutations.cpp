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
    int n; cin >> n;
    vector <int> v;
    // input

    // 5 3 1 4 2 
    // 3 1 4 2 
    if(n==1) {cout << n << endl; return;}
    if(n<4) cout << "NO SOLUTION";
    else{
        if(n%2==0)
        {
            int i=n-1;
            while(i>0)
            {
                v.push_back(i);
                i-=2;
            }
            i=n;
            while(i>0)
            {
                v.push_back(i);
                i-=2;
            }
        }
        else{
            int i=n;
            while(i>0)
            {
                v.push_back(i);
                i-=2;
            }
            i=n-1;
            while(i>0)
            {
                v.push_back(i);
                i-=2;
            }
        }
        print(v);
    }

    }
    signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
        int t=1;
        // cin >> t;
        while (t-- > 0) {
            solve();
        }
    }