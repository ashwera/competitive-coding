#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define inputa for(int &i:a) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void solve() {
    int n; cin >> n;
    vector <int> v(n),a(n);
    input
    inputa
    int aj=0,m=0;
    for(int i=0;i<n;i++){
        if(v[i]==1) aj++;
        if(a[i]==1) m++;
    }
       
        for(int i=0;i<n;i++){
            if(v[i]!=a[i] && i%2==0){
                //even turn
                if(aj%2==0){
                    aj++; m--;
                }
            }
            else if(v[i]!=a[i] && i%2!=0){
                if(m%2==0){
                    aj--;
                    m++;
                }
            }
        }
    if(aj%2!=0 && m%2!=0) {
        cout << "Tie" << endl;
    }
    else if(aj%2 ==0  && m%2==0){
        cout << "Tie" <<endl;
    }
    else if(aj%2!=0){
        cout << "Ajisai" << endl;
    }
    else cout << "Mai" << endl;
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