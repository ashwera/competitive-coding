    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define yes cout << "YES"  << endl;
    #define no cout << "NO" << endl;
    #define input for(int &i:v) cin >> i;
    #define sort sort(v.begin(),v.end());

    void print(const vector<int>& v) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    int cost(vector<int>v){
        int n = v.size();
        int minel = 1e18;
        for(int i=0;i<n;i++){
            int x = v[i];
            int s=0;
            for(int j=0;j<n;j++){
                s += abs(v[j]-x);
            }
            minel = min(minel,s);
        }
        return minel;
    }

    int solve(const vector<int> & v) {
        int n = v.size();
        vector<int>dp(n,1e9);
        dp[0]=1e10;
        dp[1]=cost({v[0],v[1]});
        dp[2]=cost({v[0],v[1],v[2]});
        for(int i=3;i<n;i++){
            //either take three considerations and dp[i-3]
            //or take two and dp[i-2]
            int op1 = dp[i-2] + cost({v[i-1],v[i]});
            int op2 = dp[i-3] + cost({v[i-2],v[i-1],v[i]});
            dp[i]=min(op1,op2);
        }
        return dp[n-1];
    }
    signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
        int t;
        cin >> t;
        while (t-- > 0) {
            int n; cin >> n;
            vector <int> v(n);
            input
            int ans=solve(v);
            //rotate three times 
            for(int i=0;i<n-1;i++){
                swap(v[i],v[i+1]);
            }
            ans = min(ans,solve(v));
            for(int i=0;i<n-1;i++){
                swap(v[i],v[i+1]);
            }
            ans = min(ans,solve(v));
            for(int i=0;i<n-1;i++){
                swap(v[i],v[i+1]);
            }
            ans = min(ans,solve(v));
            cout << ans << endl;
        }
    }