#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

//this made me very happy 

int numberofsubarr(int x, vector<int>& v)
    {
        //check if the array can be split into k parts
        //with max sum as mid
        int n = v.size();
        int sum=0;
        int el=01;
        for(int i=0;i<n;i++)
        {
            if (sum + v[i] > x) 
            {
                el++;
                sum = v[i];
            }
            else
            {
                sum+=v[i];
            }
        }
        return el;
    }
    
    int minTime(vector<int>& arr, int k) {
       //binary search on answer
       int sum=0;
       int maxel=-1;
       for(int i:arr)
       {
           sum+=i;
           maxel = max(maxel,i);
       }
    //    cout << sum << " is the sum\n";
    //    cout << maxel << " is the max element\n";
       //binary search in range maxel -> sum
       int high = sum;
       int low = maxel;
       int mid=(high+low)/2;
       int ans = mid;
       while (low <= high)
       {
           mid = (high+low)/2;
        //    cout << mid << endl;
           int nos = numberofsubarr(mid,arr);
        //    cout << nos << endl;
           if(nos<=k)
           {
                //try reducing mid 
                ans = mid;
                // cout << "correct, but try reducing\n";
                high = mid-1;
           }
           else if(nos>k)
           {
               //too many subarrays, increase low
            //    cout << "too many subarrays\n";
               low = mid+1;
           }
       }
       return ans;
    }

signed main() {
    int size; cin>>size;
    vector<int>v(size);
    // int size;
    input
    int k;
    cin >> k;
    cout << minTime(v,k) << endl;
}