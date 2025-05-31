#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]] = i+1; //to avoid 0. adjust later
        }
        for(int i=0;i<nums.size();i++)
        {
            int need = target-nums[i];
            if(mp[need])
            {
                //need exists
                int idx= mp[need]-1;//adjust 
                if(i!=idx)
                {
                    return{i,idx};
                }
            }
        }
         return {};
    }
};