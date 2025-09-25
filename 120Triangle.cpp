#include <bits/stdc++.h>
using namespace std;

    void print(vector<vector<int>>&t)
    {
        for(vector<int>v:t)
        {
            for(int x:v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int idx=0;
        int n = triangle.size();
        //bottom up approach 
        for(int i=n-1;i>0;i--)
        {
            //each level
            vector<int>consideration = triangle[i];
            vector<int>upar = triangle[i-1];
            int size = upar.size();
            for(int j=0;j<size;j++)
            {
                upar[j] += min(consideration[j], consideration[j+1]);
            }
            if(size==1)
            {
                return upar[0];
            }
            triangle[i-1] = upar;

            // print(triangle);
        }
        return triangle[0][0];
    }
