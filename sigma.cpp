#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        // Your code here
        int n,m;
        cin >> n >> m;
        vector<pair<int, vector<int>>> pairs(n);
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            vector<int>array(m);
            for(int k=0;k<m;k++)
            {
                cin >> array[k];
                sum += array[k];
            }
            pairs[i] = {sum, array}; // Store sum and array in pairs
        }
        //sort by pairs.second
        sort(pairs.begin(), pairs.end(), [](const pair<int, vector<int>>& a, const pair<int, vector<int>>& b)
        {
            return a.first > b.first;
        });

        //access highest sum and start prefix summing 
        int prefixSum = 0; // Running prefix sum
        int totalsum = 0;  // Final result

        // Prefix add all elements of the sorted arrays
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < m; k++) {
                prefixSum += pairs[i].second[k]; // Add each element to the prefix sum
                totalsum += prefixSum;           // Add the current prefix sum to the total sum
            }
        }
        cout << totalsum <<endl;
    }
}