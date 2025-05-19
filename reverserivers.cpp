#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k,q;
    cin >> n >> k >> q;
    vector<vector<int>> water(n, vector<int>(k));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin >> water[i][j];
            if(i>0)
            {
                //next row onwards
                water[i][j] |= water[i-1][j];
            }
        }
    }
    // debug:
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<k;j++)
    //     {
    //         cout << water[i][j] << " ";
    //     }
    //     cout << endl;
    // }b
    bool ran;

    while(q--)
    {
        //each query 
        int m;
        cin>>m;
        int smallestpossible=0;
        //requirement
        while (m--)
        {
            int i,c;
            char o;
            cin >> i >> o >> c;
            i--;
            ran=false;
            //col i, character o, value c
            //if >, search topdown in column i
            //if <, search bottom up in column i
            //eliminate rows one by one.
            // smallestpossible=0;
            if(o=='>')
            {
                for(int p=smallestpossible;p<n;p++)
                {
                    if(water[p][i]>c)
                    {
                        ran = true;
                        smallestpossible = p;
                        // cout << "here and "<< p << endl;
                        break;
                    }
                }
            }
            else
            {
                for(int p=smallestpossible;p<n;p++)
                {
                    if(water[p][i]<c)
                    {
                        ran = true;
                        smallestpossible = p;
                        // cout << "here and "<< p << endl;
                        break;
                    }
                }
            }

            if(!ran)
            {cout << -1 << endl;
            break;}
        }
        if(ran)
        cout << smallestpossible+1 << endl;
    }
}
signed main() {
    int t;
    t=1;
    while (t-- > 0) {
        solve(); 
    }
}