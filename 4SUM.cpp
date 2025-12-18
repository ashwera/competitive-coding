#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort(v) sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << endl;
    }
    cout << endl;
}
void print(const vector<vector<int>>& v) {
    for (vector<int> i : v) {
        print(i);
    }
    cout << endl;
}

void fourSum(vector<int>& v, int target) {
    //two loops 
    vector<vector<int>>ans;
    sort(v);
    //fix i and j, then two pointer on k and l 
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int cur = v[i]+v[j];
            int need = target - cur;
            int l = j+1;
            int r = n-1;

            while(l<r){
                int second = v[l]+v[r];
                if(need > second){
                    l++;
                }
                else if(need < second){
                    r--;
                }
                else{
                    ans.push_back({v[i],v[j],v[l],v[r]});
                    l++; r--;
                }
            }
        }
    }
    print(ans);
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        vector<int>v = {1,0,-1,0,-2,2};
        fourSum(v,0);
    }
}