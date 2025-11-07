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

bool edgethree(vector<vector<char>> &v, int x1, int y1){
    int n = v.size();
    if(y1<n-1 && x1<n-1 && v[x1+1][y1]=='#' && v[x1+1][y1+1]=='#'){
        return true;
        // normal l
    }
    if(y1>0 && x1<n-1 && v[x1+1][y1]=='#' && v[x1+1][y1-1]=='#'){
        return true;
    }
    if(y1<n-1 && x1<n-1 && v[x1+1][y1]=='#' && v[x1][y1+1]=='#'){
        return true;
    }
    if(y1<n-1 && x1<n-1 && v[x1][y1+1]=='#' && v[x1+1][y1+1]=='#'){
        return true;
    }
    return false;
}

bool edgefour(vector<vector<char>> &v, int x1, int y1){
    //z shape
    int n = v.size();
    if(x1<n-1 && y1<n-2){
        char c1 = v[x1][y1+1];
        char c2 = v[x1+1][y1+1];
        char c3 = v[x1+1][y1+2];
        if(c1=='#' && c2=='#' && c3=='#'){
            return true;
        }
    }

    if(x1<n-1 && y1<n-1 && y1>0){
        char c1 = v[x1][y1+1];
        char c2 = v[x1+1][y1];
        char c3 = v[x1+1][y1-1];
        if(c1=='#' && c2=='#' && c3=='#'){
            return true;
        }
    }

    if(x1<n-1 && y1<n-1){
        char c1 = v[x1][y1+1];
        char c2 = v[x1+1][y1];
        char c3 = v[x1+1][y1+1];
        if(c1=='#' && c2=='#' && c3=='#'){
            return true;
        }
    }
    return false;
}

void solve() {
    int n; cin >> n;
    int bc=0;
    vector<vector<char>>v (n,vector<char>(n));
    int x1,y1;
    bool first=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
            if(v[i][j]=='#') {
                bc++;
                if(!first){
                    first=true;
                    x1=i;
                    y1=j;
                }
            }
        }
    }
    // cout << x1 << y1 << endl;
    if(bc<2) {
        yes return;
    }

    if(bc==3){
        bool ans = edgethree(v,x1,y1);
        if(ans==true){
            yes return;
        }
    }

    if(bc==4){
        bool ans = edgefour(v,x1,y1);
        if(ans==true){
            yes return;
        }
    }

    int safe=bc;
    // cout << "hadsbas" << endl;
    //down right
    char dir='D';
    int i=x1,j=y1;
    while(bc>0 && i<n && j<n){
        // cout << i << j << endl;
        if(dir=='D')
        {
            dir = 'R';
            if(v[i][j]=='#'){
                bc--;
            }
            i++;
            continue;
        }
        else{
            dir = 'D';
            if(v[i][j]=='#'){
                bc--;
            }
            j++;
        }
    }
    if(bc==0){
        yes return;
    }

    bc=safe;
    i=x1,j=y1;
    dir='R';
    //pehle right phir down
    // cout << "here" << endl;
    while(bc>0 && i<n && j<n){
        if(dir=='D')
        {
            dir = 'R';
            if(v[i][j]=='#'){
                bc--;
                
            }i++;
            continue;
        }
        else{
            dir = 'D';
            if(v[i][j]=='#'){
                bc--;
                
            }j++;
        }
    }
    if(bc==0){
        yes return;
    }

    bc=safe;
    i=x1, j=y1;
    // check if first black is on our first black ka right
    if(j<n-1 && v[i][j+1]=='#'){
        j+=1;
    }

    //left down
    dir='L';
    while(bc>0 && i<n && j>=0){
        if(dir=='L')
        {
            dir = 'D';
            if(v[i][j]=='#'){
                bc--;
                
            }j--;
            continue;
        }
        else{//go down
            dir = 'L';
            if(v[i][j]=='#'){
                bc--;
                
            }i++;
        }
    }
        if(bc==0){
        yes return;
    }

    bc=safe;

    i=x1, j=y1;
    // check if first black is on our first black ka right
    if(j<n-1 && v[i][j+1]=='#'){
        j+=1;
    }

    //down left
    // cout << "downleft" << endl;
    // cout << i << " " << j << endl;
    dir='D';
    while(bc>0 && i<n && j>=0){
        if(dir=='L')
        {
            dir = 'D';
            if(v[i][j]=='#'){
                bc--;
                
            }j--;
            continue;
        }
        else{//go down
            dir = 'L';
            if(v[i][j]=='#'){
                bc--;
                
            }i++;
        }
    }
        if(bc==0){
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