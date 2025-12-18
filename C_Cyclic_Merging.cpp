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
    vector <int> v(n);
    input
    int beg=0,end=n-1;
    int freq=0, ans=0;
    //eliminate all concurrently occuring elements and add freq-1*val to score 
    //then just lineraly move
    if(v[0]==v[n-1]){
        int val=v[0];
        for(int i=1;i<n;i++){
            if(v[i] == val){
                freq++;
                v[i]=-1;
            }
            else {
                beg = i-1;
                break;
            }
        }
        for(int i=n-1;i>beg;i--){
            if(v[i] == val){
                freq++;
                v[i]=-1;
            }
            else {
                end = i;
                break;
            }
        }
        ans += (freq)*val;
    }
    // cout << beg << " " << end << endl;
    // cout << ans << endl;
    freq=0;
    for(int i=beg;i<end;i++){
        if(v[i] == v[i+1]){
            v[i]=-1;
            freq++;
        }
        else{
            if(freq>1){
                ans += (freq)*(v[i]);
            }
            freq=0;
        }
    }
    // print(v);
    vector<int>v2;
    for(int i=0;i<n;i++){
        if(v[i]!=-1)
            v2.push_back(v[i]);
    }
    int x = v2.size();
    for(int i=0;i<x;){
        if(v2[i] > v2[x-1]){
            //last el makes choice
            if(v[x-2] < v[i]){
                ans += max(v[x-1],v[x-2]);
                v[x-2]=v[x-1];
                x--;
            }
            else{
                i++;
            }
        }
        else{
            if(v[i+1] < v[x-1]){
                ans += max(v[i+1],v[i]);
                v[i+1] = v[i];
            }
        }
    }
    cout << ans << endl;
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