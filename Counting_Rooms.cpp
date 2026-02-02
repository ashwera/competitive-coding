#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

vector<vector<bool>>visited(1000,vector<bool>(1000));
vector<pair<int,int>>dir = {{-1,0},{1,0},{0,1},{0,-1}};
int ans=0;

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void dfs(int r,int c,vector<vector<char>>&m){
    //visit all directions.
    // if found another dot, mark it visited and dfs on it 
    if(visited[r][c]==true) return;
    visited[r][c]=true;
    for(int i=0;i<4;i++){
        int x=r+dir[i].first;
        int y=c+dir[i].second;
        if((x>=0&&x<m.size())&&(y>=0&&y<m[0].size())){
            if(m[x][y]=='.'){
                dfs(x,y,m);
            }
        }
    }
}

void solve() {
    int r,c;
    cin >> r >> c;
    vector<vector<char>>m(r,vector<char>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> m[i][j];
        }
    }
    //number of connected components-> number of dots in contact
    // found one dot-> dfs across four directions
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(m[i][j]=='.' && visited[i][j]==false){
                dfs(i,j,m);
                ans++;
            }
        }
    }
    cout << ans << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t=1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
}