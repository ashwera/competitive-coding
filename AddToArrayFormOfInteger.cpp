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

    void add(vector<int>& to, vector<int>& from, vector<int>& ans){
        long long carry = 0;
        long long m = from.size(), n = to.size();
        int i=m-1, j = n-1;
        for(;i>=0;i--){
            int sum = from[i] + to[j] + carry;
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
            j--;
        }
        //add remaining of to
        while(j>=0){
            int sum =to[j] + carry;
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
        }
        if(carry){
            ans.push_back(carry);
        }
    }

    vector<int> addToArrayForm(vector<int>& num, long long k) {
        vector<int> ans;
        vector<int> knum;
        while(k>0){
            knum.push_back(k%10);
            k/=10;
        }
        reverse(knum.begin(),knum.end());
        // print(knum);
        long long n = num.size();
        long long m = knum.size();
        if(n>m){
            //add m to n 
            add(num,knum,ans);
        }
        else{
            add(knum,num,ans);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
void solve() {
    int n,k; cin >> n>>k;
    vector <int> v(n);
    input
    print(addToArrayForm(v,k));
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