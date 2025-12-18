#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const vector<pair<int,int>>& v) {
    for (auto &i : v) {
        cout << i.first << " " << i.second <<endl;
    }
    cout << endl;
}

void solve() {
    int n,k;
    cin >> n >> k;
    if(k==n-1 && n == 4){
        cout << -1 << endl;
        return;
    }
    else if(k==n-1){
        vector<pair<int,int>>pairs;
        vector<bool>seen(n,false);
        //match all powers of 2 to the partner of the next power of 2
        for(int i=0;i<n;i++){
            if ( (i & (i - 1)) == 0 || ((n - 1 - i) & (n - 2 - i)) == 0 ){
                if(!seen[i]&&!seen[n-1-i])
                {
                    if((i & (i - 1)) == 0 )
                    pairs.push_back({i,n-1-i});
                    else
                    pairs.push_back({n-1-i,i});
                    
                    seen[i]=seen[n-1-i]=true;
                }
            }
            else{
                if(!seen[i] && !seen[n-1-i])
                {
                    cout << i << " " << n-1-i << endl;
                    seen[i]=seen[n-1-i]=true;
                }
            }
        }
        // print(pairs);
        for(int i=0;i<pairs.size()-1;i++){
            cout << pairs[i].first << " " << pairs[i+1].second << endl;
        }
        cout <<  pairs.back().first << " "<< pairs[0].second<<endl;
        return;
    }
    vector<bool>seen(n,false);

    cout << k << " " << n-1 << endl;
    seen[k]=seen[n-1]=true;
    for(int i=1;i<(n/2);i++)
    {   
        if(i==k) continue;
        int x = n-1-i;
        if(seen[x]) x=0;
        cout << i << " " << x << endl;
        seen[i]=true;
        seen[x]=true;
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        if(seen[i]==false){
            cout << i << " ";
            seen[i]=true;
            flag=true;
        }
    }
    if(flag){
        cout << endl;
    }
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}