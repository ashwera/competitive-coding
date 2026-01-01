#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<vector<int>>& v) {
    for (vector<int> i : v) {
        for(int j:i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int shortestPath(vector<vector<int>>v, int n){
    int dr[] = {-1,1,0,0};
    int dc[] = {0,0,1,-1};
    
    vector<vector<int>>safe = v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==0){
                for(int k=0;k<4;k++){
                    int adjc = j+dc[k];
                    int adjr = i+dr[k];
                    if(adjc >=0 && adjc < n && adjr < n && adjr >= 0){
                        safe[adjr][adjc] = 0;
                    }
                }
            }
        }
    }
    queue<pair<int,int>>q;
    vector<vector<int>>distance (n,vector<int>(n,-1));
    //populate queue with first col
    for(int i=0;i<n;i++){
        if(safe[i][0]!=0){
            q.push({i,0});
            distance[i][0]=0;
        }
    }
    // print(safe);
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();

        int currow = cur.first;
        int curcol = cur.second;
        if(curcol==n-1){
            return distance[currow][curcol];
        }
        for(int k=0;k<4;k++){
            int adjc = curcol+dc[k];
            int adjr = currow+dr[k];
            if(adjc >=0 && adjc < n && adjr < n && adjr >= 0){
                //valid boundary
                if(safe[adjr][adjc]!=0 && distance[adjr][adjc]==-1){
                    q.push({adjr,adjc});
                    distance[adjr][adjc] = distance[currow][curcol]+1;
                }
            }
        }
    }
    return -1;
}

void solve() {
    int n; cin >> n;
    vector<vector<int>>v (n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
    cout << shortestPath(v,n) << endl;
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