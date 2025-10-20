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
    unordered_map<int,int>freq;
    //either sorted asc or desc
    bool asc = true;
    bool desc = true;
    for(int i=0;i<n;i++){
        cin >> v[i];
        freq[v[i]]++;
        if(i>0 && desc){
            if(v[i]>v[i-1]) desc = false;
        }
        if(i>0 && asc){
            if(v[i]<v[i-1]) asc = false;
        }
    }
    if(n==1){
        cout << 2 << endl;
        return;
    }
    if(!asc && !desc) {
        cout << 0 << endl; 
        return;
    }
    int maxel = *max_element(v.begin(),v.end());
    int minel = *min_element(v.begin(),v.end());
    if(freq[maxel]<=2){
        cout << 1 << endl;
    }
    else if(freq[maxel] == n)
    {
        if(maxel==n-1)
        cout << 2 << endl;
        else{
            cout << 1 << endl;
        }
    }
    else{
        cout << 0 << endl;
    }
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