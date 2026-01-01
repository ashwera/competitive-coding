#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> whitechoc, blackchoc;

void precompute(){
    for(int i = 0; i < 50; i++){    
        whitechoc.push_back(1LL << i);
        blackchoc.push_back(1LL << i);
    }
}

void solve(){
    int a, b;
    cin >> a >> b;
    // print(whitechoc);
    // print(blackchoc);
    int ans = 0;
    
    // break or make approachsndbajsdb
    int white = 0, black = 0;
    for(int i = 0; i < 50; i++){
        if(i % 2 == 0){
            white += whitechoc[i];
        } else {
            black += blackchoc[i];
        }
        
        if(white <= a && black <= b){
            ans = max(ans, i + 1);
        } else {
            break;
        }
    }
    
    white = 0;
    black = 0;
    for(int i = 0; i < 50; i++){
        if(i % 2 == 0){
            black += blackchoc[i];
        } else {
            white += whitechoc[i];
        }
        
        if(white <= a && black <= b){
            ans = max(ans, i + 1);
        } else {
            break;
        }
    }
    
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    precompute();
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}