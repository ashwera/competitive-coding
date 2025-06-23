#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n ,m;
    cin >> n >> m;
    int maxel = 0;
    vector<vector<int>>matrix;
    for(int i=0;i<n;i++)
    {
        vector<int>row(m);
        for(int j=0;j<m;j++)
        {
            cin >> row[j];
            maxel = max(maxel,row[j]);
        }
        matrix.push_back(row);
    }
    //now, find the max element's x and y counts 
    map<int,int>xcoordinate;
    map<int,int>ycoordinate;
    int countx=0;
    int county=0;
    int maxelcount=0;
    for(int i=0;i<n;i++)
    {
        vector<int>row = matrix[i];
        for(int j=0;j<m;j++)
        {
            if(row[j]==maxel)
            {
                maxelcount++;
                xcoordinate[i]++;
                ycoordinate[j]++;
                if(xcoordinate[i]>1)
                {
                    countx = max(countx,xcoordinate[i]);
                }
                if(ycoordinate[j]>1)
                {
                    county = max(county,ycoordinate[j]);
                }

                cout << "maxel count: "<<maxelcount<<endl;
                cout << "count of x coordiantes " << countx << endl;
                cout << "count of y coordinate " << county << endl;
            }
        }
    }

    if(maxelcount == countx+county) cout << maxel-1 << endl;
    else cout << maxel << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}