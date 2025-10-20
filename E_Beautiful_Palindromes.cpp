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

bool isPalindrome(vector<int>&v,int n){
    if(v[n-3]==v[n-1] && v[n-2]==v[n-1] ) return true;
    if(v[n-3]==v[n-2]) return true;
    if(v[n-2]==v[n-1]) return true;
    else return false;
}

void solve() {
    int n,k; cin >> n>>k;
    vector <int> v(n);
    vector <bool> exists(n+1,false);
    for(int &i:v){
        cin >> i;
        exists[i]=true;
    }
    vector<int>unused;
    for(int i=1;i<=n;i++){
        if(!exists[i]){
            unused.push_back(i);
        }
    }
    
    
    if(unused.size()>1)
        {while(k>0){
            cout << unused[0] << " "; k--;
            if(k==0) break;
            cout << unused[1] << " ";
            k--;
            if(k==0) break;
            cout << v[n-1] << " "; k--;
        }
        }
    else if(unused.size()>0){
        //ONLY IF SL AND LAST NOT EQUAL
        if(v[n-1]==v[n-2]){
            v[n-2] = v[n-3];
        }
        while(k>0){
            cout << unused[0] << " "; k--;
            if(k==0) break;
            cout << v[n-2] << " ";
            k--;
            if(k==0) break;
            cout << v[n-1] << " "; k--;
        }
    }

    if(!isPalindrome(v,n)){
        while(k>0){
            cout << v[n-3] << " "; k--;
            if(k==0) break;
            cout << v[n-2] << " "; k--;
            if(k==0) break;
            cout << v[n-1] << " "; k--;
        }
    }
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
        cout << endl;
    }
}