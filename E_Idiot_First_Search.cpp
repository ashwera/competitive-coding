#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
const int mod = 1e9+7;

void print(const vector<int>& v, int fac) {
    for (int i=1;i<v.size();i++) {
        cout << ((v[i]%mod)+fac)%mod << " ";
    }
    cout << endl;
}

vector<int> djikstra(vector<vector<pair<int,int>>>&adjlist){
    int n = adjlist.size();
    vector<int>dist(n,1e18);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    dist[0]=0;
    pq.push({0,0});
    while(!pq.empty()){
        auto [x,y] = pq.top(); pq.pop();
        if(x != dist[y]) continue;
        for(auto [v,w] : adjlist[y]){
            if(dist[v] > x+w){
                dist[v] = x+w;
                pq.push({dist[v],v});
            }
        }
    }
    return dist;
}


int calc(int u, vector<pair<int,int>>& tree, vector<int>& dp){
    if(u==0) return 0;
    if(dp[u]!=-1) return dp[u];

    int L = tree[u-1].first;
    int R = tree[u-1].second;

    if(L==0 && R==0) return dp[u]=1;

    return dp[u] = calc(L,tree,dp) + calc(R,tree,dp) + 3;
}

void solve() {
    int n; cin >> n;
    vector<pair<int,int>>tree(n);
    vector<vector<pair<int,int>>>adjlist(n+1);
    // adj[u] = {v,w};
    adjlist[0].push_back({1,0});
    adjlist[1].push_back({0,0});
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        tree[i] = {x,y};
    }
    vector<int> dp(n+1,-1);
    calc(1,tree,dp);

    for(int i=0;i<n;i++){
        if(tree[i].first == 0) continue;
        adjlist[i+1].push_back({tree[i].first, dp[tree[i].first]});
        adjlist[tree[i].first].push_back({i+1, dp[tree[i].first]});
        adjlist[i+1].push_back({tree[i].second, dp[tree[i].second]});
        adjlist[tree[i].second].push_back({i+1, dp[tree[i].second]});
    }
    // now find shortest path using djikstra from src = 0 to all nodes 1 to n 
    vector<int> dist = djikstra(adjlist);
    print(dist,dp[1]);
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