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

        void solve() {
            int n; cin >> n;
            vector <int> v(n);
            input
            //number of numbers more than this vs less than this after this 

            vector<int>ans(n,0); 
            for(int i=0;i<n;i++){
                int more=0;
                int less=0;
                for(int j=i+1;j<n;j++){
                    if(v[j]<v[i]) less++;
                    else if(v[j]>v[i]) more++;
                }
                ans[i] = max(less,more);
            }
            print(ans);
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