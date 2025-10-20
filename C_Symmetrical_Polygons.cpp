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

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    input
    //basic
    //add all pairs first
    //store all loners
    //sort loners
    //add max two loners 
    //store max side
    //check polygonism
    map<int,int>freq;
    for(int i:v){
        freq[i]++;
    }
    int ans=0;
    priority_queue<int>unused;
    int evens=0;
    for(auto[k,v]:freq){
        if(v%2==0){
            //even freq, add all
            ans += (k*v);
            evens+=v;
        }
        else{
            ans += (k*(v-1));
            unused.push(k);
            evens+=(v-1);
        }
    }
    if(ans==0) {
        cout << 0 << endl;
        return;
    }

    if(unused.size()>=1){
        bool found = false;
        while(unused.size()>=2){
            int x = unused.top();
            unused.pop();
            int y = unused.top();
            if(abs(x-y) < ans){
                ans += (x+y);
                evens+=2;
                found=true;
                break;
            }
        }
        if(!found) {
            if(unused.top()<ans) {
                ans+=unused.top();
                evens+=1;
                found=true;
            }
        }  
}
if(evens<3)ans=0;
cout << ans << endl;  
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