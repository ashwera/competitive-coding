#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    k++;
    vector<long double>a(k);
    vector<long double>b(k);
    a[0]=0;b[0]=0;
    for(int i=1;i<k;i++)cin>>a[i];
    for(int i=1;i<k;i++)cin>>b[i];

    // vector<long double>time(k); 
    // time[0] = 0; 
    // for(int i=1;i<k;i++)
    // {
    //     time[i] = (a[i]-a[i-1])/(b[i]-b[i-1]);
    // }  
    
    // // debug:
    // // for(long double num : time)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;

    while(q--)
    {
        //compute each query
        int minutes=0;
        // cout << endl;
        int distance;
        cin >> distance;

        //find upperbound of distance in a.
        //find same in b
        //find difference of upperbound and distance. multiply with same index in time. add to b
        
        auto it = upper_bound (a.begin(),a.end(),distance); //distance se just chota 
        int index = it-a.begin()-1;

        // debug1:
        // cout << "upperbound found " << a[index] << endl;

        minutes += b[index];
        
        // cout << "adding  " << b[index] << endl;

        distance -= a[index];

        // cout << "distance left is " << distance << " and time for this is " << time[index+1] << endl;
        if(distance>0)
        minutes += (distance * (b[index+1]-b[index]))/(a[index+1]-a[index]);
        // minutes += (distance/time[index+1]);

        cout << minutes << " ";
    }
    cout << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve(); 
    }
}