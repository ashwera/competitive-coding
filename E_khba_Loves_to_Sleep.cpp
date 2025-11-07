#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;

void print(const set<int>& v, int k) {
    // cout << v.size() << endl;
    int counter=0;
    for (int i : v) {
        cout << i << " ";
        counter++;
        if(counter==k){
            break;
        }
    }
    cout << endl;
}

void print(const vector<int>& v, int k) {
    // cout << v.size() << endl;
    int counter=0;
    for (int i : v) {
        cout << i << " ";
        counter++;
        if(counter==k){
            break;
        }
    }
    cout << endl;
}

bool possible(int target, const vector<int> &v, int n, int k, int x){
    int tel=0;
    int req = 2*target + 1;
    if(n>1){
            for(int i=1;i<n;i++){
            if(v[i]-v[i-1] >= req){
                tel += v[i]-v[i-1]-req;
            }
        }
    }
    //add for ends 
    if(v[0]!=0){
        if(v[0]>target){
            tel += (v[0]-target);
        }
    }
    if(v[n-1]!=x){
        //no friend at extreme end 
        if(x-v[n-1]-1 >= target){
            tel += (x-v[n-1]-target);
        }
    }
    if(tel>=k) return true;
    else return false; 
}

void solve() {
    int n,k,x;
    cin >> n >> k >> x;
    vector<int>v(n);
    input
    sort(v.begin(),v.end());
    int lo=0;
    int hi=x;
    while(lo<=hi){
        int target = (lo+hi) / 2;
        if(possible(target,v,n,k,x)){
            // cout << target << " is possible and " << lo << " is low "<< hi << " is high" << endl;
            lo = target+1;
        }
        else{
            // cout << target << " is not possible and " << lo << " is low "<< hi << " is high" << endl;
            hi = target-1;
        }
    }
    // cout << hi << endl; // check 
    //hi is our max gap
    map<int,bool>seen;
    if(hi<0){
        set<int>ans;
        int el=0;
        for(int i=0;i<k;i++){
            ans.insert(el);
            el++;
        }
        print(ans,k);
        return;
    }
    set<int>ans;
    if(v[0]!=0){
        //first space is free, fill from 0 to v[0]-hi
        int val=0;
        while(val < v[0]-hi){
            if(!seen[val])
            {ans.insert(val);
            seen[val]=true;}
            val++;
        }
    }
    if(v[n-1]!=x){
        //rhs is free
        //fill from rightmost to 
        int val=x;
        while(val > v[n-1]+hi){
            if(!seen[val])
            {ans.insert(val);
            seen[val]=true;}
            val--;
        }
    }
    for(int i=1;i<n;i++){
        int start = v[i-1]+hi+1;
        int end = v[i]-hi-1;
        for(int j=start;j<=end;j++){
            if(!seen[j])
            {ans.insert(j);
            seen[j]=true;}
        }
    }
    print (ans,k);
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