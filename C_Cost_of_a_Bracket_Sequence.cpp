#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i;
    }
    cout << endl;
}

int score(string s, vector<int>&status){
    stack<char>st;
    int c=0;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(status[i]==1)continue;
        else{
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(!st.empty())
                {
                    st.pop(); c++;
                }
            }
        }
    }
    return 2*c;
}

void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    int open=0,close=0;
    cin >> s;
    vector<int> best(n,0);
    int ans = 1e18;

    for(int left=0; left<=k; left++){
        int right = k-left;

        vector<int> rem(n,0);

        int count=0;
        for(int i=0;i<n && count<left;i++){
            if(s[i]=='('){
                rem[i]=1;
                count++;
            }
        }

        count=0;
        for(int i=n-1;i>=0 && count<right;i--){
            if(s[i]==')'){
                rem[i]=1;
                count++;
            }
        }

        int cur = score(s, rem);

        if(cur < ans){
            ans = cur;
            best = rem;
        }
    }

    print(best);
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