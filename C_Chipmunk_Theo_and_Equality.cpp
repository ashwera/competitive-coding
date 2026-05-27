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


void first_bfs(int x,
               unordered_map<int,int>& total,
               unordered_map<int,int>& cnt){

    int steps = 0;
    unordered_set<int> vis;

    while(!vis.count(x)){

        vis.insert(x);

        total[x] += steps;
        cnt[x]++;

        if(x & 1) x++;
        else x /= 2;

        steps++;
    }
}

void bfs(int x,
         unordered_map<int,int>& total,
         unordered_map<int,int>& cnt){

    int steps = 0;
    unordered_set<int> vis;

    while(!vis.count(x)){

        vis.insert(x);

        if(cnt.count(x)){
            total[x] += steps;
            cnt[x]++;
        }

        if(x & 1) x++;
        else x /= 2;

        steps++;
    }
}

void solve() {
    unordered_map<int,int>total,cnt;  
    int n; cin >> n;
    vector <int> v(n);
    int ans=1e9;    
    input
    first_bfs(v[0],total,cnt);
    for(int i=1;i<n;i++){
        bfs(v[i], total, cnt);    
    }
    for(auto [x,c] : cnt){
        if(c == n)
            ans = min(ans, total[x]);
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