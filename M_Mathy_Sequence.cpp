#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define vall v.begin(),v.end()

void print(vector<int>& v, int x) {
    for(int i=0;i<x;i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}

int powerOfTwo(int x){
    int a=0;
    while(x>0){
        x >>=1;
        a++;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    int bits = powerOfTwo(n);
    bool flag=false;
    vector<int>ans;
    ans.push_back(1);
    int maxel=1;
    int a=2;
    for(int i=1;i<n;i++){
        ans.push_back(a);
        if(a>maxel){
            vector<int> v=ans;
            reverse(vall);
            for(int x=1;x<v.size();x++)
            {
                if(i==n){
                    print(ans,n);
                    return;
                }
                ans.push_back(v[x]);
                i++;
            }
            maxel=a;
        }
        a++;
    }
    print(ans,n);
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