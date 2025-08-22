#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

long long perfectPairs(vector<int>& nums) {
        long long n = nums.size();
        for(int &i:nums)
            {
                if(i<0)
                    i*=(-1);
            }
        sort(nums.begin(),nums.end());
        long long pairs=0;
        for(int i=0;i<n;i++)
            {
                auto it = lower_bound(nums.begin(),nums.end(),(nums[i]+nums[i]));
                if(it!=nums.end())
                {
                    long long index = it - nums.begin();
                    pairs += (index-i);
                    // cout << index << endl;
                }
                else
                {
                    pairs += (n-1-i);
                }
            }
        if(pairs<0) pairs=0;
        return pairs;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

        int n;
        cin >> n;
    vector<int> v(n);

        input
        cout << perfectPairs(v) << endl;
    
}