#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define inputb for(int &i:b) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

bool cont(vector<int>&b){
    int n = b.size();
    vector<bool>seen(n+1,false);
    for(int i=0;i<n;i++)
    {
        if(seen[b[i]]) return false;
        while(i+1<n && b[i+1]==b[i]){
            i++;
        }
        seen[b[i]] = true;
    }
    return true;
}

bool order(vector<int>&a, vector<int>&b){
    int n = a.size();
    vector<int> blocks;
    for(int i = 0; i < n; i++){
        if(i == 0 || b[i] != b[i-1]){
            blocks.push_back(b[i]);
        }
    }
    int j = 0;
    for(int x : blocks){
        while(j < n && a[j] != x){
            j++;
        }
        if(j == n) return false;
        j++;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n),b(n);
    input
    inputb
    // cout << cont(b) << endl;
    // cout << order(v,b) << endl;
    if(cont(b) && order(v,b)){
        yes return;
    }
    no
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