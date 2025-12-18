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
    vector <int> v(n),forward(n,0),backward(n,0);
    input
    forward[1]=1, backward[n-2]=1;
    //fwd populate
    for(int i=2;i<n;i++){
        if(v[i]-v[i-1] < v[i-1]-v[i-2]){
            forward[i]=forward[i-1]+1;
        }
        else{
            forward[i]=forward[i-1]+ v[i]-v[i-1];
        }
    }
    //bwd pop
    for(int i=n-3;i>=0;i--){
        if(v[i+1]-v[i] < v[i+2]-v[i+1]){
            backward[i]=backward[i+1]+1;
        }
        else{
            backward[i] = backward[i+1]+v[i+1]-v[i];
        }
    }
    // print(forward);
    // print(backward);
    int m;
    cin >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        a--,b--;

        if(a<b){
            //go fwd 
            cout << forward[b]-forward[a] << endl;
        }
        else if(a==b){
            cout << 0 << endl;
        }
        else{
            cout << backward[b]-backward[a] << endl;
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
    }
}