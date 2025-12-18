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

bool kLengthApart(vector<int>& nums, int k) {
        int d=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1 && d>0){
                cout << "oops\n";
                if(d<k) {
                    cout <<"er";
                    return false;
                }
                d=0;
            }
            else{
                d++;
            }
        }
        return true;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    vector<int>v = {1,0,1};
    int k = 2;
    cout << kLengthApart(v,k) << endl;
}

