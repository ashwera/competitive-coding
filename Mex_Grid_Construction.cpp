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

int whatismex(vector<int>v){
    int mex=0;
    sort(v.begin(),v.end());
    for(int x:v){
        if(x==mex)mex++;
        if(x>mex) return mex;
    }
    return mex;
}
void populate(vector<int>& consideration, vector<vector<int>>& source, int row, int column){
    for(int i=0;i<column;i++){
        //go thru rows 
        consideration.push_back(source[row][i]);
    }
    for(int i=0;i<row;i++){
        consideration.push_back(source[i][column]);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){matrix[i][j]=0; continue;}
            if(j==0){matrix[i][j]=i; continue;}
            if(i==0){matrix[i][j]=j; continue;}
            matrix[i][j]=-1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            vector<int>consideration;
            if(matrix[i][j]!=-1) continue;
            populate(consideration,matrix,i,j);
            // print(consideration);
            // cout << "\n for index " << i << " " << j << endl;
            int mex = whatismex(consideration);
            matrix[i][j] = mex;
            matrix[j][i] = mex;
        }
    }

    for(vector<int>x:matrix){
        print(x);
    }
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