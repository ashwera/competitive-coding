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

void print(const map<int,int>&mp){
    for(auto [k,v]:mp){
        cout << k << " : " << v<< endl;
    }
}

void solve() {
    int n; cin >> n;
    vector <int> v(n);
    map<int,int>freq;
    bool flag=false;
    for(int i=0;i<n;i++){
        cin >> v[i];
        freq[v[i]]++;
        if(freq[v[i]]>2) {
            flag=true;
        }
    }
    if(n==1){
        yes 
        cout << 1 << "\n" << 1 << endl; return;
    }
    if(flag){
        no return;
    }
    map<int,int>f2=freq;
    flag=false;
    vector<int>p(n,-1),q(n,-1);
    for(int i=0;i<n;i++){
        if(freq[v[i]]==1){
            p[i] = v[i];
            q[i] = v[i];
        }
    }
    freq=f2;

    set<int> free;
    for(int i=1;i<=n;i++)
        if(!freq.count(i)) free.insert(i);
    map<int,int> partner;

for(auto [x,c] : freq){
    if(c==2){
        auto it = free.lower_bound(x);
        if(it==free.begin()){
            no; return;
        }
        --it;
        partner[x] = *it;
        free.erase(it);
    }
}
for(int i=0;i<n;i++){
    if(freq[v[i]]==1){
        p[i]=q[i]=v[i];
    }
    else{
        if(freq[v[i]]==2){
            p[i]=v[i];
            q[i]=partner[v[i]];
            freq[v[i]]-=2;
        }
        else{
            p[i]=partner[v[i]];
            q[i]=v[i];
        }
    }
}


    yes
    print(p);
    print(q);
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