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

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    input
    //store difference
    vector<int>v1(n);
    v1[0]=v[0];
    for(int i=1;i<n;i++){
        v1[i] = v[i]-v[i-1];
    }
    vector<int>ans;
    int smallest=1;
    int largest=1;
    ans.push_back(smallest);
    for(int i=1;i<n;i++){
        if(v1[i]>v1[i-1])
        {
            largest+=1;
            ans.push_back(largest);
        }
        else if(v1[i]==v1[i-1]){
            ans.push_back(smallest);
        }
        else{
            //value is less 
            int dif = v1[i-1]-v1[i];
            int val = ans.size();
            ans.push_back(ans[val-1]+dif);
        }
        // p/rint(ans);
    }
    for(int i:ans){
        cout << i << " ";
    }
    cout << endl;
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