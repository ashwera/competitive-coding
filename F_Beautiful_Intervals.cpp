#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES"  << endl;
#define no cout << "NO" << endl;
#define input for(int &i:v) cin >> i;
#define sort sort(v.begin(),v.end());

void print(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void populate(vector<int>&ans, int start){
    for(int i=0;i<ans.size();i++){
        if(ans[i]<0){
            ans[i] = start;
            start++;
        }
    }
    print(ans);
}

void solve() {
    int n,k; cin >> n >> k;
    int newk=0;
    vector <int> ans(n,-1),da(n+1,0);
    vector<int> left(n,0),right(n,0);
    //keep everything 0 indexed right now
    for(int i=0;i<k;i++){
        int l,r;
        cin >> l >> r;
        l--; r--; //make 0 indexed. 
        if(!(left[l]!=0 && right[r]!=0)) //new interval
        {
            newk++;
            da[l]++;
            da[r+1]--;
        }
        left[l]++;
        right[r]++;
    } 
    // print(da);

    for(int i=1;i<=n;i++){
        da[i]=da[i]+da[i-1];
    }
    // print(da);
    for(int i=0;i<n;i++){
        if(da[i]==newk){
            //place zero on this index.
            ans[i]=0;
            populate(ans,1);
            return;
        }
    }
    // print(left);
    // print(right);
    //no overlap of this type. check for indices of only start or only end.
    for(int i=0;i<n;i++){
        if((left[i]>0 && right[i]==0) && i<(n-1)){
            //starts never ends. 
            // cout <<"gua";
            //keep 1 first and zero next. 
            ans[i]=0;
            ans[i+1]=1;
            populate(ans,2);
            return;
        }
        else if((left[i]==0 && right[i]>0)&&i>0){
            // cout <<"here";
            ans[i]=0;
            ans[i-1]=1;
            populate(ans,2);
            return;
        }
        else if(left[i]==0 && right[i]==0){
            ans[i]=0;
            populate(ans,1);
            return;
        }
    }
    //none worked mex is 2
    // 021 format
    ans[0]=0;
    ans[n-1]=1;
    ans[n/2]=2;
    //mex is never 2 in any interval. 
    populate(ans,3);
    return;
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