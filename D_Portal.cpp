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

void sortcycl(vector<int>& v){
    if(v.empty()) return;

    int pos = min_element(v.begin(), v.end()) - v.begin();
    rotate(v.begin(), v.begin() + pos, v.end());
}

void solve() {
    int n,x,y; 
    cin >> n >> x >> y;
    vector <int> v(n),a,b;
    input
    for(int i=0;i<n;i++){
        if(i<x || i>=y) b.push_back(v[i]);
        else a.push_back(v[i]);
    }

    // print(a);
    // print(b);
    sortcycl(a);
    // sortcycl(b);
    // print(a);
    // print(b);

    if(a.empty()){
        print(b);
        return;
    }
    if(b.empty()){
        print(a);
        return;
    }
    
    bool flag=false;
    v.clear();
    for(int i=0;i<b.size();i++){
        int j=0;
        if(b[i]>a[0] && !flag){
            flag=true;
            while(j<a.size()){
                v.push_back(a[j]);   
                j++;
            }
        }
        v.push_back(b[i]);
    }
    
    if(!flag){
        for(int x : a) v.push_back(x);
    }
    print(v);
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