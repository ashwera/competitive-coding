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
    int size=n;
    vector <int> v(n);
    input
    int c=0, sum=0;
    for(int i:v)
    {
        sum +=i;
        if(i!=0){
            c++;
        }
    }
    while(true){
        if(sum-c >= size-1){
            cout << c << endl;
            return;
        }
        else{
            c--;
        }
        if(c==1) break;
    }
    cout << c << endl;
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