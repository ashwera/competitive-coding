#include <bits/stdc++.h>
using namespace std;
#define int long long

int calculate(int x , int rad, int c)
{
    int ans = pow(rad,2) - pow(x-c,2);
    ans = pow(ans,.5);
    
    ans = (2*ans)+1;
    // cout << "at " << x << " " << ans;

    return ans;
}

void solve() {
    int n,m;
    cin >> n >> m;
    //m is useless
    //n is the number of circles
    vector<int>centers(n);
    vector<int>radii(n);
    for(int i=0;i<n;i++)
    {
        cin >> centers[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> radii[i];
    }
    unordered_map<int, int> maxCounter;//to handle duplicates
    // vector<pair<int,int>>dotcount; 
    //each pair here stores x value and its corresponding dots on y axis.
    //we take maximum points in case of overlaps
    //we tackle one center at a time
    for(int i=0;i<n;i++)
    {
        //coordinates are center-radius to center+radius
        int starting = centers[i]-radii[i];
        int ending = centers[i]+radii[i];
        int diameter = 2*radii[i]+1; //we add one to efficiently count all x points 
        int counter = 1; //do something with this later. 
        for(int j=0;j<diameter;j++) 
        {
            //j runs thru the horizontal length of circle
            counter = calculate(starting,radii[i],centers[i]); //give coordinate and radius to calculate.
            maxCounter[starting] = max(maxCounter[starting], counter);
            starting++;
        }
    }
    int totalSum = 0;
    for (auto it = maxCounter.begin(); it != maxCounter.end(); ++it) {
        totalSum += it->second; 
    }
    cout << totalSum << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}
